//**********************************************************************************************************************//
// Nhap vao so tien (nghin dong), in ra so to tien co cac menh gia thuc te (500k, 200k, 100k, 50k, 20k, 10k, 5k, 2k, 1k) voi so luong to tien it nhat
//**********************************************************************************************************************//
//#include <stdio.h>
//
//main(){
//	int i, SoTien, SoTo;
//	int LoaiTien[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
//	printf("Nhap so tien (nghin dong): "); scanf("%d", &SoTien);
//	for(i = 0; i < 9 ; i++){
//		SoTo = SoTien / LoaiTien[i];
//		if(SoTo > 0){
//			printf("Co %d to %d k\n", SoTo, LoaiTien[i]);
//			SoTien = SoTien - SoTo*LoaiTien[i];
//		}
//	}
//}

//**********************************************************************************************************************//
// Nhap n
// a. Kiem tra n co phai la so nguyen to khong? Neu n khong phai la so nguyen to thi in ra cac uoc so cua no
// b. In ra so luong cac uoc so cua no
// c. In ra tong cac uoc so cua no
//**********************************************************************************************************************//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int checkPrime(int n){
//	int i, count = 0;
//	if(n <= 1){ 			//if(n == 0 || n == 1)
//		return 0;
//	} else {
//		for(i = 2; i <= sqrt(n); i++){
//			if(n % i == 0) count++;
//		} 
//	}
//	if(count !=0) return 0;
//	else return 1;
//}
//
//main(){
//	int n, i, count = 0, sum = 0;
//	do{
//		system("cls");
//		printf("Nhap N (N>0): "); scanf("%d", &n);
//	}while(n < 0);
//	
//	if(checkPrime(n) == 1){
//		printf("%d la so nguyen to", n);
//		count = 2;
//		sum = 1 + n;
//	} else {
//		if(n == 0){
//			printf("0 khong co uoc so");
//		} else {
//			printf("Cac uoc so cua %d: ", n);
//			for(i = 1; i <= n; i++){
//				if(n % i == 0){
//					printf("%d ", i);
//					count++;
//					sum = sum + i;
//				}
//			}
//		}
//	}
//	printf("\nSo luong cac uoc so cua %d: %d", n, count);
//	printf("\nTong cac uoc so cua %d: %d", n, sum);
//}
