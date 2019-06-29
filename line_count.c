#include<stdio.h>

/* counting lines in input */
int main()
{
    int c, nl ;
    nl = 0 ;
    while((c=getchar()) != EOF ){

        if(c=='\n') /* when return , the nl add 1 by itself */
            nl++ ;
    }

    printf("nl=%d\n", nl) ;
    return 0 ;
}