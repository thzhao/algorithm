#include <stdio.h>
#include "util.h"

#define length 10

void insertsort(float *array, int len)
{
  int j;
  int i;
  len = length;
  for (j = 1; j < len; j++)
  {
    float key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > key)
    {
      array[i + 1] = array[i];
      i = i - 1;
    }
    array[i + 1] = key;
  }
}
//test

int main()
{
  float *nums = (float *)malloc(sizeof(float) * length);
  gen_array(nums, length);
  print_array(nums, length);
  insertsort(nums, length);
  print_array(nums, length);
  return 0;
}
