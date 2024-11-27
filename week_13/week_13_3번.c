#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int ID;
    int score;
};

int main(void) {
    struct student s[STUDENTNUM];
    int totalscore = 0; 
    int highestscore = 0;
    int highestID = 0;
    int i;

   
    for (i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ", i + 1);
        scanf("%d", &s[i].ID);
        printf("Input the score: ", i + 1);
        scanf("%d", &s[i].score);

      
        totalscore += s[i].score;

        
        if (s[i].score > highestscore) {
            highestscore = s[i].score;
            highestID = s[i].ID;
        }
    }

   
    float average = (float)totalscore / STUDENTNUM;


    printf("The average of the score: %f\n", average);
    printf("The highest score - ID: %d, score: %d\n", highestID, highestscore);

    return 0;
}
