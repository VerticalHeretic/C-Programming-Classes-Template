#include <stdio.h>

int main()
{
    
    int a = 1;
    
    int * pointerA = &a;
    
    //Zwiększaamy wartość po wskaźniku
    (*pointerA)++;
    
    printf("Wartość a to %d\n", a);
    printf("Wartość a po wskaźniku to %d\n", *pointerA);
    
    return 0;
}
