#include <stdio.h>

void printArray(int *a, int count)
{
 for(i = count; i < count; i++) 
 {
 printf("the number is %d/n", a[i]);
 }
  
  
}


int main(void)
{
  int x[] = {4, 5, 2, 6, 4};  
  printArray(x, 5);
}
