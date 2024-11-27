#include <stdio.h>
#include <stdlib.h>


struct point {
    int x;
    int y;
};


int getArea(struct point *pPtr1, struct point *pPtr2);

int main(int argc, char *argv[]) {
    struct point p1, p2;      
    struct point *pPtr1, *pPtr2; 
    pPtr1 = &p1;
    pPtr2 = &p2; 
    
    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input the coordinate p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

   
    int area = getArea(pPtr1, pPtr2);

    
    printf("Area: %d", area);

    return 0;
}


int getArea(struct point *pPtr1, struct point *pPtr2) {
    int width = abs(pPtr2->x - pPtr1->x);
    int height = abs(pPtr2->y - pPtr1->y);
    return width * height; 
}

