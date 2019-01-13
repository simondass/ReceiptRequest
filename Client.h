//
// Created by simon on 12/01/19.
//

#ifndef REQUESTRECEIPT_CLIENT_H
#define REQUESTRECEIPT_CLIENT_H


#include <memory>
#include "Service.h"

class Client {
public:
    explicit Client(const std::unique_ptr<Service>& service) : mService(service), mRequestReceipt() {};
    void MakeRequest();

private:
    const std::unique_ptr<Service>& mService;
    std::shared_ptr<Service::RequestReceipt> mRequestReceipt;
};


#endif //REQUESTRECEIPT_CLIENT_H
