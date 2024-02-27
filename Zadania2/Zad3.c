#include <stdio.h>
#include <math.h>
typedef struct{
    int x;
    int y;
}Point;

void Zmien(Point *p){
    
    p->x++;
    p->y--;
}


typedef struct{
    Point *p1;
    Point *p2;
    Point *p3;
    Point *p4;
}Rectangle;

void Pole_Obwod(Rectangle *r){
    
    int dl = (sqrt(pow((*r).p1->x-(*r).p2->x,2)+pow((*r).p1->y-(*r).p2->y,2)));
    printf("%d",(*r).p2->x);
}

int main()
{
    Point a = {1,2};
    
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    Zmien(&a);
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    
    Point b = {3,5};
    Point c = {5,7};
    Point d = {7,9};
    Rectangle rec1 = {&a, &b, &c, &d};
    
    Pole_Obwod(&rec1);
    
    
    return 0;
}
