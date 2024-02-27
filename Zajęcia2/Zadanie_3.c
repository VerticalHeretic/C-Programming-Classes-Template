#include <stdio.h>

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
}Rectangle;

void Pole_Obwod(Rectangle r){
    
    
}

int main()
{
    Point a;
    a.x = 1;
    a.y = 2;
    
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    Zmien(&a);
    printf("Wartośc x to %d, a y to %d\n", a.x, a.y);
    
    Point b;
    b.x = 5;
    b.y = 7;
    
    
    Rectangle rec1;
    rec1.p1 = &a;
    rec1.p2 = &b;
    
    
    printf("Współrzędne to (%d,%d)", &(rec1.p1), &(rec1.p2));
    return 0;
}
