#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER VALUE A:");
    scanf("%d",&a);
    printf("ENTER VALUE B:");
    scanf("%d",&b);
    printf("ENTER VALUE C:");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        printf("A is min with value of %d",a);
    }
    else{
        if (b<a && b<c)
        {
        printf("B is min with value of %d",b);
        }
        else{
        printf("C is min with value of %d",c);
        }
    }
    return 0;
}
