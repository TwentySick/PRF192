//**********************************************************************************************************************//
//Nhap n so bat ky, in ra min, max, trung binh cong va trung binh nhan cua chung
//#include <stdio.h>
//#include <math.h>
//
//main(){
//	int n, i;
//	float num, min, max, fn;
//	float tbc, tbn, tong, tich;
//	
//	printf("Nhap N: "); scanf("%d", &n);
//	
//	printf("Nhap phan tu 1: "); scanf("%f", &fn);
//	
//	max = fn;
//	min = fn;
//	tong = min;
//	tich = min;
//	
//	for(i = 0; i<n-1; i++){
//		printf("Nhap phan tu %d: ", i+2); scanf("%f", &num);
//		if(min > num) min = num;
//		else if(max < num) max = num;
//		
//		tong = tong + num;
//		tich = tich * num;
//	}
//	
//	tbc = tong / n;
//	tbn = pow(tich, (float)1/n);
//		
//	printf("Min: %.2f\n", min);
//	printf("Max: %.2f\n", max);
//	printf("TBC: %.2f\n", tbc);
//	printf("TBN: %.2f\n", tbn);
////	if((int)n % 2 == 0){
////		if(tich < 0){
////			printf("TBN: Error!!!");
////		} else {
////			tbn = pow(tich, 1/n);
////			printf("TBN: %.2f\n", tbn);
////		}
////	} else {
////		tbn = pow(tich, 1/n);
////		printf("TBN: %.2f\n", tbn);
////	}
//
//}

//**********************************************************************************************************************//
//Nhap a, b, c, giai phuong trinh bac 2 voi cac he so la a, b, c
//#include <stdio.h>
//#include <math.h>
//
//main(){
//	float a, b, c;
//	float Delta;
//
//	printf("Nhap A: "); scanf("%f", &a);
//	printf("Nhap B: "); scanf("%f", &b);
//	printf("Nhap C: "); scanf("%f", &c);
//
//	if(a == 0){
//		if(b == 0){
//			if(c == 0){
//				printf("Phuong trinh co vo so nghiem\n");
//			} else {
//				printf("Phuong trinh vo nghiem\n");
//			}
//		} else {
//			printf("Phuong trinh co nghiem la %.2f\n", (-c)/b);
//		}
//	} else {
//		Delta = b*b - 4*a*c;
//		if(Delta < 0){
//			printf("Phuong trinh vo nghiem");
//		} else if (Delta == 0){
//			printf("Phuong trinh co nghiem la %.2f", (-b)/(2*a));
//		} else {
//			printf("Phuong trinh co 2 nghiem %.2f va %.2f", (((-b)-sqrt(Delta))/(2*a)), (((-b)+sqrt(Delta))/(2*a)));
//		}
//	}
//}
