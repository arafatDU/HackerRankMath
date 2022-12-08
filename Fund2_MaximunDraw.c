#include<stdio.h>

int main(){
    int t,n;       // t = How many times input n

    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);

        printf("%d\n", ++n);
    }

    return 0;
}