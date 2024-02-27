#include <stdio.h>

void Modyfikuj(float *x){
    
    *x = (*x)*2;
}

int main()
{
    float a = 1.2;
    Modyfikuj(&a);
    printf("Nowa wartość a to %f", a);
    return 0;
}
