# **Simple Four-Function Calculator with UART**
This repository contains a simple four-function calculator implemented using UART communication. The calculator performs addition, subtraction, multiplication, and division operations on two numbers, which are provided through UART input.

## Features
1. Supports addition, subtraction, multiplication, and division operations
2. Uses UART communication for input and output
3. Simple and intuitive user interface
4. Error handling for invalid input

## Requirements
To run the calculator, you will need the following:

1. A microcontroller board with UART capabilities
2. UART terminal software (e.g., PuTTY, RealTerm, Tera Term)
3. Development environment and toolchain compatible with your microcontroller board

## Getting Started
Follow these steps to get started with the calculator:

1. Clone the repository to your local machine
git clone https://github.com/mahmoudisma3il18/Simple-Four-Function-Calculator-With-UART.git
2. Open the project in your preferred development environment.
3. Configure the UART settings in the code according to your microcontroller board's specifications.
4. Build and flash the code to your microcontroller board.
5. Connect the microcontroller board to your computer via UART.
6. Open a UART terminal software and configure it to match the UART settings in the code.
7. Run the program on the microcontroller board.
8. You can now start using the calculator by entering arithmetic expressions through the UART terminal.

## Usage
To use the calculator, follow these guidelines:

1. Open the UART terminal software and ensure it is configured correctly.
2. Enter an arithmetic expression using the following format: operand1 operator operand2, where operand1 and operand2 are the numbers on which the operation will be performed, and operator is one of the following: + (addition), - (subtraction), * (multiplication), / (division).
For example, to perform the addition of 5 and 3, enter 5 + 3.
3. Press the Enter key to send the input to the microcontroller board.
4. The result of the calculation will be displayed in the UART terminal.
5. Repeat the above steps to perform additional calculations.

## Error Handling
The calculator includes error handling for the following scenarios:

1. Invalid input format: If the entered arithmetic expression does not follow the expected format (operand1 operator operand2), an error message will be displayed in the UART terminal.
2. Division by zero: If the divisor in a division operation is zero, an error message indicating division by zero will be displayed in the UART terminal.

Make sure to handle these errors appropriately in your application logic.

## Contributing
Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

When contributing, please follow the existing code style and conventions. Provide clear and concise commit messages and documentation for your changes.


## Contact
If you have any questions, feedback, or suggestions, feel free to contact the project maintainer:

* Mahmoud Ismaeil
* Email: maahmoudismaill@gmail.com
* GitHub: mahmoudisma3il18
