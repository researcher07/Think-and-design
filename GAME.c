#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

  
    int random_number = rand() % 101;
    

    int n;
    printf("\tEnter a number : ");
    int c=0;
    while(n!=random_number){
        c+=1;
        scanf("%d",&n);
        if(n>random_number){
            printf("enter a less number : ");
        }else if(n<random_number){
            printf("enter a big number : ");
            
        }
    }
    printf("you won boyaa in %d it is %d",c,random_number);

    return 0;
    
}