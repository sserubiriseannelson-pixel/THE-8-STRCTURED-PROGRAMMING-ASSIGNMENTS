# THE-8-STRCTURED-PROGRAMMING-ASSIGNMENTS
C FILels
# structured-programming-practice

**Student Name:** Sean Nelson Sserubiri 
**Course:** CSC1101 Structured Programming  
**Submission Date:** September 29, 2026

## Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, chapter 2, exercise 2.3 (e-h)
What the program does: Displays a statement first on the same line, separate lines and later include tabs separation.
Concepts used: printf, escape sequences (\n) and (\t)
How it works: The program calls printf multiple times to print rows of characters containing that information.

## Exercise 2 - Input-Process-Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.5, 
What the program does: Takes three numbers from the user, computes their product and displays the results.
Concepts used: printf, escape sequences (\n), variables, scanf, arithmetic operators(,*,%)
How it works: Prompts the user for integer inputs using scanf(), calculates the result into dedicated variables, and prints them out.

## Exercise 3 - Desicions
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22.
What the program does: Reads an integer from the user and determines and displays whether it is odd or even, using the remainder operator.
Concepts used: printf, escape sequences (\n),if, else if, else, %,relational operators
How it works: The program divides the number by 2 using `%`, which gives the remainder of that division. Since any multiple of 2 leaves a remainder of 0, the program checks `number % 2 == 0` — if true, the number is even; otherwise (any nonzero remainder), it's odd.

## Exercise 4 - Basic-loop
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.7(a), page 224.
what the program does: Displays all the odd integers from 1 to 13.
Concepts used: 'for' loop, integer variables, 'printf'.
How it works: The loop starts at 'n = 1' and continues while 'n <= 13', adding 2 to 'n' after each iteration instead of 1. Starting at an odd number and stepping by 2 means every value the loop variable takes is odd, so the loop naturally skips all even numbers without needing an 'if' check.

## Exercise 5 - Loop_calculation
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.11, page 220
what the program does: Calculates and prints the sum of all multiples of 7 from 1 to 100, printing each multiple as it's found.
Concepts used: `for` loop, accumulator variable, arithmetic operators.
How it works: The loop starts at `i = 7` and adds 7 each time, stopping once `i` exceeds 100. On every iteration, the current multiple is printed and also added to `sum`, which accumulates the running total. After the loop ends, the final sum is printed.
## Exercise 6 - Loop_with_input
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.9.
what the program does: sum and average of integers.
Concepts used: `for` loop, accumulator variable, arithmetic operators.
How it works: The loop starts at i  and for the values of it less than the number of integers input, computing the sum and the for loop ends, calculates the average and the outputs both the sum and average of the numbers. 
## Exercise 7 - loop_with_decision
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 3, Exercise 3.22.
what the program does: checking for prime numbers
Concepts used: `for` loop, accumulator .
How it works: neglects all digits less than 1 and tells it is not a prime number, with the for loop for values of i starting at 2, for all calues of i less than the number in put, it is adding 1, checks whether the number input is divisible by any numbers less than it. if any gives a remainder of 0 the the number is not a prime number, if none gives a remainder of 0 then the number is a prime number.
## Exercise 8 - interactive_console_program
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.19.
what the program does: determining how much of a products was sold. 
Concepts used: switch statement, int, arithmetic operators. printf, scanf and %.
How it works: displays menu, asks user for a choice (1-5) asks user for quantity sold computes quantity sold and its total price.

