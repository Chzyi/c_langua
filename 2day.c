#include<stdio.h>
int bad(unsigned int) ;
int main()
{
    int N = 10;
    printf("%d\n", bad(N)) ;
    return 0 ;
}

int bad(unsigned int N)
{
    if(N==1)
        return 0;
    else
    {
        return bad(N/3+1) +N-1 ;
    }
        
}