//
// Created by simon on 12/01/19.
//

#include "Service.h"

#include <algorithm>
#include <iostream>
#include <assert.h>

void Service::CancelRequest(int requestId) {
   mReceipts.erase(requestId);
}

void Service::ProcessRequest(int requestId) {
   // std::shared_ptr<Service::RequestReceipt> requestReceipt = mReceipts[requestId];
   // std::cout << "ref count " << requestReceipt.use_count() << std::endl;
    std::cout << "ref count " << mReceipts[requestId].use_count() << std::endl;
    assert(!mReceipts[requestId].unique());
    if (mReceipts[requestId].unique())
    {
        CancelRequest(mReceipts[requestId].get()->requestId);
    }
    else
    {
        // do stuff with request
       // mReceipts.erase(std::remove(mReceipts.begin(), mReceipts.end(), requestId), mReceipts.end());
    }
}

std::shared_ptr<Service::RequestReceipt> Service::MakeRequest() {
    std::shared_ptr<Service::RequestReceipt> newReceipt = std::make_shared<Service::RequestReceipt>(mIdProvider, this);
    std::cout << "ref count " << newReceipt.use_count() << std::endl;
    mReceipts.insert(std::make_pair(mIdProvider, newReceipt));
    std::cout << "ref count " << newReceipt.use_count() << std::endl;
    return newReceipt;
}
