#include <stdio.h>

int main() {
    int month,year;
    printf("Nhap vao so nam ");
     scanf("%d", &year);
    printf("Nhap vao so thang  ");
    scanf("%d", &month);
    switch (month) {
        case 1:  case 3: case 5: case 7:  case 8:  case 10: case 12:
            printf("thang %d nam %d co 31 ngay \n", month, year);
            break;
        case 4: case 6: case 9: case 11:
            printf("thang %d nam %d co 30 ngay\n", month, year);
            break;
        case 2:
          	if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
          	 	printf("Thang  2 nam %d co  29 ngay\n", year);
			  } else{
            printf("Thang 2 nam %d co 28  ngay\n", year);
            break;
        default:
            printf("so thang khong hop le\n");
            break;
    }
}
    return 0;
}