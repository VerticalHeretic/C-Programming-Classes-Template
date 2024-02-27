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
    
    int dl = (sqrt(pow((*r).p2->x-(*r).p1->x,2)+pow((*r).p2->y-(*r).p1->y,2)));
    int wys = (sqrt(pow((*r).p4->x-(*r).p3->x,2)+pow((*r).p4->y-(*r).p3->y,2)));
    
    printf("%d,", dl* wys);
}

int main()
{
    Point a = {3,4};
    
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    Zmien(&a);
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    
    Point b = {1,1};
    Point c = {1,5};
    Point d = {4,1};
    Rectangle rec1 = {&a, &b, &c, &d};
    
    Pole_Obwod(&rec1);
    
    
    return 0;
}
