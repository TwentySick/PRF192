#include <stdio.h>

const MAX = 100;

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

// 1. Xoa tat cac ca phan tu co gia tri la SNT trong mang
void Bai1(){
	// Khai bao
	int i, n, j; 
	int a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(i = 0; i<n; i++){
		if(isPrime(a[i]) == 1){
			for(j = i; j<n; j++) a[j] = a[j+1];
			n = n-1;
			i--;
		}
	}

	// Output
	printf("\nAfter:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// 2.1 Xoa bo phan tu chan thu 2
void Bai2_1(){
	// Khai bao
	int i, n, j, count = 0; 
	int a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(i = 0; i<n; i++){
		if(a[i] % 2 == 0) count++;
		if(count == 2){
			for(j = i; j<n; j++) a[j] = a[j+1];
			n = n-1;
			break;
		}
	}

	// Output
	printf("\nAfter:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// 2.2 Xoa bo phan tu NT thu 2
void Bai2_2(){
	// Khai bao
	int i, n, j, count = 0; 
	int a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(i = 0; i<n; i++){
		if(isPrime(a[i]) == 1) count++;
		if(count == 2){
			for(j = i; j<n; j++) a[j] = a[j+1];
			n = n-1;
			break;
		}
	}

	// Output
	printf("\nAfter:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// 3.1 Xoa bo 2 phan tu dung sau phan tu chan thu 2
void Bai3_1(){
	// Khai bao
	int i, n, k, j, count = 0; 
	int a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(i = 0; i<n; i++){
		if(a[i] % 2 == 0) count++;
		if(count == 2){
			k = i;
			break;
		}
	}
	// Xoa 2 phan tu 
	for(i = 0; i<2; i++){
		for(j = k+1; j<n; j++) a[j] = a[j+1];
		n = n-1;
	}

	// Output
	printf("\nAfter:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

// 3.2 Xoa bo 3 phan tu dung sau phan tu chan thu 2
void Bai3_2(){
	// Khai bao
	int i, n, k, j, count = 0; 
	int a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(i = 0; i<n; i++){
		if(a[i] % 2 == 0) count++;
		if(count == 2){
			k = i;
			break;
		}
	}
	// Xoa 3 phan tu 
	for(i = 0; i<3; i++){
		for(j = k+1; j<n; j++) a[j] = a[j+1];
		n = n-1;
	}

	// Output
	printf("\nAfter:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

main(){
	Bai1();
	Bai2_1();
	Bai2_2();
	Bai3_1();
	Bai3_2();
}
