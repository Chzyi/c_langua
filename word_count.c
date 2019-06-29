#include<stdio.h>
#define IN 1
#define OUT 0
/*  counting lines, word and characters in input*/
int main(){

    int c, nl, nw, nc, state ;
    state = OUT ;
    nl = nw = nc = 0 ;
    while((c=getchar()) != EOF){
        ++nc ;

        if(c=='\n') /* if return, lines+1 */
            ++nl ;

        if(c==' ' || c=='\n' || c=='\t')
            state = OUT ;
        else if(state==OUT){
            state = IN;
            ++nw ;
        }
    
    }

    printf("nc=%d\nnl=%d\nnw=%d\n", nc, nl, nw) ;
    return 0 ;
}