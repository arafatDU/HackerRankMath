#include<stdio.h>

int main(){
    int n,px,py,qx,qy;     //n -> How many times input P(px,py) & Q(qx,qy)
    int rx,ry;

    scanf("%d", &n);


    for(int i=0; i<n; i++){
        scanf("%d%d%d%d",&px,&py,&qx,&qy);

        rx = qx + (qx-px);
        ry = qy + (qy -py);

        printf("%d %d\n",rx,ry);
    }

    return 0;
}




















/*
#include<stdio.h>

int main(){
    int n,px,py,qx,qy;
    int rx,ry;

    scanf("%d", &n);
    scanf("%d%d",&px,&py);
    scanf("%d%d", &qx, &qy);

    rx = qx + (qx-px)/(n-1);
    ry = qy + (qy -py)/(n-1);

    scanf("%d%d",&px,&py);
    scanf("%d%d", &qx, &qy);

    printf("%d %d\n", rx, ry);

    rx = qx + (qx-px)/(n-1);
    ry = qy + (qy -py)/(n-1);

    printf("%d %d", rx, ry);

    return 0;
}
 */