```c
#include "config.h"
#include "stdlib.h"
#include <string.h>
#include <stdio.h>

Config *config_init(const char *config_file) {
    Config *config = (Config *)malloc(sizeof(Config));
    if (config == NULL) {
        LOG_ERROR("Failed to allocate memory for config.");
        return NULL;
    }

    config->log_dir = DEFAULT_LOG_DIR;
    config->election_timeout = DEFAULT_ELECTION_TIMEOUT;
    config->heartbeat_interval = DEFAULT_HEARTBEAT_INTERVAL;

    return config;
}

void config_destroy(Config *config) {
    free(config);
}
```
