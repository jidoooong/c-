#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	char b;
	int c;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &a, &b, &c);
	
	switch(b){
		case '+':
		printf("=%i\n", a+c);
		break;
		
		case '-':
		printf("=%i\n", a-c);
		break;
		
		case '*':
		printf("=%i\n", a*c);
		break;
		
		case '/':
		printf("=%i\n", a/c);
		break;
	}
	
	return 0;
}
