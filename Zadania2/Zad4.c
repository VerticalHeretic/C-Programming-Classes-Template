#include <stdio.h>
#include <math.h>

typedef struct {
    char * name;
    float grade;
} student;

void Sortuj(student *tab){
    student pomocnicza ;
    float czyposortowane = 0;
    do
    {
        
        czyposortowane = 0;
       
        for(int i=0; i<4; i++)
        {
            
            if(tab[i].grade<tab[i+1].grade)
            {
                pomocnicza = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = pomocnicza;
                czyposortowane = 1;
            }
        }
       
    }while(czyposortowane != 0);
    
    for(int i = 0; i<4; i++){
        printf("%s %f \n", tab[i].name, tab[i].grade);
    }
}

int main()
{
    
    student st1 = {"Adam",4.5};
    student st2 = {"Anna", 3.5};
    student st3 = {"Michał",2};
    student st4 = {"Kasia", 5};
    
    student tab[4];
    tab[0] = st1;
    tab[1] = st2;
    tab[2] = st3;
    tab[3] = st4;
    
    printf("%s %f\n\n",tab[0].name, tab[0].grade);
    
    Sortuj(tab);
    return 0;
}
