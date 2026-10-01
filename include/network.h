```c
#ifndef NETWORK_H
#define NETWORK_H

#include <stdbool.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

#define DEFAULT_HOST "127.0.0.1"
#define DEFAULT_PORT 5005

typedef struct {
    int sockfd;
    struct sockaddr_in addr;
} Network;

Network *network_create(const char *host, int port);
void network_destroy(Network *network);

#endif
```
