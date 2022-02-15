#include <stdio.h>
#include <math.h>

//int giaithua(int n){
//	int giaithua = 1, i;
//	for(i = 1; i <=n; i++){
//		giaithua = giaithua * i;
//	}
//	return giaithua;
//}	

//***********************************************//
//1. nhap x, n, tinh tong: 
//
//S1=x^1+x^2+...+x^n
//S2=1^2+2^3+3^4+...+n^(n+1)
//***********************************************//
void Bai1(){
	int x, n, i, s1 = 0, s2 = 0;
	printf("Bai 1:\n");
	printf("Input X: "); scanf("%d", &x);
	printf("Input N: "); scanf("%d", &n);
	for(i = 1; i <=n ; i++){
		s1 = s1 + pow(x, i);
		s2 = s2 + pow(i, i+1);
	}
	printf("S1: %d\n", s1);
	printf("S2: %d\n", s2);
}

//***********************************************//
//2. tinh tong
//
//S3=1/1+1/1(1+2)+1/(1+2+3)+...+1/(1+2+...+n)
//S4= 1/1!+1/(2!)+1/(3!)+...+1/(n!)
//***********************************************//
float sohangS3(int n){
	int i, tong = 0;
	for(i = 1; i <= n; i++){
		tong = tong + i;
	}
	return 1.0/tong;
}
void Bai2(){
	printf("\nBai 2:\n");
	int i, n;
	float s3 = 0, s4 = 0;
	printf("Input N: "); scanf("%d", &n);
	for(i = 1; i <=n; i++){
		s3 = s3 + sohangS3(i);
		s4 = s4 + 1.0/giaithua(i);
	}
	printf("S3: %.2f\n", s3);
	printf("S4: %.2f\n", s4);
}

//***********************************************//
//3.tinh tong
//
//S5=1-1/2+1/3-1/4+1/5-...+(/-)1/n
//S6=1+x^2/2!+x^4/4!+...+x^(2n)/(2n!)
//***********************************************//
float sohangS5(int n){
	if(n % 2 == 0) return (-1.0)/n;
	else return 1.0/n;
}
int giaithua(int n){
	int giaithua = 1, i;
	for(i = 1; i <=n; i++){
		giaithua = giaithua * i;
	}
	return giaithua;
}	
void Bai3(){
	printf("\nBai 3:\n");
	int i, n, x;
	float s5 = 0, s6 = 1;
	printf("Input N: "); scanf("%d", &n);
	printf("Input X: "); scanf("%d", &x);
	for(i = 1; i <=n; i++){
		s5 = s5 + sohangS5(i);
		// s6 = s6 + pow(x, (float)(2*i)/(giaithua(2*i)));
		s6 = s6 + pow(x, (2*i))/(float)(giaithua(2*i));
	}
	printf("S5: %.2f\n", s5);
	printf("S6: %.2f\n", s6);
}

//***********************************************//
main(){
//	Bai1();
//	Bai2();
	Bai3();
}
