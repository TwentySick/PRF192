///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |                                READ ME                                | //
// +-----------------------------------------------------------------------+ //
// | File nay gom co:                                                      | //
// | - Tam giac vuong can dac phai tren, phai duoi, trai tren, trai duoi   | //
// | - Tam giac vuong can rong phai tren, phai duoi, trai tren, trai duoi  | //
// | - Hinh vuong                                                          | //
// | - Hinh thoi                                                           | //
// | - In hinh bang so                                                     | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// +--------------------------------------------------------+--------------+ //
// | Coder: Cao Thanh Ahihi do cho                          | Version: 1.0 | //
// +--------------------------------------------------------+--------------+ //
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>

///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |   Hinh Tam Giac Dac                                                   | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// ===> Tam giac phai tren dac <=== 
void TamGiacPhaiTrenDac(int n){
	int i,j;
	printf("===> Tam Giac Phai Tren Dac:\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i>=j) printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac phai duoi dac <=== 
void TamGiacPhaiDuoiDac(int n){
	int i,j;
	printf("===> Tam Giac Phai Duoi Dac:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i>=j) printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac trai duoi dac <=== 
void TamGiacTraiDuoiDac(int n){
	int i,j;
	printf("===> Tam Giac Trai Duoi Dac:\n\n");
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			if(i>=j) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac trai tren dac <=== 
void TamGiacTraiTrenDac(int n){
	int i,j;
	printf("===> Tam Giac Trai Tren Dac:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i>j) printf("  ");
			else printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |   Hinh Tam Giac Rong                                                  | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// ===> Tam giac vuong can rong phai tren <=== 
void TamGiacVuongCanRongPhaiTren(int n){
	int i,j;
	printf("===> Tam Giac Vuong Can Rong Phai Tren:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if (j==1||i==n||j==i) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac vuong can rong phai duoi <=== 
void TamGiacVuongCanRongPhaiDuoi(int n){
	int i,j;
	printf("===> Tam Giac Vuong Can Rong Phai Duoi:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(j==1||i==n||i==j) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac vuong can rong trai duoi <=== 
void TamGiacVuongCanRongTraiDuoi(int n){
	int i,j;
	printf("===> Tam Giac Vuong Can Rong Trai Duoi:\n\n");
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			if(j==1||j==i||i==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac vuong can rong trai tren <=== 
void TamGiacVuongCanRongTraiTren(int n){
	int i,j;
	printf("===> Tam Giac Vuong Can Rong Trai Tren:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(j==n||i==1||i==j) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |   Hinh Vuong                                                          | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// ===> Hinh vuong rong <===
void HinhVuongRong(int n){
	int i,j;
	printf("===> Hinh Vuong Rong:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Hinh Z nguoc <===
void HinhZNguoc(int n){
	int i,j;
	printf("===> Hinh Z Nguoc:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Hinh Z xuoi <===
void HinhZXuoi(int n){
	int i,j;
	printf("===> Hinh Z Xuoi:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Hinh dong ho cat <===
void HinhDongHoCat(int n){
	int i,j;
	printf("===> Hinh Dong Ho Cat:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j||j==n-i+1) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Hinh vuong rong co hai duong cheo <===
void HinhVuongRongCoHaiDuongCheo(int n){
	int i,j;
	printf("===> Hinh Vuong Rong Co Hai Duong Cheo:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n;j++){
			if(i==n||i==1||i==j||j==n-i+1||j==1||j==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |   Hinh Thoi                                                           | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// ===> Tam giac xuoi dac <===
void TamGiacCanXuoiDac(int n){
	int i,j;
	printf("===> Tam Giac Can Xuoi Dac:\n\n");
	for(i=n;i>0;i--){
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("* ");}
		for(j=1;j<=i-1;j++){printf("* ");	}

		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac nguoc dac <===
void TamGiacCanNguocDac(int n){
	int i,j;
	printf("===> Tam Giac Can Nguoc Dac:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("* ");}
		for(j=1;j<=i-1;j++){printf("* ");	}

		printf("\n");
	}
	printf("\n");
}
// ===> Hinh thoi dac <===
void HinhThoiDac(int n){
	int i,j, input;
	printf("===> Hinh Thoi Dac:\n\n");
	for(i=1;i<=n;i++){ // In nua tren
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("* ");}
		for(j=1;j<=i-1;j++){printf("* ");	}

		printf("\n");
	}
	for(i=n-1;i>0;i--){ // In nua duoi
		for(j=1;j<=n-i;j++){printf("  ");	}
		for(j=1;j<=i;j++){ printf("* ");}
		for(j=1;j<=i-1;j++){printf("* ");	}

		printf("\n");
	}
	printf("\n");
} 
///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |   Hinh tam giac nhung co so                                           | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////
// ===> Tam giac phai tren nhung ma la so <===
void TamGiacPhaiTrenSo(int n){
	int i,j;
	printf("===> Tam Giac Phai Tren Nhung Co So:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%2d ",j);
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac phai duoi nhung ma la so <===
void TamGiacPhaiDuoiSo(int n){
	int i,j;
	printf("===> Tam Giac Phai Duoi Nhung Co So:\n\n");
	for(i=n;i>0;i--){
		for(j=i;j>0;j--){
			printf("%2d ", j);
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac trai duoi nhung ma la so <===
void TamGiacTraiDuoiSo(int n){
	int i,j, number;
	printf("===> Tam Giac Trai Duoi Nhung Co So:\n\n");
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
// ===> Tam giac trai tren nhung ma la so <===
void TamGiacTraiTrenSo(int n){
	int i,j;
	printf("===> Tam Giac Trai Tren Nhung Co So:\n\n");
	for(i=1;i<=n;i++){
		for(j=n;j>0;j--){
			if(j<=i) printf("%2d ", j);
			else printf("%3s", "  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac can nguoc nhung ma la so <===
void TamGiacCanNguocSo(int n){
	int i,j;
	printf("===> Tam Giac Can Nguoc Nhung Co So:\n\n");
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
// ===> Tam giac can xuoi nhung ma la so <===
void TamGiacCanXuoiSo(int n){
	int i,j;
	printf("===> Tam Giac Can Xuoi Nhung Co So:\n\n");
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
// ===> Khuyet tam giac xuoi nhung ma la so <===
void KhuyetTamGiacXuoiSo(int n){
	int i,j;
	printf("===> Khuyet Tam Giac Xuoi Nhung Co So:\n\n");
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
// ===> Khuyet tam giac nguoc nhung ma la so <===
void KhuyetTamGiacNguocSo(int n){
	int i,j;
	printf("===> Khuyen Tam Giac Nguoc Nhung Co So:\n\n");
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
// ===> Hinh tam giac can nguoc nhung ma la lam <===
void TamGiacCanNguocSo2(int n){
	int i,j,number;
	printf("===> Tam Giac Can Nguoc Co So Nhung Ma La Lam:\n\n");
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
// ********* Pascal Triangle ********** //
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
// ************************************ //

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

main(){
	int n;
	printf("Input N: "); scanf("%d", &n);
	// ********** Tam giac dac ********** //
	printf("\n+--------------------------------+\n");
	printf("|          TAM GIAC DAC          |\n");
	printf("+--------------------------------+\n");
	TamGiacPhaiTrenDac(n);                   // hinh (a)
	TamGiacPhaiDuoiDac(n);                   // hinh (b)
	TamGiacTraiDuoiDac(n);                   // hinh (c)
	TamGiacTraiTrenDac(n);                   // hinh (d)
	// ********** Tam giac rong ********** //
	printf("\n+--------------------------------+\n");
	printf("|     TAM GIAC VUONG CAN RONG    |\n");
	printf("+--------------------------------+\n");
	TamGiacVuongCanRongPhaiTren(n);
	TamGiacVuongCanRongPhaiDuoi(n);
	TamGiacVuongCanRongTraiDuoi(n);
	TamGiacVuongCanRongTraiTren(n);
	// ********** Hinh vuong ********** //
	printf("\n+--------------------------------+\n");
	printf("|           HINH VUONG           |\n");
	printf("+--------------------------------+\n");
	HinhVuongRong(n);                        // hinh (e) 
	HinhZNguoc(n);                           // hinh (f)
	HinhZXuoi(n);                            // hinh (g)
	HinhDongHoCat(n);                        // hinh (h)
	HinhVuongRongCoHaiDuongCheo(n);          // hinh (i)
	// ********** Hinh thoi ********** //
	printf("\n+--------------------------------+\n");
	printf("|           HINH THOI            |\n");
	printf("+--------------------------------+\n");
	TamGiacCanXuoiDac(n);                    // hinh (j)
	TamGiacCanNguocDac(n);                   // hinh (k)
	HinhThoiDac(n);                          // hinh (l)
	// ********** Hinh tam dac nhung co so ********** //
	printf("\n+--------------------------------+\n");
	printf("|        CUNG LA VE HINH         |\n");
	printf("|          NHUNG CO SO           |\n");
	printf("+--------------------------------+\n");
	TamGiacPhaiTrenSo(n);                    // hinh (m)
	TamGiacPhaiDuoiSo(n);					 // hinh (p)
	TamGiacTraiTrenSo(n);					 // hinh (o)
	TamGiacTraiDuoiSo(n);                    // hinh (n)
	TamGiacCanNguocSo(n);					 // hinh (q)
	TamGiacCanXuoiSo(n);					 // hinh (r)
	KhuyetTamGiacXuoiSo(n);					 // hinh (s)
	KhuyetTamGiacNguocSo(n);				 // hinh (t)
	TamGiacCanNguocSo2(n);                   // hinh (u)
	PowerOf2Triangles(n);					 // hinh (a)
	PascalTriangle1(n);						 // hinh (b)
	PascalTriangle2(n);						 // hinh (c)
	FibonacciTriangle(n);
	FloydTriangle(n);
	
}
