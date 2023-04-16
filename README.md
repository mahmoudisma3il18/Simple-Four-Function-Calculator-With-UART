# Simple-Four-Function-Calculator-With-UART
A simple calculator program that reads two digits and an operator from the user via a UART interface, performs the requested operation, and then displays the result on the terminal. It uses the following steps:

1.Initialize the UART communication with a baud rate of 4800.
2.Define variables for the two digits, the operator, a flag for continuing the program, and a float variable for the result of the operation.
3.Use a do-while loop to repeatedly prompt the user for two digits and an operator, perform the operation, display the result, and ask the user if they want to perform another operation.
4.Convert the character inputs for the digits and operator into integer and float values using ASCII arithmetic and switch statement.
5.Perform the selected operation on the two integer values and store the result in a float variable.
6.Convert the float result into a character array using the "dtostrf" function and display the result on the terminal.
7.Prompt the user to continue the program by entering 'y' or 'n', and continue or exit the program based on the input.

The program supports basic arithmetic operations such as addition, subtraction, multiplication, and division, and displays the result with two decimal places. If the user enters an incorrect operator, the program displays an error message and asks the user to enter the correct operator.
