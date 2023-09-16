 # [printf](https://github.com/DamilolaALX/printf)

This repository contains the collaborative work of a team project for the ALX Software Engineering Course in the first year. The project focuses on implementing a custom printf function, a fundamental function in the C programming language used for formatted output.

## TABLE OF CONTENTS
* Introduction
* Project Goals
* Usage
* Testing
* Tasks
* Contributors
* Acknowledgements

### INTRODUCTION:
The printf function in C is used to print formatted output to the standard output stream. This project involves creating a custom implementation of the printf function that replicates the core functionalities of the standard printf in C, while adding enhancements or modifications as required.

### PROJECT GOALS:
The primary objectives of this project include:

* Implementing a custom printf function in C.
* Replicating the core functionalities of the standard printf in C.
* Enhancing or modifying the printf function to meet specific project requirements.
* Collaborative teamwork and learning through real-world application of software engineering concepts.

### USAGE
To use the custom printf function, follow these steps:

* Clone this repository to your local machine.
* Include the printf function in your C source code.
* Call the printf function as needed in your code.

Example usage:
# c
```
#include "printf.h"

int main()
{
    printf("Hello, world!\n");
        return (0);
}
```
	
### TESTING:
To run the tests for the printf function, follow these steps:

* Navigate to the tests directory.
* Compile the test files.
* Run the compiled test executable.

## TASKS
These are all the tasks contained in this project.

[0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life]
* Write a function that produces output according to format.
  - c : converts input into a character
  - s : converts input into a string

[1. Education is when you read the fine print. Experience is what you get if you don't](https://github.com/DamilolaALX/printf/blob/master/printf.c)
* Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
- i : converts input into an integer
[2. Just because it's in print doesn't mean it's the gospel]
* Create a man page for your function
3. [With a face like mine, I do better in print]
* Handle the following conversion specifiers:
  - b : the unsigned int argument is converted to binary
4. What one has not experienced, one will never understand in print
* Handle the following conversion specifiers:
	- u : converts the input into an unsigned integer
	- o : converts the input into an octal number
	- x : converts the input into a hexadecimal number
  - X : converts the input into a hexadecimal number with capital letters
5. Nothing in fine print is ever good news
* Use a local buffer of 1024 chars in order to call write as little as possible.
6. My weakness is wearing too much leopard print
* Handle the following custom conversion specifier:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
* Handle the following conversion specifier:
  - p : int input is converted to a pointer address
8. The big print gives and the small print takes away
* Handle the following flag characters for non-custom conversion specifiers:
  - '+' : adds a + in front of signed positive numbers and a - in front of signed negative numbers
  - space : same as +, but adds a space (is overwritten by +)
  - : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions
[9. Sarcasm is lost in print]

* Handle the following length modifiers for non-custom conversion specifiers:
  - l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
  - h : converts d, i, u, o, x, X conversions in long signed or unsigned ints
[10. Print some money and give it to us for the rain forests]

* Handle the field width for non-custom conversion specifiers.
[11. The negative is the equivalent of the composer's score, and the print the performance]

* Handle the precision for non-custom conversion specifiers.
[12. It's depressing when you're still around and your albums are out of print]

* Handle the 0 flag character for non-custom conversion specifiers.
[13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection]

* Handle the - flag character for non-custom conversion specifiers.
14. Print is the sharpest and the strongest weapon of our party
* Handle the following custom conversion specifier:
  - r : prints the reversed string
[15. The flood of print has turned reading into a process of gulping rather than savoring]

* Handle the following custom conversion specifier:
  - R : prints the rot13'ed string
[16. ...]

* All the above options work well together.

### CONTRIBUTORS:
This project is a collaborative effort by the following contributors:

[Adegunle damilola](https://github.com/DamilolaALX)


## ACKNOWLEDGEMENT
We would like to thank ALX SE for providing the opportunity to work on this project and enhance our skills.
