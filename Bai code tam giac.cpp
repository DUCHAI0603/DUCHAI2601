#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a =");
    scanf("%d",&a);
    
    printf("Nhap b =");
    scanf("%d",&b);
    
    printf("Nhap c =");
    scanf("%d",&c);
    
    if(a<b+c && b<a+c && c<a+b ){
    	if(a*a==b*b+c*c && b*b==a*a+c*c && c*c==a*a+b*b){
    		printf("Day la tam giac vuong");
		}else{
			if(a==b==c){
				printf("Day la tam giac deu");
			}else{
				if(a==b && a==c && b==c){
					printf("Day la tam giac can");
				}else{
					if(a*a>b*b+c*c && b*b>a*a+c*c && c*c>a*a+b*b){
						printf("Day la tam giac tu");
					}else{
						printf("Day la tam giac nhon");
					}
				}
			}
		}
	}else{
		printf("Ba canh a,b,c khong phai la mot tam giac");
	}

}

