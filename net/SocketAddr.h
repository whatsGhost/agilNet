#ifndef AGILNET_SOCKET_ADDR
#define AGILNET_SOCKET_ADDR

#include <netinet/in.h>
#include <string>
using namespace std;
//#include <boost/algorithm/string.hpp>


namespace agilNet
{

namespace net
{
class SocketAddr
{
public:
    SocketAddr(struct sockaddr_in addr);
    SocketAddr(const string& addrPort);
    SocketAddr(const string& addr,uint16_t port);
    SocketAddr(uint16_t port);
    ~SocketAddr();
    struct sockaddr_in getAddr();
    bool isValid();
private:
    bool valid;
    struct sockaddr_in sockAddr;
};
}
}


#endif // AGILNET_SOCKET_ADDR
