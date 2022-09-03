#include <stdio.h>
#include <arpa/inet.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char* addr = "127.232.124.79";
    struct sockaddr_in sock_addr;
    if (inet_aton(addr, &sock_addr.sin_addr))
        printf("network ordered integer addr: %#x \n", sock_addr.sin_addr.s_addr);
    else
        printf("error occured!\n\n");

    return 0;
}