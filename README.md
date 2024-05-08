## Project Description
- The program will display a menu to let the user choose whether to show the Flames Calculator (A) or Prime Word Detector (B). After displaying the required output, the program will display the menu again until the user chooses the exit option (C).
    - Overview of Option A:
        - The FLAMES Calculator accepts two names of not more than 30 characters per name. These two names can have other non-alphabetical characters like $ @ & % but no spaces allowed in a name. However, only the alphabets from a to z or A to Z will be used in the calculation. Each alphabet has a particular value. The values are from 1 to 26 in ascending order of the alphabets. It is like this, a = 1, b = 2, c = 3........ z = 26. Both upper case and lower-case letters hold the same values. Then make the sum of these numbers until it comes in one digit. For example, consider the name 'bcz'. Here, b = 2, c = 3 & z = 26. So, the sum is (2+3+26) = 31 = (3+1) = 4.] Then the ratio of these two numbers in percentage will be the result of the calculation. Remember that the result cannot be more than 100% so take the ratio carefully to avoid this problem. The love percentage must be displayed with two decimals.
    - Overview of Option B:
        - Given a string containing only alpha-numerals (0-9, A-Z and a-z), count the number of times the character is present for all characters in the word (frequency count) and show only those characters whose frequency is a prime number. A prime number is a number that is divisible by exactly two different integers. Some examples of prime numbers are 2, 3, 5, 7, 11, etc. The length of the word is positive and less than 2001 characters. The characters are to be sorted in lexicographic order (ascending order). Lexicographic order means ascending order in terms of the ASCII values. Suppose none of the character’s frequency is a prime number, print “Empty”. The prime numbers of these characters are added until a number with a single digit is produced, representing the word's value. For example, EEEAAABBCCCCDD has ABDE as prime characters (3 A’s, 2 B’s, 2 D’s and 3 E’s) and the value of the word EEEAAABBCCCCDD is 1 because [3+2+2+3 = 10] and then [1 + 0 = 1].

## Quickstart Guide
1. Copy all the contents from this repository.
2. Open the MP3A.C file using an IDE, like VSCode
3. Run the MP3A.C file
   - The menu should display the user with three choices:
       - A. Flames Calculator
       - B. Prime Word Detector
       - C. Exit

## Core Concept
- Fundamentals of Programming I

## Test Cases
![Sample Test Cases for the Program](https://github.com/Shojiyao12/Flames_Calculator-and-Prime_Word_Detector/assets/90734662/f71f9ae1-8009-4f84-84e5-1b554179dcc1)

## Preview of the Program for Word Manipulation
![Sample of Flames Calculator Output](https://github.com/Shojiyao12/Flames_Calculator-and-Prime_Word_Detector/assets/90734662/177e1bba-e971-426d-9707-b792900b7311)
![Sample of Prime Word Detector Output](https://github.com/Shojiyao12/Flames_Calculator-and-Prime_Word_Detector/assets/90734662/49d230e0-59e0-4a35-b032-57982091b4cf)
