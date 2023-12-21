#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Enter the value of z:");
    scanf("%d",&z);
    if((x<y && x>z) || (x>y && x<z)){
        printf("1");
    }
    if((y<x && y>z) || (y>x && y<z)){
        printf("2");
    }
    if((z<x && z>y) || (z>x && z<y)){
        printf("3");
    }
    return 0;
}
