#include<stdio.h>

int main(){

    int password;
    int correctpassword = 27022006;

    printf("Moi ban nhap vao mat khau de mo may ");
    scanf("%d",&password);

    if(password == correctpassword){
        printf("Mat khau dung roi mo may thanh cong ");
    }else{
        printf("Mat khau chua dung roi moi an nhap lai ");
    }
    return 0;
}