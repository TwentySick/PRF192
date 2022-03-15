#include <stdio.h>

void HinhS(int n){
	int i,j;
	printf("===> Hinh (s):\n\n");
	for(i=1;i<=n;i++){
		// In nua dau
		for(j=1;j<=i;j++) printf("%2d ",j);		// In so nua dau
		for(j=n-i;j>0;j--) printf("%3s", "  ");        // In khoang trong nua dau
		// In nua sau
		for(j=n-i-1;j>0;j--) printf("%3s", "  ");   	// In khoang trong nua sau
		if(i==n){								// In so nua sau dong cuoi cung
			for(j=i-1;j>0;j--) printf("%2d ",j);
		} else {								// In so nua sau neu khong phai dong cuoi cung
			for(j=i;j>0;j--) printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhT(int n){
	int i,j;
	printf("===> Hinh (t):\n\n");
	for(i=n;i>0;i--){
		// In nua dau
		for(j=1;j<=i;j++) printf("%2d ",j); 		// In so nua dau
		for(j=n-i;j>0;j--) printf("%3s", "  ");    	// In khoang trong nua dau
		// In nua sau
		for(j=n-i-1;j>0;j--) printf("%3s", "  ");		// In khoang trong nua dau
		if(i == n){								// In so nua sau neu la dong dau tien
			for(j=i-1;j>0;j--) printf("%2d ",j);
		} else {								// In so nua sau neu khong phai la dong dau tien
			for(j=i;j>0;j--) printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhU(int n){
	int i,j,number;
	printf("===> Hinh (u):\n\n");
	for(i=1;i<=n;i++){
		number = i;
		for(j=1;j<=n-i;j++) printf("  ");		// In ra khoang trong tao hinh tam giac can
		for(j=1;j<=i;j++){						// In so nua dau
			printf("%d ",number%10);
			number++;
		}
		number--;
		for(j=i-1;j>0;j--){						// In so nua sau
			number--;
			printf("%d ", number%10);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhA(int n){
	int i,j, number;
	printf("===> Hinh (a):\n\n");
	for(i=1;i<=n;i++){
		number = 1;
		for(j=n-i;j>0;j--) printf("%5c",' ');
		for(j=1; j<=i;j++){
			printf("%4d ", number);
			number *= 2;
		}
		number /= 2;
		for(j=i-1;j>0;j--){
			number /= 2;
			printf("%4d ", number);
		}
		printf("\n");
	}
	printf("\n");
}

int giaithua(int n){
	int i, gt = 1;
	for(i = 1; i<=n; i++) gt *= i;
	return gt;
}

void HinhB(int n){
	int i,j, number;
	printf("===> Hinh (b):\n\n");
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){						// In cac gia tri trong Pascal Triangle
			number = giaithua(i)/(giaithua(j)*giaithua(i-j));
			printf("%3d ", number);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhC(int n){
	int i,j, number;
	printf("===> Hinh (c):\n\n");
	for(i=0;i<=n;i++){
		for(j=n-i;j>0;j--) printf("%2c", ' ');
		for(j=0;j<=i;j++){						// In cac gia tri trong Pascal Triangle
			number = giaithua(i)/(giaithua(j)*giaithua(i-j));
			printf("%4d", number);
		}
		printf("\n");
	}
	printf("\n");
}

main(){
	int n;
	printf("Input N: "); scanf("%d", &n);
	HinhS(n);
	HinhT(n);
	HinhU(n);
	HinhA(n);
	HinhB(n);
	HinhC(n);
}
