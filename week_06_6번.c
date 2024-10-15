#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=50;
	int num;
	int t;
	t=0;

	
	do
	{
	printf("Guess a number: ");
	scanf("%i", &num);
	t++;
		if (num>=answer)
		
		  if (num>answer){
	    	printf("High!\n");
	        }
		 
		
	    	else {
	    	printf("Congratulation! Trial: %i\n", t);
	        }
		 
		 
		else {
		printf("Low!\n"); }
	  }while (num!=answer);
	
	return 0;
}
