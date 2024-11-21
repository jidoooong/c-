#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = NULL;
    char word[20]; 
    int i;

    fp = fopen("sample.txt", "w");
    
    if (fp == NULL) {
        printf("file is not open.\n");
        return 0; 
    }

    for (i = 0; i < 3; i++) { 
        printf("input a word:", i + 1);
        scanf("%s", word); 
        fprintf(fp, "%s\n", word); 
    }

    fclose(fp); 

    return 0; 
}
