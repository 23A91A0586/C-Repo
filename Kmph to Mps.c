#include<stdio.h>
int main() {
    int speedkmph;
    scanf("%d",&speedkmph);
    double speedmps=speedkmph * (5.0/18.0);
    printf("%.2f",speedmps);
}