/*
 * TEMP_SENSOR_config.h
 *
 *  Created on: Feb 14, 2022
 *      Author: Tarek ElDallal
 */

#ifndef HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_CONFIG_H_
#define HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_CONFIG_H_

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  _____
| Temp.  |--------------------Temperature Sensor OutPut Voltage -------------->	ADC InPut Voltage (PORTA Channels)
| Sensor |-------------------> Power Voltage
| _____ |-------------------> Ground

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * Select the Temperature sensor port -------------------->>		TEMP_SENSOR_PORT
**ADC PORT 	---------------------------------------------->>    	DIO_u8_tPORT_A
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/
#define TEMP_SENSOR_PORT										  	DIO_u8_tPORT_A

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * Select the Temperature sensor Pin,
 *  which will be an input for the ADC channel ----------->>		TEMP_SENSOR_PIN
**PA0 (ADC0) ---------------------------------------------->>   	 DIO_u8_tPIN0
**PA1 (ADC1) ---------------------------------------------->>   	 DIO_u8_tPIN1
**PA2 (ADC2) ---------------------------------------------->>   	 DIO_u8_tPIN2
**PA3 (ADC3) ---------------------------------------------->>   	 DIO_u8_tPIN3
**PA4 (ADC4) ---------------------------------------------->>    	 DIO_u8_tPIN4
**PA5 (ADC5) ---------------------------------------------->>    	 DIO_u8_tPIN5
**PA6 (ADC6) ---------------------------------------------->>   	 DIO_u8_tPIN6
**PA7 (ADC7) ---------------------------------------------->>   	 DIO_u8_tPIN7
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/
#define TEMP_SENSOR_PIN										      	 DIO_u8_tPIN0


/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * Select the Temperature sensor direction ---------------->> 		TEMP_SENSOR_DIRECTION
**INPUT Device -------------------------------------------->>    	DIO_u8_tINPUT
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/
#define TEMP_SENSOR_DIRECTION										 DIO_u8_tINPUT


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 * Select the Temperature sensor state  ------------------->>		TEMP_SENSOR_STATE
**FLOAT INPUT 	---------------------------------------->>    	DIO_u8_tFLOAT
**PULL UP INPUT ---------------------------------------->>    		DIO_u8_tPULL_UP
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/
#define TEMP_SENSOR_STATE												DIO_u8_tFLOAT


/*-------------------------------------------Has been defined in ADC Driver-------------------------------------------------------------------------------------------------
* Select the ADC trigger source ------------------------->>			TEMSENSOR_ADC_TRIGGER_SOURCE
* Free Running Mode	------------------------------------>>			ADC_u8_tFreeRunningMode
*External Interrupt request 0  ---------------------------->>   	ADC_u8_tExternalInterruptRequest_0
*Timer Interrupt request 0 ------------------------------->>   		ADC_u8_tTimerInterruptRequest_0
*Timer Interrupt request 1  ------------------------------>>   		ADC_u8_tTimerInterruptRequest_1

#define ADC_AUTO_TRIGGERING_SOURCE					ADC_u8_tExternalInterruptRequest_0

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	*/

#endif /* HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_CONFIG_H_ */
