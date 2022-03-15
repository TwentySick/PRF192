#include <stdio.h>
#include <math.h>

void HinhA(int n){
	int i,j;
	printf("===> Hinh (a):\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i>=j) printf("# ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhB(int n){
	int i,j;
	printf("===> Hinh (b):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i>=j) printf("# ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhC(int n){
	int i,j;
	printf("===> Hinh (c):\n\n");
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			if(i>=j) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhD(int n){
	int i,j;
	printf("===> Hinh (d):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i>j) printf("  ");
			else printf("# ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhE(int n){
	int i,j;
	printf("===> Hinh (e):\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhF(int n){
	int i,j;
	printf("===> Hinh (f):\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhG(int n){
	int i,j;
	printf("===> Hinh (g):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhH(int n){
	int i,j;
	printf("===> Hinh (h):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j||j==n-i+1) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhI(int n){
	int i,j;
	printf("===> Hinh (i):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j||j==n-i+1||j==1||j==n) printf("# ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhJ(int n){
	int i,j;
	printf("===> Hinh (j):\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("# ");}
		for(j=1;j<=i-1;j++){printf("# ");	}

		printf("\n");
	}
	printf("\n");
}

void HinhK(int n){
	int i,j;
	printf("===> Hinh (k):\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("# ");}
		for(j=1;j<=i-1;j++){printf("# ");	}

		printf("\n");
	}
	printf("\n");
}

void HinhL(int n){
	int i,j;
	printf("===> Hinh (l):\n\n");
	for(i=1;i<=n;i++){ // In nua tren
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("# ");}
		for(j=1;j<=i-1;j++){printf("# ");	}

		printf("\n");
	}
	for(i=n-1;i>0;i--){ // In nua duoi
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("# ");}
		for(j=1;j<=i-1;j++){printf("# ");	}

		printf("\n");
	}
	printf("\n");
} 

void HinhM(int n){
	int i,j;
	printf("===> Hinh (m):\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhP(int n){
	int i,j;
	printf("===> Hinh (p):\n\n");
	for(i=n;i>0;i--){
		for(j=i;j>0;j--){
			printf("%2d ", j);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhN(int n){
	int i,j, number;
	printf("===> Hinh (n):\n\n");
	for(i=n;i>0;i--){
		number = 1;
		for(j=n;j>0;j--){
			if(i>=j) printf("%2d ", number++);
			else printf("%3s", "  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhO(int n){
	int i,j;
	printf("===> Hinh (o):\n\n");
	for(i=1;i<=n;i++){
		for(j=n;j>0;j--){
			if(j<=i) printf("%2d ", j);
			else printf("%3s", "  ");
		}
		printf("\n");
	}
	printf("\n");
}

void HinhQ(int n){
	int i,j;
	printf("===> Hinh (q):\n\n");
	for(i=1;i<=n;i++){
		for(j=n-i;j>0;j--){						// In khoang trong tao hinh tam giac can 
			printf("%3s", "  ");
		}
		for(j=1;j<=i;j++){						// In nua dau hinh tam giac can
			printf("%2d ",j);
		}
		for(j=i-1;j>0;j--){						// In nua sau hinh tam giac can
			printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}

void HinhR(int n){
	int i,j;
	printf("===> Hinh (r):\n\n");
	for(i=n;i>0;i--){
		for(j=n-i;j>0;j--){						// In khoang trong tao hinh tam giac can
			printf("%3s", "  ");
		}
		for(j=1;j<=i;j++){
			printf("%2d ",j);
		}
		for(j=i-1;j>0;j--){
			printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}

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

// ********** Pascal Triangle ********** //
int giaithua(int n){
	int i, gt = 1;
	for(i = 1; i<=n; i++) gt *= i;
	return gt;
}

// ===> PowerOf2Triangle <===
void PowerOf2Triangles(int n){
	int i,j, number;
	printf("===> Power of 2 Triangles:\n\n");
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
// ===> Pascal Triangle 1 <===
void PascalTriangle1(int n){
	int i,j, number;
	printf("===> Pascal Triangle 1:\n\n");
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){						// In cac gia tri trong Pascal Triangle
			number = giaithua(i)/(giaithua(j)*giaithua(i-j));
			printf("%3d ", number);
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Pascal Triangle 2 <===
void PascalTriangle2(int n){
	int i,j, number;
	printf("===> Pascal Triangle 2:\n\n");
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
// ************************************* //

// ************** Tam giac Fibonacci ************** //
float g(int x){ // Ap dung cong thuc tinh cua Binet ket hop voi day so Lucas
	float a = (1+sqrt(5))/2;
	float b = (1-sqrt(5))/2;
	return (pow(a, x) + pow(b, x));
}

float number(float m, float n){  				// Tinh gia tri in ra tai vi tri (m;n) trong he toa do
	float result;	
	result = (g(m+2) + pow(-1, n)*g(m-2*n))/5;
	return result;
}

void FibonacciTriangle(int n){
	int i,j;
	printf("===> Fibonacci Triangle:\n\n");
	for(i=0;i<=n;i++){
		for(j=n-i;j>0;j--) printf("%2c", ' ');
		for(j=0;j<=i;j++){						// In cac gia tri trong Fibonacci Triangle
			printf("%4.0f", number(i,j));
		}
		printf("\n");
	}
	printf("\n");
	
}
// ************************************************ //

void FloydTriangle(int n){
	int i,j, number = 1;
	printf("===> Floyd Triangle:\n\n");
	for(i=1; i<=n; i++){
		for(j=1;j<=i;j++){
			printf("%3d ", number++);
		}
		printf("\n");
	}
	printf("\n");
}

void Fibonaccilalam(int n){
	int i, j, a = 0, b = 0, c;
	for(i=0; i<n; i++){
		a = 0;
		b = 1;
		printf("%d ", b);
		for(j=0; j<i; j++){
			c = a + b;
			a = b;
			b = c;
			printf("%d ", c);
		}
		printf("\n");
	}
}

main(){
	int n;
	printf("Input N: "); scanf("%d", &n);
//	HinhA(n);
//	HinhB(n);
//	HinhC(n);
//	HinhD(n);
//	HinhE(n);
//	HinhF(n);
//	HinhG(n);
//	HinhH(n);
//	HinhI(n);
//	HinhJ(n);
//	HinhK(n);
//	HinhL(n);
//	HinhM(n);
//	HinhN(n);
//	HinhO(n);
//	HinhP(n);
//	HinhQ(n);
//	HinhR(n);
//	HinhS(n);
//	HinhT(n);
//	HinhU(n);
//	PowerOf2Triangles(n);
//	PascalTriangle1(n);
//	PascalTriangle2(n);
//	FibonacciTriangle(n);
//	FloydTriangle(n);
	Fibonaccilalam(n);
}
