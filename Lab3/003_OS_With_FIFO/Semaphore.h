#ifndef SEMAPHORE_H_
#define SEMAPHORE_H_

/********************************************************/
/*										Include														*/
/********************************************************/
#include "stdint.h"

/********************************************************/
/*										Typedef 													*/
/********************************************************/
typedef int8_t Semaphore;



/********************************************************/
/*										Prototypes												*/
/********************************************************/
void OS_Wait(Semaphore *S);
void OS_Signal(Semaphore *S);
#endif /*	SEMAPHORE_H_	*/
