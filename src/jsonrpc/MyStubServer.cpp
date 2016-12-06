//
// Created by mwo on 6/12/16.
//

#include "MyStubServer.h"

namespace xmreg
{


MyStubServer::MyStubServer(AbstractServerConnector &connector) :
    AbstractStubServer(connector)
{
}
void MyStubServer::notifyServer()
{
    cout << "Server got notified" << endl;
}
string MyStubServer::sayHello(const string &name)
{
    return "Hello " + name;
}


}
