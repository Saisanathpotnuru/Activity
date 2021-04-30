/**
 * @file activity3.h
 * @author Sai Sanath P
 * @brief header file for activity 3
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief macro for temperature condtition 1
 * 
 */
#define TEMP_COND_1 (temp>=0)&&(temp<=200)

/**
 * @brief macro for temperature condtition 2
 * 
 */
#define TEMP_COND_2 (temp>=201)&&(temp<=500)

/**
 * @brief macro for temperature condtition 3
 * 
 */
#define TEMP_COND_3 (temp>=501)&&(temp<=700)

/**
 * @brief macro for temperature condtition 4
 * 
 */
#define TEMP_COND_4 (temp>=701)&&(temp<=1024)

/**
 * @brief calling function activity 3
 * 
 * @return int 
 */
int activity3(uint16_t);

#endif // ACTIVITY3_H_INCLUDED
