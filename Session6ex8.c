#include<stdio.h>

int main(){
    float deposits, rate, interest_amount, sum;
    int month; 
    printf("Moi ban nhap vao so tien gui ngan hang ban dau ");
    scanf("%f",&deposits);

    printf("Moi ban nhap vao lai suat thang ");
    scanf("%f",&rate);

    printf("Moi ban nhap vao so thang gui ");
    scanf("%d",&month);

    for(;month>0;month--){
          interest_amount = deposits * month * rate;
          sum = deposits + interest_amount;
    } 
    printf("So tien lai la %.2f",interest_amount);
    printf("So tien nhan dc la %.2f",sum);
    
    return 0;

}