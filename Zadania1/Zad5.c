#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dana;
    scanf("%i", &dana);
    int suma;
    
    for(int i = 0; i<dana; i++){
        
        if(i%5 == 0 && i%3 == 0){
            suma = suma + i;
        }
        else if(i%5 == 0 || i%3 == 0){
            suma = suma + i;
        }
    }
    printf("Suma wszystkich wielokrotności wynosi %d",suma);
    
	return 0;
}
