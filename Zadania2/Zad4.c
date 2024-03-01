#include <stdio.h>
#include <math.h>

typedef struct {
    char * name;
    float grade;
} student;

void Sortuj(student *tab[]){
    int pomocnicza = 0;
    int czyposortowane = 0;
    do
    {
        //Zmienna utrzymująca program do momentu
        //posortowania w petli
        czyposortowane = 0;
       
        for(int i=0; i<4; i++)
        {
            //Wpisanie zmiennych z pomoca
            //zmiennej pomocniczej
            if(tab[i].grade<tab[i+1].grade)
            {
                pomocnicza = tab[i].grade;
                tab[i].grade = tab[i+1].grade;
                tab[i+1].grade = pomocnicza;
                czyposortowane = 1;
            }
        }
       
    }while(czyposortowane != 0);
    
    for(int i = 0; i<4; i++){
        printf("%s %f", tab[i]->name, tab[i]->grade);
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
    
    printf("%s %f",tab[0].name, tab[0].grade);
    
    Sortuj(tab);
    return 0;
}
