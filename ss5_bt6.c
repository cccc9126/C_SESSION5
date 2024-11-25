#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2;
    printf("nhap vao so thu nhat ");
    scanf("%d",&num1);
    printf("nhap vao so thu nhat ");
    scanf("%d",&num2);
    int i;
    float result;
    while(i!=5){
        printf("1. tong cua hai so\n");
        printf("2. hieu cua hai so\n");
        printf("3. tich cua hai so\n");
        printf("4. thuong cua hai so\n");
        printf("5. thoat\n");
        printf("hay nhap lua chon cua ban : ");
        scanf("%d", &i);
        if (i ==1){
            result= num1+num2;
            printf("tong cua hai so la %.0f\n", result);
        }else if (i ==2){
            result= num1-num2;
            printf("hieu cua hai so la %.0f\n",result);
        }else if (i == 3){
            result = num1*num2;
            printf("tich cua hai so la %.0f\n", result);
        }else if (i ==4){
            result = (float)num1/num2;
            printf("thuong cua hai so la %.2f\n",result);
        }else if (i == 5){
            break;
        }else{
            printf("lua chon khong hop le xin moi lua chon lai\n");
        }
        
        
    }
    return 0;
}
