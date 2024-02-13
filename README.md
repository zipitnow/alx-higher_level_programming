<<<<<<< HEAD
0x01. Python - if/else, loops, functions
=======
0x00. Python - Hello, World
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
Python

    By: Guillaume
    Weight: 1
    Project over - took place from Jan 2, 2024 6:00 AM to Jan 3, 2024 6:00 AM
    An auto review will be launched at the deadline

In a nutshell…

<<<<<<< HEAD
    Auto QA review: 0.0/160 mandatory & 0.0/41 optional
=======
    Auto QA review: 0.0/89 mandatory & 0.0/27 optional
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
    Altogether:  0.0%
        Mandatory: 0.0%
        Optional: 0.0%
        Calculation:  0.0% + (0.0% * 0.0%)  == 0.0%

<<<<<<< HEAD
=======
Concepts

For this project, we expect you to look at this concept:

    Python programming

Author’s disclaimer

Welcome to the Python world!

The first projects are more "C-oriented" - no tricks, no funky syntax - simple!
If you've already played with Python, don't worry, fun things will come.
You'll soon find that with Python (and the majority of higher level languages), there are ten different ways to do the same thing. Some tasks will expect only one implementation, while other tasks will have multiple possible implementations.
Like C, Python also has a linter / style guide like Betty, called PEP8, also now known as PyCode.

Enjoy!

- Guillaume

>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
Resources

Read or watch:

<<<<<<< HEAD
    More Control Flow Tools (Read until “4.6. Defining Functions” included)
    IndentationError
    How To Use String Formatters in Python 3
    Learn to Program
    Learn to Program 2 : Looping
    Pycodestyle – Style Guide for Python Code

man or help:

    python3

=======
    The Python tutorial (only the first three chapters below)
    Whetting Your Appetite
    Using the Python Interpreter
    An Informal Introduction to Python (Read up until “3.1.2. Strings” included)
    How To Use String Formatters in Python 3
    Learn to Program
    Pycodestyle – Style Guide for Python Code

>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General

    Why Python programming is awesome
<<<<<<< HEAD
    Why indentation is so important in Python
    How to use the if, if ... else statements
    How to use comments
    How to affect values to variables
    How to use the while and for loops
    How is Python’s for different from C‘s?
    How to use the break and continues statements
    How to use else clauses on loops
    What does the pass statement do, and when to use it
    How to use range
    What is a function and how do you use functions
    What does return a function that does not use any return statement
    Scope of variables
    What’s a traceback
    What are the arithmetic operators and how to use them
=======
    Who created Python
    Who is Guido van Rossum
    Where does the name ‘Python’ come from
    What is the Zen of Python
    How to use the Python interpreter
    How to print text and variables using print
    How to use strings
    What are indexing and slicing in Python
    What is the official Python coding style and how to check your code with pycodestyle
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Copyright - Plagiarism

    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
    You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
    You are not allowed to publish any content of this project.
    Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
Python Scripts

    Allowed editors: vi, vim, emacs
    All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
    All your files should end with a new line
    The first line of all your files should be exactly #!/usr/bin/python3
<<<<<<< HEAD
    A README.md file, at the root of the folder of the project, is mandatory
=======
    A README.md file at the root of the repo, containing a description of the repository
    A README.md file, at the root of the folder of this project, is mandatory
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
    Your code should use the pycodestyle (version 2.8.*)
    All your files must be executable
    The length of your files will be tested using wc

<<<<<<< HEAD
=======
Shell Scripts

    Allowed editors: vi, vim, emacs
    All your scripts will be tested on Ubuntu 20.04 LTS
    All your scripts should be exactly two lines long (wc -l file should print 2)
    All your files should end with a new line
    The first line of all your files should be exactly #!/bin/bash
    All your files must be executable

>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
C Scripts

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions should be included in your header file called lists.h
    Don’t forget to push your header file
    All your header files should be include guarded

More Info
<<<<<<< HEAD

Note: you do not need to understand lists yet.
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Positive anything is better than negative nothing
mandatory
Score: 0.0% (Checks completed: 0.0%)

This program will assign a random signed number to the variable number each time it is executed. Complete the source code in order to print whether the number stored in the variable number is positive or negative.

    You can find the source code here
    The variable number will store a different value every time you will run this program
    You don’t have to understand what import, random. randint do. Please do not touch this code
    The output of the program should be:
        The number, followed by
            if the number is greater than 0: is positive
            if the number is 0: is zero
            if the number is less than 0: is negative
        followed by a new line

guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
-4 is negative
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
0 is zero
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
-3 is negative
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
-10 is negative
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
10 is positive
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
-5 is negative
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
6 is positive
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
7 is positive
guillaume@ubuntu:~/0x01$ ./0-positive_or_negative.py 
5 is positive
guillaume@ubuntu:~/0x01$ 

Repo:

    GitHub repository: alx-higher_level_programming
    Directory: 0x01-python-if_else_loops_functions
    File: 0-positive_or_negative.py

1. The last digit
mandatory
Score: 0.0% (Checks completed: 0.0%)

This program will assign a random signed number to the variable number each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable number.

    You can find the source code here
    The variable number will store a different value every time you will run this program
    You don’t have to understand what import, random.randint do. Please do not touch this code. This line should not change: number = random.randint(-10000, 10000)
    The output of the program should be:
        The string Last digit of, followed by
        the number, followed by
        the string is, followed by the last digit of number, followed by
            if the last digit is greater than 5: the string and is greater than 5
            if the last digit is 0: the string and is 0
            if the last digit is less than 6 and not 0: the string and is less than 6 and not 0
        followed by a new line

guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 4205 is 5 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of -626 is -6 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 1144 is 4 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of -9200 is 0 and is 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 5247 is 7 and is greater than 5
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of -9318 is -8 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 3369 is 9 and is greater than 5
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of -5224 is -4 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of -4485 is -5 and is less than 6 and not 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 3850 is 0 and is 0
guillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 5169 is 9 and is greater than 5
guillaume@ubuntu:~/0x01$ 

Repo:

    GitHub repository: alx-higher_level_programming
    Directory: 0x01-python-if_else_loops_functions
    File: 1-last_digit.py

2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a program that prints the ASCII alphabet, in lowercase, not followed by a new line.

    You can only use one print function with string format
    You can only use one loop in your code
    You are not allowed to store characters in a variable
    You are not allowed to import any module

guillaume@ubuntu:~/0x01$ ./2-print_alphabet.py
abcdefghijklmnopqrstuvwxyzguillaume@ubuntu:~/0x01$
=======
Zen

The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!

Pycodestyle

Pycodestyle is now the new standard of Python style code



Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Run Python file
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a Shell script that runs a Python script.

The Python file name will be saved in the environment variable $PYFILE

guillaume@ubuntu:~/py/0x00$ cat main.py 
#!/usr/bin/python3
print("Best School")

guillaume@ubuntu:~/py/0x00$ export PYFILE=main.py
guillaume@ubuntu:~/py/0x00$ ./0-run
Best School
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 2-print_alphabet.py

3. When I was having that alphabet soup, I never thought that it would pay off
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a program that prints the ASCII alphabet, in lowercase, not followed by a new line.

    Print all the letters except q and e
    You can only use one print function with string format
    You can only use one loop in your code
    You are not allowed to store characters in a variable
    You are not allowed to import any module

guillaume@ubuntu:~/0x01$ ./3-print_alphabt.py
abcdfghijklmnoprstuvwxyzguillaume@ubuntu:~/0x01$
=======
    Directory: 0x00-python-hello_world
    File: 0-run

1. Run inline
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a Shell script that runs Python code.

The Python code will be saved in the environment variable $PYCODE

guillaume@ubuntu:~/py/0x00$ export PYCODE='print(f"Best School: {88+10}")'
guillaume@ubuntu:~/py/0x00$ ./1-run_inline 
Best School: 98
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 3-print_alphabt.py

4. Hexadecimal printing
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a program that prints all numbers from 0 to 98 in decimal and in hexadecimal (as in the following example)

    You can only use one print function with string format
    You can only use one loop in your code
    You are not allowed to store numbers or strings in a variable
    You are not allowed to import any module

guillaume@ubuntu:~/0x01$ ./4-print_hexa.py
0 = 0x0
1 = 0x1
2 = 0x2
3 = 0x3
4 = 0x4
5 = 0x5
6 = 0x6
7 = 0x7
8 = 0x8
9 = 0x9
10 = 0xa
11 = 0xb
12 = 0xc
13 = 0xd
14 = 0xe
15 = 0xf
16 = 0x10
17 = 0x11
18 = 0x12
...
96 = 0x60
97 = 0x61
98 = 0x62
guillaume@ubuntu:~/0x01$

Repo:

    GitHub repository: alx-higher_level_programming
    Directory: 0x01-python-if_else_loops_functions
    File: 4-print_hexa.py

5. 00...99
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a program that prints numbers from 0 to 99.

    Numbers must be separated by ,, followed by a space
    Numbers should be printed in ascending order, with two digits
    The last number should be followed by a new line
    You can only use no more than 2 print functions with string format
    You can only use one loop in your code
    You are not allowed to store numbers or strings in a variable
    You are not allowed to import any module

guillaume@ubuntu:~/0x01$ ./5-print_comb2.py
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 1-run_inline

2. Hello, print
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a Python script that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

    Use the function print

guillaume@ubuntu:~/py/0x00$ ./2-print.py 
"Programming is like building a multilingual puzzle
guillaume@ubuntu:~/py/0x00$
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 5-print_comb2.py

6. Inventing is a combination of brains and materials. The more brains you use, the less material you need
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a program that prints all possible different combinations of two digits.

    Numbers must be separated by ,, followed by a space
    The two digits must be different
    01 and 10 are considered the same combination of the two digits 0 and 1
    Print only the smallest combination of two digits
    Numbers should be printed in ascending order, with two digits
    The last number should be followed by a new line
    You can only use no more than 3 print functions with string format
    You can only use no more than 2 loops in your code
    You are not allowed to store numbers or strings in a variable
    You are not allowed to import any module

guillaume@ubuntu:~/0x01$ ./6-print_comb3.py
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 2-print.py

3. Print integer
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete this source code in order to print the integer stored in the variable number, followed by Battery street, followed by a new line.

    You can find the source code here
    The output of the script should be:
        the number, followed by Battery street,
        followed by a new line
    You are not allowed to cast the variable number into a string
    Your code must be 3 lines long
    You have to use f-strings tips

guillaume@ubuntu:~/py/0x00$ ./3-print_number.py
98 Battery street
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 6-print_comb3.py

7. islower
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that checks for lowercase character.

    Prototype: def islower(c):
    Returns True if c is lowercase
    Returns False otherwise
    You are not allowed to import any module
    You are not allowed to use str.upper() and str.isupper()
    Tips: ord()

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 7-main.py
#!/usr/bin/env python3
islower = __import__('7-islower').islower

print("a is {}".format("lower" if islower("a") else "upper"))
print("H is {}".format("lower" if islower("H") else "upper"))
print("A is {}".format("lower" if islower("A") else "upper"))
print("3 is {}".format("lower" if islower("3") else "upper"))
print("g is {}".format("lower" if islower("g") else "upper"))

guillaume@ubuntu:~/0x01$ ./7-main.py
a is lower
H is upper
A is upper
3 is upper
g is lower
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 3-print_number.py

4. Print float
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete the source code in order to print the float stored in the variable number with a precision of 2 digits.

    You can find the source code here
    The output of the program should be:
        Float:, followed by the float with only 2 digits
        followed by a new line
    You are not allowed to cast number to string
    You have to use f-strings

guillaume@ubuntu:~/py/0x00$ ./4-print_float.py
Float: 3.14
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 7-islower.py

8. To uppercase
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that prints a string in uppercase followed by a new line.

    Prototype: def uppercase(str):
    You can only use no more than 2 print functions with string format
    You can only use one loop in your code
    You are not allowed to import any module
    You are not allowed to use str.upper() and str.isupper()
    Tips: ord()

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 8-main.py
#!/usr/bin/env python3
uppercase = __import__('8-uppercase').uppercase

uppercase("best")
uppercase("Best School 98 Battery street")

guillaume@ubuntu:~/0x01$ ./8-main.py
BEST
BEST SCHOOL 98 BATTERY STREET
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 4-print_float.py

5. Print string
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete this source code in order to print 3 times a string stored in the variable str, followed by its first 9 characters.

    You can find the source code here
    The output of the program should be:
        3 times the value of str
        followed by a new line
        followed by the 9 first characters of str
        followed by a new line
    You are not allowed to use any loops or conditional statement
    Your program should be maximum 5 lines long

guillaume@ubuntu:~/py/0x00$ ./5-print_string.py 
Holberton SchoolHolberton SchoolHolberton School
Holberton
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 8-uppercase.py

9. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that prints the last digit of a number.

    Prototype: def print_last_digit(number):
    Returns the value of the last digit
    You are not allowed to import any module

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 9-main.py
#!/usr/bin/env python3
print_last_digit = __import__('9-print_last_digit').print_last_digit

print_last_digit(98)
print_last_digit(0)
r = print_last_digit(-1024)
print(r)

guillaume@ubuntu:~/0x01$ ./9-main.py
8044
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 5-print_string.py

6. Play with strings
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete this source code to print Welcome to Holberton School!

    You can find the source code here
    You are not allowed to use any loops or conditional statements.
    You have to use the variables str1 and str2 in your new line of code
    Your program should be exactly 5 lines long

guillaume@ubuntu:~/py/0x00$ ./6-concat.py
Welcome to Holberton School!
guillaume@ubuntu:~/py/0x00$ wc -l 6-concat.py
5 6-concat.py
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 9-print_last_digit.py

10. a + b
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that adds two integers and returns the result.

    Prototype: def add(a, b):
    Returns the value of a + b
    You are not allowed to import any module

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 10-main.py
#!/usr/bin/env python3
add = __import__('10-add').add

print(add(1, 2))
print(add(98, 0))
print(add(100, -2))

guillaume@ubuntu:~/0x01$ ./10-main.py
3
98
98
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 6-concat.py

7. Copy - Cut - Paste
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete this source code

    You can find the source code here
    You are not allowed to use any loops or conditional statements
    Your program should be exactly 8 lines long
    word_first_3 should contain the first 3 letters of the variable word
    word_last_2 should contain the last 2 letters of the variable word
    middle_word should contain the value of the variable word without the first and last letters

guillaume@ubuntu:~/py/0x00$ ./7-edges.py
First 3 letters: Hol
Last 2 letters: on
Middle word: olberto
guillaume@ubuntu:~/py/0x00$ wc -l 7-edges.py
8 7-edges.py
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 10-add.py

11. a ^ b
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that computes a to the power of b and return the value.

    Prototype: def pow(a, b):
    Returns the value of a ^ b
    You are not allowed to import any module

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 11-main.py
#!/usr/bin/env python3
pow = __import__('11-pow').pow

print(pow(2, 2))
print(pow(98, 2))
print(pow(98, 0))
print(pow(100, -2))
print(pow(-4, 5))

guillaume@ubuntu:~/0x01$ ./11-main.py
4
9604
1
0.0001
-1024
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 7-edges.py

8. Create a new sentence
mandatory
Score: 0.0% (Checks completed: 0.0%)

Complete this source code to print object-oriented programming with Python, followed by a new line.

    You can find the source code here
    You are not allowed to use any loops or conditional statements
    Your program should be exactly 5 lines long
    You are not allowed to create new variables
    You are not allowed to use string literals

guillaume@ubuntu:~/py/0x00$ ./8-concat_edges.py
object-oriented programming with Python
guillaume@ubuntu:~/py/0x00$ wc -l 8-concat_edges.py
5 8-concat_edges.py
guillaume@ubuntu:~/py/0x00$ 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 11-pow.py

12. Fizz Buzz
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that prints the numbers from 1 to 100 separated by a space.

    For multiples of three print Fizz instead of the number and for multiples of five print Buzz.
    For numbers which are multiples of both three and five print FizzBuzz.
    Prototype: def fizzbuzz():
    Each element should be followed by a space
    You are not allowed to import any module

You don’t need to understand __import__

guillaume@ubuntu:~/0x01$ cat 12-main.py
#!/usr/bin/env python3
fizzbuzz = __import__('12-fizzbuzz').fizzbuzz

fizzbuzz()
print("")

guillaume@ubuntu:~/0x01$ ./12-main.py | cat -e
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz $
guillaume@ubuntu:~/0x01$ 
=======
    Directory: 0x00-python-hello_world
    File: 8-concat_edges.py

9. Easter Egg
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a Python script that prints “The Zen of Python”, by TimPeters, followed by a new line.

    Your script should be maximum 98 characters long (please check with wc -m 9-easter_egg.py)

guillaume@ubuntu:~/py/0x00$ ./9-easter_egg.py
The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!
guillaume@ubuntu:~/py/0x00$
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 12-fizzbuzz.py

13. Insert in sorted linked list
=======
    Directory: 0x00-python-hello_world
    File: 9-easter_egg.py

10. Linked list cycle
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
mandatory
Score: 0.0% (Checks completed: 0.0%)

Technical interview preparation:

    You are not allowed to google anything
    Whiteboard first
<<<<<<< HEAD

Write a function in C that inserts a number into a sorted singly linked list.

    Prototype: listint_t *insert_node(listint_t **head, int number);
    Return: the address of the new node, or NULL if it failed

carrie@ubuntu:0x01$ cat lists.h 
#ifndef LISTS_H
#define LISTS_H

=======
    This task and all future technical interview prep tasks will include checks for the efficiency of your solution, i.e. is your solution’s runtime fast enough, does your solution require extra memory usage / mallocs, etc.

Write a function in C that checks if a singly linked list has a cycle in it.

    Prototype: int check_cycle(listint_t *list);
    Return: 0 if there is no cycle, 1 if there is a cycle

Requirements:

    Only these functions are allowed: write, printf, putchar, puts, malloc, free

carrie@ubuntu:~/0x00$ cat lists.h
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
<<<<<<< HEAD
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */

carrie@ubuntu:0x01$ cat linked_lists.c 
=======
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

carrie@ubuntu:~/0x00$ cat 10-linked_lists.c
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
<<<<<<< HEAD
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;
=======
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
<<<<<<< HEAD
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }
=======
    new->next = *head;
    *head = new;
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

<<<<<<< HEAD
carrie@ubuntu:0x01$ cat 13-main.c 
=======
carrie@ubuntu:~/0x00$ cat 10-main.c
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * main - check the code for
=======
 * main - check the code
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
<<<<<<< HEAD

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);

    print_listint(head);
=======
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

    free_listint(head);

    return (0);
}

<<<<<<< HEAD
carrie@ubuntu:0x01$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 13-main.c linked_lists.c 13-insert_number.c -o insert
carrie@ubuntu:0x01$ ./insert
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
27
98
402
1024
carrie@ubuntu:0x01$  
=======
carrie@ubuntu:~/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-main.c 10-check_cycle.c 10-linked_lists.c -o cycle
carrie@ubuntu:~/0x00$$ ./cycle 
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
carrie@ubuntu:~/0x00$

    Solving a problem is already a big win! but finding the best and optimal way to solve it, it’s way better! Think about the most optimal / fastest way to do it.
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad

Repo:

    GitHub repository: alx-higher_level_programming
<<<<<<< HEAD
    Directory: 0x01-python-if_else_loops_functions
    File: 13-insert_number.c, lists.h
=======
    Directory: 0x00-python-hello_world
    File: 10-check_cycle.c, lists.h
>>>>>>> 27531c40ad77aa1165d3b7cc9c6492ab711a1cad


