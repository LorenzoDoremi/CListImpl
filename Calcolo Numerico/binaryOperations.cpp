// input output
#include <iostream>



// algoritmo in grado di sommare in binario due array rappresentanti numeri binari
void binaryAdd(int a[], int b[], int bits)
{

  int total[bits] = {};
  for (int i = (bits-1); i >= 0; i--)
  {
    int res = total[i] + a[i] + b[i];

    switch (res)
    {
    case 3:

      total[i] = 1;

      if (i - 1 >= 0)
      {
        total[i - 1] = 1;
      }
      break;
    case 2:

      total[i] = 0;

      if (i - 1 >= 0)
      {
        total[i - 1] = 1;
      }
      break;
    case 1:

      total[i] = 1;
      break;
    case 0:
      total[i] = 0;
      break;
    }
  };

  for (int i = 0; i < bits; i++)
  {
    std::cout << total[i];
  }
}