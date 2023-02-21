#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter value A:");
    scanf("%d",&a);
    printf("Enter value B:");
    scanf("%d",&b);
    printf("Enter value C:");
    scanf("%d",&c);
    printf("Enter value D:");
    scanf("%d",&d);
    printf("Enter value E:");
    scanf("%d",&e);
    if (a<b && a<c && a<d && a<e)
    {
    printf("A is min with value of %d",a);
    }
    else{
        if (b<a && b<c && b<d && b<e)
        {
        printf("B is min with value of %d",b);
        }
        else{
            if (c<a && c<b && c<d && c<e)
            {
            printf("C is min with value of %d",c);
            }
            else{
                if (d<a && d<b && d<c && d<e)
                {
                printf("D is min with value of %d",d);
                }
                else
                {
                printf("E is min with value of %d",e);
                }
            }
        }
    }
    return 0;
}