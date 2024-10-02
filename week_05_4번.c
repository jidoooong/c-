#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	
	printf("Input the year : ");
	scanf("%i", &y);
	
	(y%4==0)&&(y%100!=0)||(y%400==0);
	
	printf("Is the year %i the leap year? %i", y, (y%4==0)&&(y%100!=0)||(y%400==0));
	
	return 0;
}
