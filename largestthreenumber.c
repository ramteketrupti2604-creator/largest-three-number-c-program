#include<stdio.h>
int main(){
    int a=22,b=44,c=55;
    if(a>b && a>c){
        printf("a is largest");
    }
    else if(b>c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
     return 0;
}
