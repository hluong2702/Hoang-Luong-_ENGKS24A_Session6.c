#include<stdio.h>

int main(){
    
    int number;

    printf("Moi ban nhap vao mot so nguyen");
    scanf("%d",&number);
    
    printf("Cac uoc cua %d la ",number);
    for(int i = 1;i <= number;i++){
        if(number % i ==0){
            printf("%d ",i);
        }
    }    
    return 0;
}