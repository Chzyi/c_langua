#include<stdio.h>
int power(int, int) ;

int main(){
    int x = 5 ;
    int y = 4 ;
   printf("%d^%d=%d\n", x, y, power(x,y)) ;
   return 0 ;
}
int power(int x, int y)
{
    int i, p  ;
    p = 1 ;
    for(i=0; i<y; i++){
        p = p*x;
    }
    return p ;
}