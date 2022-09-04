#include<stdio.h>
int main(){
    
    int T;
    scanf("%d", &T);
    
    int W,X,Y,Z;
    while(T--){
    scanf("%d%d%d%d", &W,&X,&Y,&Z);
    if(W == X || W == Y || W == Z || W == (X+Y) || W == (Y+Z) || W == (X+Z) || W == (X+Y+Z)){
            printf("YES \n");
        }
        else
        {
        printf("NO \n");
        
    }}
    return 0;
}

