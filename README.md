# CPSCS-323-Project-1
Author : Gregory Martinez
Email: greg_2000@csu.fullerton.edu
Course: CPSC 323-06
Assignment: Project 1
Date: November 11th, 2022

The purpose of this program is to demonstrate an undersanding of FSA
and Lexical Analysis with Regular Expressions.
To run this prgoram, please have "input_scode.text" saved in the same location as "lexer.cpp"
as the program is reading from this file.

The following are the command line instructions to run this program.

Compile lexer.cpp:
g++ -c -m64 -Wall -fno-pie -no-pie -o lexer.o lexer.cpp

Link object files:
g++ -m64 -fno-pie -no-pie -o lexer.out -std=c++17 lexer.o

Run the Program:
./lexer.out

Alternatively, you may run the "r.sh" bash file provided for a quick compilation as well
in the submission if it saved in the same location as "input_scode.txt" and "lexer.cpp":
./r.sh
