#include <stdio.h>

int main(int argc, const char * argv[]) {
    long num, temp,i=1,result;
    printf("hay nhap so nguyen bat ki : ");
    scanf("%ld",&num);
    temp = num;
    if (num<10) {
        printf("%ld\n",num);
    }else if (num>=10){
        while(num>0){
            num = num/i;
            i=i*10;
            
        }
        i=i*100;
        
        while(i!=1){
            result=temp/i;
            printf("%ld\n",result);
            temp=temp- result*i;
            i=i/10;
        }
        printf("%ld\n", temp);
    }
    
    
}

