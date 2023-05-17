#include <stdio.h>

int secondf(int i){

	return ++i;


}

int main(void){

int n = secondf(5);

printf("The number happens to be %d", n);

}




