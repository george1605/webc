#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>

enum types { ARRAY, OBJECT, STRING, NUMBER, NAN, UNKNOWN }; // JS types
enum types typeof(std::string i)
{
  if(i[0] == '[' && *i.end() == ']')
    return types::ARRAY;
  else if(atoi(i) != 0)
    return types::NUMBER;
  else
    return types::UNKNOWN;
}

void exec(std::string x)
{
  
}
