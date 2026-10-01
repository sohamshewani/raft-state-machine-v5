```c
#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOG_INFO(...) fprintf(stderr, "INFO: %" __VA_ARGS__)
#define LOG_ERROR(...) fprintf(stderr, "ERROR: %" __VA_ARGS__)
#define LOG_DEBUG(...) fprintf(stderr, "DEBUG: %" __VA_ARGS__)

void log_init(const char *log_dir);
void log_destroy(void);

#endif
```
