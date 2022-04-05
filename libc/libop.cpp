#include <malloc.h>
#define _MEM 

char auxmem[100]; // in case of smth

void* _MEM operator new(size_t x)
{
  void* y = malloc(x);
  if(y != 0)
    return (auxmem + x % sizeof(auxmem));
  return y;
}

void _MEM operator delete(void* x)
{
  free(x);
}
