/*
 * tasks.h
 *
 *  Created on: Jul 8, 2013
 *      Author: tsbiberdorf
 */

#ifndef TASKS_H_
#define TASKS_H_

#define INIT_TASK 5
#define LED1_TASK 6
#define LED2_TASK 7
#define LED3_TASK 8
#define LED4_TASK 9
#define TIMER_TASK 10

void init_task(uint_32);
void led1_task(uint_32);
void led2_task(uint_32);
void led3_task(uint_32);
void led4_task(uint_32);
void timer_task(uint_32);


#endif /* TASKS_H_ */
