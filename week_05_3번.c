#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s;
	int m;
	
	printf("Input the second : ");
	scanf("%i", &s);
	
	m=s/60;
	
	printf("The time is %i : %i ", m, s%60);
	
	return 0;
}
