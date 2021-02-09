# 1st practice

## Command line usage

### Mandatory

1. Print the path of current working directory (pwd).
2. List files and directories of this folder (ls).
3. Look at the detailed view of files and directories. Who created these and when (ls -l)? Check the further flags of this command (man ls).
4. Create a directory (mkdir).
5. Enter the created directory (cd). Check if the current working directory really changed. Step back to the parent directory (cd ..) and back to the created directory again.
6. Create a text file and print its content (cat). Command cat is an abbreviation of concatenate. How can the content of multiple files printed being concatenated?
7. Copy the text file (cp) to the current directory and to the parent directory as well. Check if the copy operation has happened and step back to the directory containing the original text file.
8. Rename the copy in the current directory (mv).

### Optional


1. Print the number of lines, words and characters of your file (wc). Print only the number of lines. If you don't know what flag does this, just check the manual.
2. Create a program which prints Hello World to the screen. Redirect the output of this program to wc which prints the number of lines words and characters of your output.

### Advanced

1. Create a few text files and hide the word "apple" in one of them. Try to find this file using grep command.
2. Create a directory structure which contains multiple directories in arbitrary depth. Hide a file named apple.txt somewhere. Try to find this file from the top of your directory hierarchy using "find" command.

## Standard I/O (Input/Output)

### Mandatory

1. Create a program which prints "Hello World" to the screen. (Let's do some variations: what is a warning, what is a compiler error, remove as many spaces as possible, check the difference between indentation with tab or space, etc.)
2. Create a program which prints your name.
3. Create a program which prints the sum of two numbers.

### Optional

1. Create a program in which you divide two numbers. Print the result. What happens if the divisor is 0? What happens if we use integer and float variables?
- Use %f formatting character. Make sure to print the result with two decimal digits.
- Use %d formatting character. Check what happens.
- Use -W, -Wall, -Wextra and -pedantic flags. Is it a compiler error if you're using a wrong formatting character?
2. Create a program which prints the area of a square and a circle. Read the length of square and the radius of circle from the standard input.
- Use function scanf("%d", &a). Use operator & which returns the address of a variable. The value of π should be 3.1415.
3. Create a program which greets your name. Store your name in a variable.
- Use the type char[] and formatting character %s. Pay attention on the syntax of arrays: char name[10].

### Advanced

1. Create a program which transforms the number of days to years, weeks and days. For example: 375 days = 1 year 1 week 3 days. Use the remainder of the bigger unit.
2. Create a Celsius-Fahrenheit conversion program.
