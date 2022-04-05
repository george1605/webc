#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>

enum types { ARRAY, OBJECT, STRING, NUMBER, NAN, UNKNOWN }; // JS types
struct var 
{
  void* info;
  enum types type;
};

enum types typeof(std::string i)
{
  if(i[0] == '[' && *i.end() == ']')
    return types::ARRAY;
  else if(atoi(i) != 0)
    return types::NUMBER;
  else if(i.find(34) != std::string::npos)
    return types::STRING;
  else
    return types::UNKNOWN;
}

struct var getvar(std::string str, int start = 0)
{
  std::string cpy;
  int a = start;
  while(str[a] != 32 || str[a] != '.')
    cpy.push_back(str[a]);
  struct var = {.type = typeof(cpy); };
  return var;
}

int valof(std::string expr) // executes an statement
{
   struct var v1, v2;
   return -1;
}

void exec(std::string x)
{
  // console in / out
  
}
