
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, x;
    printf("hay nhap mot so tu 1 den 10 : ");
    scanf("%d", &num);
    printf("bang cuu chuong cua so %d\n", num);
    for(int i =1;i<=10;i++){
        x=num*i;
        printf("%d x %d = %d \n",num,i,x);
    }
    return 0;
}
