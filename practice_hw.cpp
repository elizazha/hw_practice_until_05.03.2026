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
  int a[] = {1, 4, 6, 9};
  int b[] = {2, 3, 5, 7, 8};
  size_t sa = 4, sb = 5;
  int c[9];
  merge(a, sa, b, sb, c);
  for (size_t i = 0; i < sa + sb; i++)
  {
    std::cout << c[i] << " ";
  }
}