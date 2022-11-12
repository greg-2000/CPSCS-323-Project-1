// Author: Gregory Martinez
// Email: greg_2000@csu.fulerton.edu
// Date: November 02, 2022
// Program Name: Project1
// Purpose: The purpose of this program is to simulate the process
// of a tokenizer upon a string. Once tokenized, the program mimcs
// the seperation of lexemes and labels them accordingly in the order
// of the string given.
// The string given is: "while ( s < upper ) t = 33.00 ;"


#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstring>
#include <fstream>

int main(){
  std::string line;
  std::ifstream myfile ("input_scode.txt");
  if(myfile.is_open())
  {
    std::getline(myfile, line);
    myfile.close();
  }
  else std::cout << "Unable to open file";

  std::vector<std::string> tokens;                                                            //vector to hold the tokenized parts of the string

  std::stringstream space_check(line);                                                        //Built-in function to tokenize a string a given char delimiter
  std::string interm;                                                                         //temporary holding variable to push tokens into the vector

  // Vectors of regular expressions
  std::vector<std::string> keywords({"main", "while", "if", "else"});
  std::vector<std::string> seperators({";", "(", ")"});
  char real[] = {'0','1','2','3','4','5','6','7','8','9','.'};
  std::vector<std::string> operands({"+", "-", "=", "<", ">"});
  char identifier[] = {'a','b','c','d','e','f','g','h','i','j','k',
                       'l','m','n','o','p','q','r','s','t','u','v',
                       'w','x','y','z'};
  
  std::cout << std::setw(20) << std:: left << "token" << "lexeme" << std::endl;
  std::cout << "---------------------------\n";


  //tokenize the strings by whitespaces and push into a vector to hold individually
  while(std::getline(space_check, interm, ' '))
  {
    tokens.push_back(interm);
  }

  for (long unsigned int i = 0; i < tokens.size(); i++)
  {
    //std::cout << tokens[i] << std::endl;                                        //used to ensure tokens were seperated correctly.
    for(long unsigned int j = 0; j < keywords.size(); j++)
    {
      if(tokens[i] == keywords[j])
      {
        std::cout << std::setw(20) << std::left << "Keyword " << tokens[i] << std::endl;
      }
    }
    for(long unsigned int j = 0; j < seperators.size(); j++)
    {
      if(tokens[i] == seperators[j])
      {
         std::cout << std::setw(20) << std::left << "Seperator " << tokens[i] << std::endl;
      }
    }
      for(long unsigned int j = 0; j < operands.size(); j++)
    {
      if(tokens[i] == operands[j])
      {
         std::cout << std::setw(20) << std::left << "Operand " << tokens[i] << std::endl;
      }
    }
    //convert token string into an array of char
    int n = tokens[i].length();
    char char_token[n+1];
    std::strcpy(char_token, tokens[i].c_str());

    for(long unsigned int j = 0; j < strlen(real); j++)
    {
    //compare for real
    if(char_token[0] == real[j])
    {
      std::cout << std::setw(20) << std::left << "Real " << tokens[i] << std::endl;
    }
    }
    for(long unsigned int j = 0; j < strlen(identifier); j++)
    {
    //compare for real
    if(char_token[0] == identifier[j])
    {
      std::cout << std::setw(20) << std::left << "Identifier " << tokens[i] << std::endl;
    }
    }

}
return 0;
}
