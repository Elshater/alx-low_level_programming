0x01. C - Variables, if, else, while
====================================

Resources
---------

**Read or watch**:

*   [Everything you need to know to start with C.pdf](/rltoken/PkAydT3D9u5pN3nPCAlNZQ "Everything you need to know to start with C.pdf") (_You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”._)
*   [Keywords and identifiers](/rltoken/58ThnAAxwJv5s_ceKMMPhw "Keywords and identifiers")
*   [integers](/rltoken/2sXkmDiD7BF7pNIOxMQWFA "integers")
*   [Arithmetic Operators in C](/rltoken/S-b9MN2iELhSEwCI093Vzw "Arithmetic Operators in C")
*   [If statements in C](/rltoken/usvxrTB3ko5kGTq48p5fSA "If statements in C")
*   [if…else statement](/rltoken/CU6mSX1qdZKOhDEgmToUGA "if...else statement")
*   [Relational operators](/rltoken/O1N-qacaTC-BHXm3Dp3eUA "Relational operators")
*   [Logical operators](/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ "Logical operators")
*   [while loop in C](/rltoken/mwx2_bj3gIFEgCqdwdTp4w "while loop in C")
*   [While loop](/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw "While loop")

**man or help**:

*   `ascii` (_You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions._)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](/rltoken/qBrRkO5QsdzGun5FkaMooQ "explain to anyone"), **without the help of Google**:

### General

*   What are the arithmetic operators and how to use them
*   What are the logical operators (sometimes called boolean operators) and how to use them
*   What the the relational operators and how to use them
*   What values are considered TRUE and FALSE in C
*   What are the boolean operators and how to use them
*   How to use the `if`, `if ... else` statements
*   How to use comments
*   How to declare variables of types `char`, `int`, `unsigned int`
*   How to assign values to variables
*   How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
*   How to use the `while` loop
*   How to use variables with the `while` loop
*   How to print variables using `printf`
*   What is the `ASCII` character set
*   What are the purpose of the `gcc` flags `-m32` and `-m64`

### Copyright - Plagiarism

*   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
*   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
*   You are not allowed to publish any content of this project.
*   Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

### General

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project
*   There should be no errors and no warnings during compilation
*   You are not allowed to use `system`
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going!

#### Question #0

What is the size of the `char` data type?

*   8 bytes
    
*   4 bytes
    
*   1 byte
    
*   2 bytes
    

#### Question #1

What is the size of the `unsigned int` data type?

*   8 bytes
    
*   4 bytes
    
*   1 byte
    
*   2 bytes
    

#### Question #2

What is the size of the `float` data type?

*   8 bytes
    
*   4 bytes
    
*   1 byte
    
*   2 bytes
    

#### Question #3

Which of the following are valid `while` or `do/while` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

*   a = 0;
        while (a < b)
            printf("%d\n", a++);
    
*   a = 0;
        while (a < b)
        {
            printf("%d\n", a);
            a++;
        }
    
*   a = 0;
        do {
            printf("%d\n", a);
            a++;
        } while (a < b);
    
*   a = 0;
        while (a < b)
        (
            printf("%d\n", a);
            a++;
        )
    
*   while (a = 0; a < b; a++)
        {
            printf("%d\n", a);
        }
    
*   a = 0;
        do while (a < b)
        {
            printf("%d\n", a);
            a++;
        }
    

#### Question #4

Which of the following are valid `if` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

*   if ((((((a > b))))))
        {
          return (a);
        }
    
*   if (a > b)
        {
          return (a);
        }
    
*   if {a > b}
        (
          return {a};
        )
    
*   if (a > b)
          return (a);
    
*   if a > b
        {
          return (a);
        }
    

#### Question #5

Which of the following are valid `for` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

*   a = 0;
        for (a < b;;)
        {
            printf("%d\n", a++);
        }
    
*   for (a = 0; a < b; a++)
            printf("%d\n", a);
    
*   for (int a = 0; a < b; a++)
        {
            printf("%d\n", a);
        }
    
*   a = 0;
        for (; a < b;)
        {
            printf("%d\n", a++);
        }
    
*   for (a = 0; a < b; a++)
        {
            printf("%d\n", a);
        }
    

Tasks
-----

### 0\. Positive anything is better than negative nothing

mandatory

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

*   You can find the source code [here](/rltoken/Dg4SuuP8gvRYnE54wktySg "here")
*   The variable `n` will store a different value every time you will run this program
*   You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
*   The output of the program should be:
    *   The number, followed by
        *   if the number is greater than 0: `is positive`
        *   if the number is 0: `is zero`
        *   if the number is less than 0: `is negative`
    *   followed by a new line

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -520693284 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -973398895 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -199220452 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    561319348 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    561319348 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    266853958 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -48147767 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    0 is zero
    julien@ubuntu:~/0x01$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x01-variables_if_else_while`
*   File: `0-positive_or_negative.c`

Done?! Help

×

#### Learners who are done with "0. Positive anything is better than negative nothing"

Check your code

×

#### Correction of "0. Positive anything is better than negative nothing"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 1\. The last digit

mandatory

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

*   You can find the source code [here](/rltoken/rud8wr5x6VWeahUtd5P14A "here")
*   The variable `n` will store a different value every time you run this program
*   You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
*   The output of the program should be:
    *   The string `Last digit of`, followed by
    *   `n`, followed by
    *   the string `is`, followed by
        *   if the last digit of `n` is greater than 5: the string `and is greater than 5`
        *   if the last digit of `n` is 0: the string `and is 0`
        *   if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    *   followed by a new line

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 629438752 is 2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -748255693 is -3 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -1052791662 is -2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -284805734 is -4 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -284805734 is -4 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 491506926 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 954249937 is 7 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 652334952 is 2 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -729688197 is -7 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of -729688197 is -7 and is less than 6 and not 0
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 45528266 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 45528266 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 809065140 is 0 and is 0
    julien@ubuntu:~/0x01$
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x01-variables_if_else_while`
*   File: `1-last_digit.c`

Done?! Help

×

#### Learners who are done with "1. The last digit"

Check your code

×

#### Correction of "1. The last digit"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 2\. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

mandatory

Write a program that prints the alphabet in lowercase, followed by a new line.

*   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
*   All your code should be in the `main` function
*   You can only use `putchar` twice in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
    julien@ubuntu:~/0x01$ ./2-print_alphabet 
    abcdefghijklmnopqrstuvwxyz
    julien@ubuntu:~/0x01$
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x01-variables_if_else_while`
*   File: `2-print_alphabet.c`

Done?! Help

×

#### Learners who are done with "2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game"

Check your code

×

#### Correction of "2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 3\. alphABET

mandatory

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

*   You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
*   All your code should be in the `main` function
*   You can only use `putchar` three times in your code

    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
    julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
    abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
    julien@ubuntu:~/0x01$ 
    

**Repo:**

*   GitHub repository: `alx-low_level_programming`
*   Directory: `0x01-variables_if_else_while`
*   File: `3-print_alphabets.c`

Done?! Help
