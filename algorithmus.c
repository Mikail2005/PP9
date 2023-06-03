#include<stdio.h>
int main() {
    int x;
    double rest;


    printf("gib eine ganze zahl ein\n");
    scanf("%i",&x );
    rest=x%2 ;
    if (rest!=0)
    {
        printf("die zahl ist ungerade rest=%f", rest);
    }
    else
    {
        printf("die zahl ist gerade");
    }
return 0;
}
