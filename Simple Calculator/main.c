/*
 * Simple Calculator.c
 *
 * Created: 4/16/2023 5:01:55 PM
 * Author : Mahmoud Ismail
 */ 


/*-------------------------------- Includes ---------------------------------*/
#include <avr/io.h>
#include <util/delay.h>
#include "UART.h"



int main(void)
{
    /* Replace with your application code */
	
	/* Initialize UART with Baud Rate 4800 */
	UART_init(BaudRate_4800);                     
	
	uint8_t digit1,digit2,operator,flag;         /*  Variables and Operator  */
	float   result = 0;                          /*  Result is float for division operators */
	uint8_t result_array[8];                     /*  Array to send it over UART             */
	
    do 
    {
		/*  Read Digit1 from user and show it again on terminal  */
		UART_sendString("Enter First Digit : ");
		digit1 = UART_recieveByte();
		UART_sendByte(digit1);
		UART_sendString("\r\n");
		
		/*  Read Digit2 from user and show it again on terminal  */
		UART_sendString("Enter Second  Digit : ");
		digit2 = UART_recieveByte();
		UART_sendByte(digit2);
		UART_sendString("\r\n");
		
		/*  Read Operator from user and show it again on terminal  */
		UART_sendString("Enter Operator (+,-,*,/) : ");
		operator = UART_recieveByte();
		UART_sendByte(operator);
		UART_sendString("\r\n");
		
		/* Convert Char to digit  */
		digit1 = digit1 - 0x30 ;         
		digit2 = digit2 - 0x30 ;         
		
		
		switch(operator)
		{
			/* Addition  */
			case '+' :
			result = (float)digit1 + (float)digit2;
			break;
			
			/* Subtraction */
			case '-' :
			result = (float)digit1 - (float)digit2;
			break;
			
			/* Multiplication */
			case '*' :
			result = (float)digit1 * (float)digit2;
			break;
			
			/* Division */
			case '/' : 
			result = (float)digit1 / (float)digit2;
			break;
			
			/* Wrong operator */
			default:
			UART_sendString("Enter Right Operator");
			UART_sendString("\r\n");
		}
		
		/*   Send Result to terminal  */
		UART_sendString("Result = ");
		
		/*  Convert Float to array of chars  */
		dtostrf(result, 5, 2, result_array);
		
		/* Send the result array  */
		UART_sendString(result_array);
		UART_sendString("\r\n");
		
		/* Ask user if he want another operation and if no it will terminate the program */
		UART_sendString("Do you want to do another operation (y / n) ? ");
		flag = UART_recieveByte();
		UART_sendByte(flag);
		UART_sendString("\r\n");
    } while (flag == 'y');
	
	return 0;
}

