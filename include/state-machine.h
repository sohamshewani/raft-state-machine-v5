```c
#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int state;
    bool is_leader;
} StateMachine;

StateMachine *state_machine_create(void);
void state_machine_destroy(StateMachine *state_machine);

bool state_machine_handle_message(StateMachine *state_machine, int message);

#endif
```
