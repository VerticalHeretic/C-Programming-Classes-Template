#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i<=200; i++){
        
        switch( i ){
            
            case i%5==0:
                printf("Foo");
                break;
            case i%7==0:
                printf("Bar");
                break;
            case i%5 == 0 && i%7 == 0:
                printf("FooBar");
                break;
            default:
                printf("%d", i);
        }
    }
	return 0;
}
