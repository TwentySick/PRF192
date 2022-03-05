#include <stdio.h>
#include <math.h>

const MAX = 100;
// *********************************************************************** //
// Binary to Hex, Dec, Oct (Integer type)
//main(){
//	int i = 0, n, sum = 0;
//	printf("Input N (Binary): "); scanf("%d", &n);
//	
//	while(n>0){
//		sum = sum + pow(2, i)*(n%10);
//		n = n/10;
//		i++;
//	}
//	
//	printf("Dec: %d\n", n);
//	printf("Hex: %x\n", n);
//	printf("Oct: %o", n);
//}
// *********************************************************************** //
// Binary to Decimal (Floating Type)
// main(){
// 	system("cls");
// 	double bin, dec = 0;
// 	printf("Enter the number: "); scanf("%lf", &bin);
// 	int a = bin;
// 	double t = bin - a;
// 	int i=0;
// 	while(a!=0){
// 		dec += (a%10)*pow(2,i);
// 		a/=10;
// 		i++;
// 	}	
// 	i = 1;
// 	while(t != 0 && i <10){
// 		int x = round(t*10);
// 		dec += x/pow(2, i);
// 		i++;
// 		t = t*10 -x;
// 	}
// 	printf("%lf", dec);
// }
// *********************************************************************** //
// Decimal to Binary (Floating Type)
// main(){
//     double n;
//     int i=0, temp, count = 0, a[MAX];
//     printf("Enter the number: "); scanf("%lf", &n);
//     // In nua dau
//     temp = (int)n; 
//     for(i=0; temp>0; i++){
// 		a[i] = temp%2;
// 		temp = temp/2;
// 	}
// 	printf("N in binary: ");
// 	for(i=i-1; i>=0; i--){
// 		printf("%d", a[i]);
// 	}
//     // Ranh gioi
//     if (n - (int)n !=0){
//     	if((int)n == 0) printf("0");
//         printf(".");
    
//     // In nua sau
// 	    n = n - (int)n;
// 	    for(i=0;n - (int)n != 0 ;i++){
// 	        a[i] = (int)(n*2);
// 	        n = (n*2) - (int)(n*2);
// 	        count++;
// 	    }
// 	    for(i = 0; i<count;i++){
// 	        printf("%d", a[i]);
// 	    }
// 	}
// }
