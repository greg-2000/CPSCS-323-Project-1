#! /bin/bash

rm *.o
rm *.out

echo "Bash: Compile lexer.cpp"
g++ -c -m64 -Wall -fno-pie -no-pie -o lexer.o lexer.cpp

echo "Link object files"
g++ -m64 -fno-pie -no-pie -o lexer.out -std=c++17 lexer.o

echo "Run Program"
./lexer.out

echo "Terminating. Good Bye."