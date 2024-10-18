#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(){
	int n;
	printf("Enter the value: ");
	scanf("%i", &n);
	
	return n;
} 

int factorial(int n){
	int i;
	int res = 1;
	for(i=1; i<=n; i++)
		res*=i;
	return res;	
}

int combination(int num1, int num2){
	return(factorial(num1)/(factorial(num1-num2)*factorial(num2)));
}

int main(){
	int a, b, com;
	a=get_integer();
	b=get_integer();
	com=combination(a, b);
	
	printf("The result of C(%i, %i) is %i.", a, b, com);
	return 0;	
}
