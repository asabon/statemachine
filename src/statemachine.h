#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <stdio.h>

typedef struct {
    int id;
} STATE_T;

typedef struct {
    int id;
} STATEMACHINE_T;

extern int statemachine_init(STATEMACHINE_T * pStatemachine);
extern int statemachine_do(STATEMACHINE_T * pStatemachine);

#endif /* STATEMACHINE_H */
