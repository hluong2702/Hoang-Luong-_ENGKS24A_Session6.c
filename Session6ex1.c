#include<stdio.h>

int main(){

    int number, sum=0;

    for(int i=1;i<=5;i++){
        printf("Moi ban nhap vao so thu %d ",i);
        scanf("%d",&number);
        
        if(number % 2 !=0){
        sum += number;
    }
    }
     printf("Tong cac so le la %d ",sum);
    
    return 0;
    }
