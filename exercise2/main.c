#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,b,c;

    printf("please enter integer lengths of 3 sides of a triangle: \n");
    scanf("%d", &a);
    scanf("%d",&b);
    scanf("%d",&c);

    int ab = a*a + b*b;

    if(ab== c*c){
        printf("this is a right-angled triangle");
        return 0;
    }

    if(ab > c*c){
        printf("this is an acute angle");
        return 0;
    }

    if(ab < c*c){

        printf("this is an obtuse angle");
        return 0;
    }

    printf("this is not a triangle");

    return 0;
}