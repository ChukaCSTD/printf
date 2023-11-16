# printf Implementation

This repository contains a simple implementation of the printf function, a standard output formatting function in the C programming language. The project is a collaboration between Precious and Chuka.

## Project Overview

The primary goal of this project is to create a basic printf function that produces output according to a specified format. The function has the following prototype:

```c
int _printf(const char *format, ...);
```

### Functionality

The implemented printf function should:

- Return the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- Handle the following conversion specifiers:
  - `%c`: Character
  - `%s`: String
  - `%%`: Percent sign
  - `%d`: Integer
  - `%i`: Integer

### Implementation Details

- The project does not replicate the buffer handling of the C library printf function.

## Project Structure

The repository includes the following files:

- **test/**: Directory containing tests for the implemented functions.
- **_printf.c**: Main implementation of the printf function.
- **_putchar.c**: Custom putchar function used in the printf implementation.
- **flags.c**: File handling conversion specifiers and their corresponding functions.
- **get_width.c**: File responsible for obtaining the width of the format string.
- **handle_print.c**: File handling the printing process based on the format string.
- **handlers.c**: File containing various handlers for different conversion specifiers.
- **main.h**: Header file containing function prototypes and necessary includes.
- **precision.c**: File handling precision in the format string.
- **print_functions.c**: File containing various print functions for different data types.
- **print_functions1.c**: Additional file for print functions.
- **print_functions2.c**: Additional file for print functions.
- **size.c**: File handling the size of the format string.
- **utils.c**: File containing utility functions used in the printf implementation.

## How to Test

To test the implementation, navigate to the test directory and run the tests. The tests are designed to cover various cases and ensure the correct functionality of the printf function.

```bash
cd test
gcc -o test_printf ../_printf.c test_printf.c
./test_printf
```

## Contributors

- Precious
- Chuka
