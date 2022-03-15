#include <stdio.h>

// 1. Nhap vao n phan tu, sap xep 3 phan tu dau tien trong mang
void Bai1(){
	int n,i,j,t,a[100];
	printf("Input N: "); scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	for(i = 0; i<2; i++){
		for(j = 1; j < 3; j++){
			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// 2. Sap xep cac phan tu SNT trong mang
int isPrime(int n){
	int i, count = 0;
	if(n <= 1) return 0;
	else {
		for(i = 2; i*i <= n; i++){
			if(n % i == 0) return 0;;
		} 
	}
	return 1;
}

void Bai2(){
	int n,i,j,t,a[100];
	printf("Input N: "); scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	for(i = 0; i<n-1; i++){
		for(j = i+1; j < n; j++){
			if( isPrime(a[i]) == 1 && isPrime(a[j]) == 1 && a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// Nhap n phan tu, nhap gia tri b va e, sap xep gia tri tu phan tu b den phan tu e bat ky trong mang theo thu tu tang dan
void Bai3(){
	int b,e,n,i,j,t,a[100];
	printf("Input N: "); scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Input B: "); scanf("%d", &b);
	printf("Input E: "); scanf("%d", &e);
	for(i = b; i<=e-1; i++){
		for(j = i+1; j <=e; j++){
			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

main(){
	Bai1();
	Bai2();
	Bai3();
}
