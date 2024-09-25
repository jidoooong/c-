#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	
	printf("enter a character : ");
	scanf("%c", &a);
	
	printf("the next character of %c(%d) is %c(%d)",a,a,a+1,a+1);
	return 0;
}
