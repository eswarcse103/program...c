#include<stdio.h>

int main() {
    int x, y, z;
	
    printf("\nEnter the total number of hours needed: ");
    scanf("%d", &x);
	
    printf("\nEnter the number of days: ");
    scanf("%d", &y);
	
    printf("\nEnter the number of workers: ");
    scanf("%d", &z);
	
    int a = y * 9 / 10;
	
    int b = a * (10) * z;
	
    if(b >= x) {
        int c = b - x;
        printf("\nNot enough time! %d hours needed", c);
    } else {
        int d = x - b;
        printf("\nYes! %d hours left", d);
    }

    return 0;
}
