```c
#include "network.h"
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

Network *network_create(const char *host, int port) {
    Network *network = (Network *)malloc(sizeof(Network));
    if (network == NULL) {
        return NULL;
    }

    network->sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (network->sockfd == -1) {
        LOG_ERROR("Failed to create socket.");
        free(network);
        return NULL;
    }

    memset(&network->addr, 0, sizeof(network->addr));
    network->addr.sin_family = AF_INET;
    network->addr.sin_port = htons(port);
    if (inet_pton(AF_INET, host, &network->addr.sin_addr) <= 0) {
        LOG_ERROR("Invalid address/ Address not supported.");
        close(network->sockfd);
        free(network);
        return NULL;
    }

    return network;
}

void network_destroy(Network *network) {
    if (network->sockfd != -1) {
        close(network->sockfd);
    }
    free(network);
}
```
