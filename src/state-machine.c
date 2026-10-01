```c
#include "state-machine.h"

StateMachine *state_machine_create(void) {
    StateMachine *state_machine = (StateMachine *)malloc(sizeof(StateMachine));
    if (state_machine == NULL) {
        return NULL;
    }

    state_machine->state = -1;
    state_machine->is_leader = false;

    return state_machine;
}

void state_machine_destroy(StateMachine *state_machine) {
    free(state_machine);
}

bool state_machine_handle_message(StateMachine *state_machine, int message) {
    // Handle message based on state and is_leader
    return true;
}
```
