// Q.find the volume of the cuboid.

#include<stdio.h>
int main(){

    int l, b, h;
    printf("Enter the length | height | width of  cuboid:");
    scanf("%d %d %d",&l,&b,&h);
    float volume = l*b*h;
    printf("volume of cuboid: %.2f",volume);
    return 0;
}