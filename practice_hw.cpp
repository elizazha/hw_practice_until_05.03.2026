//Вариант 2
#include <iostream>
#include <cstddef>

template<class T>
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c)
{
  size_t sA = 0, sB = 0, sC = 0;
  while(sA < sa && sB < sb)
  {
    if (a[sA] <= b[sB])
    {
      c[sC] = a[sA];
      sA++;
      sC++;
    }else
    {
      c[sC] = b[sB];
      sC++;
      sB++;
    }
  }
  while (sA < sa)
  {
    c[sC] = a[sA];
    sA++;
    sC++;
  }
  while (sB < sb)
  {
    c[sC] = b[sB];
    sC++;
    sB++;
  }
  return c;
}

int main()
{
}
