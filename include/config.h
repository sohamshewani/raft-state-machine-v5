```c
#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>

#define DEFAULT_LOG_DIR "./log"
#define DEFAULT_ELECTION_TIMEOUT 1000
#define DEFAULT_HEARTBEAT_INTERVAL 100

typedef struct {
    const char *log_dir;
    int election_timeout;
    int heartbeat_interval;
} Config;

Config *config_init(const char *config_file);
void config_destroy(Config *config);

#endif
```
