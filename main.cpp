#include <iostream>
#include "Service.h"
#include "Client.h"
#include "Controller.h"

int main() {
    Controller controller;
    controller.CreateClientRequest();
    controller.ProcessRequest();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

