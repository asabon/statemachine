#include "statemachine.h"

int statemachine_init(STATEMACHINE_T * pStatemachine, STATE_T * pState)
{
    pStatemachine->pState = pState;
    return 0;
}

int statemachine_do(STATEMACHINE_T * pStatemachine)
{
    return 0;
}
