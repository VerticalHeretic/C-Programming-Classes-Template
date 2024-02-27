#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PapierKamienNozyce(char gracz){
    
    char komp, z;
    time_t tt;
    z = time(&tt);
    srand(z);   
    
    komp = rand()%3+1;
    
    switch(gracz){
        
        case 1:
            
            switch(komp){
                case 1:
                    printf("Remis!\n");
                    break;
                case 2:
                    printf("Wygrałeś!\n");
                    break;
                case 3:
                    printf("Przegrałeś!\n");
                    break;
            }
            break;
        case 2:
        
            switch(komp){
                case 1:
                    printf("Przegrałeś!\n");
                    break;
                case 2:
                    printf("Remis!\n");
                    break;
                case 3:
                    printf("Wygrałeś!\n");
                    break;
            }
            break;
        case 3:
        
            switch(komp){
                case 1:
                    printf("Wygrałeś!\n");
                    break;
                case 2:
                    printf("Przegrałeś!\n");
                    break;
                case 3:
                    printf("Remis!\n");
                    break;
            }
            break;
        default:
            printf("Zła wartość, podaj liczbę z przedziału 1-3\n");
    }
}

int main()
{
    int gracz;
    
    for(int i = 0; i<5; i++){
    scanf("%d", &gracz);
    
	PapierKamienNozyce(gracz);
    }
	return 0;
}
