#include <stdio.h>
#include <stdlib.h>

struct student{
	int ID;
	char name[10];
	float grade;
};

int main(void){
	struct student s={24, "jieun", 4.3};
	
	
	printf("ID : %d\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %f\n", s.grade);
};
