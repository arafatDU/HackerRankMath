#include<stdio.h>
int main(){
    int t,n;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        if(n<=2)  n = n-1;
        else {
            n = n-1;
            for(int i=n-1; i>0; i--){
                n += i;
            }
        }
        printf("%d\n",n);
    }

    return 0;
}