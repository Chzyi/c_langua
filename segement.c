#include<stdio.h>

/* prints its input one word per line */

int main(){

    int c;
    while((c=getchar()) !=EOF){
        if(c==' ' || c=='\t')
            c='\n' ;
            // putchar(c) ;
        printf("%c", c) ;
    }
    
    return 0 ;
}