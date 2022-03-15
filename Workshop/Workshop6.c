#include <stdio.h>
#include <math.h>
#include <string.h>

const MAX = 100;

//1. Chuyen tu he 10 sang he 2 doi voi so thuc (co phan thap phan).
//2. Chuyen tu he 2 sang he 10 doi voi so thuc (co phan thap phan).
//3. nhap mang n phan tu, tinh tong 3 phan tu chan cuoi cung trong mang (tong co dieu kien).

void bai1(void){
    double n;
    int i=0, temp, count = 0, a[MAX];
    printf("Bai 1:\n");
    printf("Input N (Decimal): "); scanf("%lf", &n);
    // In nua dau
    temp = (int)n; 
    for(i=0; temp>0; i++){
		a[i] = temp%2;
		temp = temp/2;
	}
	printf("N in binary: ");
	for(i=i-1; i>=0; i--){
		printf("%d", a[i]);
	}
    // Ranh gioi
    if (n - (int)n !=0){
    	if((int)n == 0) printf("0");
        printf(".");
    
    // In nua sau
	    n = n - (int)n;
	    for(i=0;n - (int)n != 0 ;i++){
	        a[i] = (int)(n*2);
	        n = (n*2) - (int)(n*2);
	        count++;
	    }
	    for(i = 0; i<count;i++){
	        printf("%d", a[i]);
	    }
	}
}

void bai2(void){
    char s[MAX];
    int i=0, temp, count = 0, check = 0, a[MAX], digit, text_length;
    double sum = 0;
    printf("\n\nBai 2:\n");
    printf("Input N (Binary): "); scanf("%s", &s);

    text_length = strlen(s);

    for(i = 0; i < text_length; i++){
        a[i] = s[i] - 48;

        if(s[i] == 46){ // Danh dau ranh gioi
            temp = i;
            break;
        }
        count++;
    }
    // Chuyen phan nguyen tu he co so 2 sang he co so 10
    digit = count - 1;
    for(i = 0; i < count; i++){
        sum = sum + pow(2, digit)*a[i];
        digit--;
    }
    // Nua sau
    for(i = temp+1; i< text_length; i++){
    	a[i] = s[i] - 48;
	}
    // Chuyen phan thap phan tu he co so 2 sang he co so 10
    for(i = temp + 1; i < text_length; i++){
        sum = sum + pow(2, digit)*a[i];
        digit--;
    }
    // Output
    printf("N in decimal: %lf", sum);
}

void bai3(){
    int n, i, a[MAX], sum = 0, count = 0;
    printf("\n\nBai 3:\n");
    do{
    printf("Input N (N > 3): "); scanf("%d", &n);
    } while(n<3);

    for(i = 0; i<n; i++){
        printf("A[%d]: ", i); scanf("%d", &a[i]);
    }
    for (i=n-1; i>=0; i--){
        if(a[i] % 2 == 0){
            sum = sum + a[i];
            count++;
        }
        if(count == 3) break;
    }
    if(count == 3) printf("Tong 3 phan tu chan cuoi cung trong mang: %d", sum);
    else printf("Mang khong co du phan tu chan");
}

main(){
    bai1();
//    bai2();
//    bai3();
}

