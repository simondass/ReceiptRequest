#include <iostream>
#include "Service.h"
#include "Client.h"

int main() {
    int currentRequestId = 100;

    std::unique_ptr<Service> service = std::make_unique<Service>(currentRequestId);
    std::unique_ptr<Client> client = std::make_unique<Client>(service);

    client->MakeRequest();

    service->ProcessRequest(currentRequestId);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

