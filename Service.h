//
// Created by simon on 12/01/19.
//

#ifndef REQUESTRECEIPT_SERVICE_H
#define REQUESTRECEIPT_SERVICE_H


#include <vector>
#include <memory>
#include <map>

class Service {
public:
    struct RequestReceipt {
        RequestReceipt(int requestId, Service* owner) : requestId(requestId), owner(owner) {}
        ~RequestReceipt() {
            owner->CancelRequest(requestId);
        };
        const int requestId;

    private:
        Service* owner;
    };
public:
    Service(const int& idProvider) : mReceipts(), mIdProvider(idProvider) {};
    std::shared_ptr<RequestReceipt> MakeRequest();
    void ProcessRequest(int requestId);
    void CancelRequest(int requestId);

private:
    std::map<int, std::shared_ptr<RequestReceipt>> mReceipts;
    const int& mIdProvider;
};


#endif //REQUESTRECEIPT_SERVICE_H
