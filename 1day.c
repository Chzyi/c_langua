#include<stdio.h>
int F(int) ;
//int F1(int) ;
int main(){

    int x = 13 ;
    int y;
    y = F(x) ;
    
    printf("%d\n", y) ;
    
}

int F(int x){
    if(x<=0){
        return 0 ;
    }
    else{
        return 2*F(x-1)+x*x ;
    }
}

/* 
int F1(int x){
    while(x !=0){
        return 2*F1(x-1) + x*x ;  //this expression is loops, not need while 
    };
} */