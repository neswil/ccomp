#include <stdio.h>


void incf(int *p)
{


*p = *p + 1;



}


int main(void)
{

int i = 5;
int *p = &i;
printf("The number is %d\n", i);
incf(p);

printf("The number is now %d\n", i);





}
