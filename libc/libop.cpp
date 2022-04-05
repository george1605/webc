#include <malloc.h>
#define _MEM 

void* _MEM operator new(size_t x)
{
  return malloc(x);
}

void _MEM operator delete(void* x)
{
  free(x);
}
