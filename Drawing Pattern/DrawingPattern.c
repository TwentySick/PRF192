///////////////////////////////////////////////////////////////////////////////
// +-----------------------------------------------------------------------+ //
// |                                READ ME                                | //
// +-----------------------------------------------------------------------+ //
// | File nay gom co:                                                      | //
// | - Tam giac dac phai tren, phai duoi, trai tren, trai duoi             | //
// | - Tam giac vuong can rong phai tren, phai duoi, trai tren, trai duoi  | //
// | - Hinh vuong                                                          | //
// | - Hinh thoi                                                           | //
// +-----------------------------------------------------------------------+ //
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
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
		for(j=1;j<=i;j++){
			if(j>=n-i+1||i==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Tam giac nguoc dac <===
void TamGiacCanNguocDac(int n){
	int i,j;
	printf("===> Tam Giac Can Nguoc Dac:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j>=n-i+1||i==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}
// ===> Hinh thoi dac <===
void HinhThoiDac(int n){
	int i,j, input;
	printf("===> Hinh Thoi Dac:\n\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j>=n-i+1||i==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	input = n%2==0?n:n-1; // Neu n chan thi tra ve gia tri n, neu n le thi tra ve gia tri n-1
	for(i=input;i>0;i--){
		for(j=1;j<=i;j++){
			if(j>=n-i+1||i==n) printf("* ");
			else printf("  ");
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
}
