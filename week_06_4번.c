#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum;
	sum==0;
	int a;
	int b;
	b==0;
	
	printf("Enter a number: ");
	scanf("%i", &a);
	
	for(b=0; b<=a; b++)
	{
	sum+=b;	
	}
			 
	printf("The result is %i", sum);		 
	
	return 0;
}
