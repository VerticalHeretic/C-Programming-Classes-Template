#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grades[2][5]={{1,2,1,4,5},{5,3,3,1,2}};
    
    float sr_matma = 0;
    float sr_fizyka = 0;
    
    for (int i = 0;i<5;i++){
        sr_matma += grades[0][i];
        sr_fizyka += grades[1][i];
    }
    printf("Średnia z matematyki to %.2f, a z fizyki to %.2f", sr_matma/5,sr_fizyka/5);
    
	return 0;
}
