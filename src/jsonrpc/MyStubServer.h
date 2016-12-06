//
// Created by mwo on 6/12/16.
//

#ifndef JSONRPCXMR_MYSTUBSERVER_H
#define JSONRPCXMR_MYSTUBSERVER_H


#include "abstractstubserver.h"

#include <iostream>

namespace xmreg
{

using namespace jsonrpc;
using namespace std;

class MyStubServer : public AbstractStubServer
{
    public:
        MyStubServer(AbstractServerConnector &connector);

        virtual void notifyServer();
        virtual std::string sayHello(const std::string& name);
};

}


#endif //JSONRPCXMR_MYSTUBSERVER_H
