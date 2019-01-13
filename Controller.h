//
// Created by simon on 13/01/19.
//

#ifndef REQUESTRECEIPT_CONTROLLER_H
#define REQUESTRECEIPT_CONTROLLER_H


#include "Service.h"

class Controller {
public:
    Controller() : mCurrentRequestId(100), mService(std::make_unique<Service>(mCurrentRequestId)) {};

    void CreateClientRequest();

    void ProcessRequest();

private:
    int mCurrentRequestId;
    std::unique_ptr<Service> mService;
};


#endif //REQUESTRECEIPT_CONTROLLER_H
