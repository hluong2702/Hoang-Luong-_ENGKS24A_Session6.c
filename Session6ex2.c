#include<stdio.h>

int main(){

    int number, chan =0, le=0;

    for(int i=1;i<=5;i++){
        printf("Moi ban nhap vao so nguyen thu %d ",i);
        scanf("%d",&number);

        if(number %2 ==0){
            chan++;
        }else{
            le++;
        }
    }
    printf("So le la %d ",le);
    printf("So chan la %d ",chan);
    return 0;
}