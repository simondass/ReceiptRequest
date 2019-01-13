//
// Created by simon on 13/01/19.
//

#include "Controller.h"
#include "Client.h"

void Controller::CreateClientRequest() {
    Client client(mService);
    client.MakeRequest();
}

void Controller::ProcessRequest() {
    mService->ProcessRequest(mCurrentRequestId);
}
