#include<stdio.h>
int main()
{
    int n;
    printf("\n\tEnter a num :");
    scanf("%d",&n);
    printf("odd numbers\n");
    for(int i =1; i<=n; i=i+1)
    {
        if(i%2!=0) 
        {    
            printf("%d \n",i);
        }
    }
    printf("even numbers\n");
    for(int i =1; i<=n; i=i+1)
    {
        if(i%2==0) 
        {       
            printf("%d \n",i);
        }
    }
    return 0;
}