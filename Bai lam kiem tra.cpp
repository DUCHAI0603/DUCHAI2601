#include <stdio.h>
#include<math.h>
int main(int argc, const char * argv[]) {
    float a,b,c,S,p;
    printf("Nhap canh a: ");
    scanf("%f",&a);
    printf("Nhap canh b: ");
    scanf("%f",&b);
    printf("Nhap canh c: ");
    scanf("%f",&c);
    if(a+b>=c&&b+c>=a&&a+c>=b){
        printf("3 Canh vua nhap tao thanh 1 tam giac\n");
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Dien tich tam giac la: %f\n",S);
        printf("Chu vi tam giac la: %f\n",a+b+c);
        }else{
    printf("3 canh vua nhap khong la tam giac");
    }
	}
