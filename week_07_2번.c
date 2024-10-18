#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	return (a+b);
}


int square(int n){
	return(n*n);
}

int get_max(int x, int y){
	if(x<y)
	return(y);
	else
	return(x);
}

int main()
{
	int num1, num2;
	int sum, squ, max;
	
	printf("Enter the integers: ");
	scanf("%i %i", &num1, &num2);
	
	sum=sumTwo(num1,num2);
	squ=square(num1);
	max=get_max(num1, num2);
	
	printf("Result - Sum: %i, Square: %i, Max: %i\n", sum, squ, max);
	
	return 0;
	}
