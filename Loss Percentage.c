#include<stdio.h>
int main() {
    int CP,SP;
    scanf("%d %d",&CP,&SP);
    double losspercentage=((double)(CP-SP)/CP)*100;
    printf("%.2f",losspercentage);
}