#include <stdio.h>
int main (){
	int n;
	printf("nhap n=");
	scanf("%d,&n");
	int x;
	printf("nhap x-");
	scanf("%d",&x);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<x&& a[i]>max){
			max=a[i];
		}
	}
	printf("so nho hon x va gan x nhat la:%d",max);}
