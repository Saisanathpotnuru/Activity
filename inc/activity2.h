/**
 * @file activity2.h
 * @author Sai Sanath P
 * @brief header file for activity 2
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED


#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief macro to enable prescale
 * 
 */
#define ADC_ENABLE_PRESCALE ADCSRA=(1<<ADEN)|(7<<ADPS0)

/**
 * @brief setting reference voltage
 * 
 */
#define REFERENCE_VOLTAGE_SET ADMUX=(1<<REFS0)

/**
 * @brief setting ADC interrupt flag
 * 
 */
#define SET_ADC_INTRPT_FLAG ADCSRA|=(1<<ADIF)

/**
 * @brief Initializing the ADC to read value
 * 
 */
void InitADC();

/**
 * @brief reading value 
 * 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t);

/**
 * @brief calling function activity 2
 * 
 * @return int 
 */
int activity2(void);

#endif // ACTIVITY2_H_INCLUDED
