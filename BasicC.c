// Hello World
//#include <stdio.h>
//
//main(){
//	printf("Hello World");
//}

//**********************************************************************************************************************//
//bt1a. Nhap vao 2 so va tinh tong cua chung
//#include <stdio.h>
//
//main(){
//	int a, b, sum = 0;
//	
//	printf("Input A: "); scanf("%d", &a);
//	printf("Input B: "); scanf("%d", &b);
//	
//	sum = a + b;
//	
//	printf("Sum: %d", sum);
//}

//**********************************************************************************************************************//
//bt1b. Nhap vao ban kinh hinh tron. Tinh chu vi va dien tich cua no
//#include <stdio.h>
//
//#define PI 3.1416
//
//main(){
//	float R, C, S;
//
//	printf("Input R: "); scanf("%f", &R);
//	
//	C = 2 * R * PI;
//	S = R * R * PI;
//	
//	printf("Chu vi hinh tron (C): %f\n", C);
//	printf("Dien tich hinh tron (S): %f\n", S);
//}

//**********************************************************************************************************************//
//bt1c. (mo rong 2): Nhap vao 5 so kieu float, tinh gia tri tong, tich, trung binh cong, trung binh nhan cua chung
//#include <stdio.h>
//#include <math.h>
//
//main(){
//	float a, b, c, d, e;// Khai bao
//	float tong, tich, tbc, tbn;

//	printf("Input A: "); scanf("%f", &a); 
//	printf("Input B: "); scanf("%f", &b);
//	printf("Input C: "); scanf("%f", &c);
//	printf("Input D: "); scanf("%f", &d);
//	printf("Input E: "); scanf("%f", &e);

//	tong = a + b + c + d + e; //Cac cong thuc
//	tich = a * b * c * d * e;
//	tbc = tong / 5;
//	tbn = pow(tich, 1/5);

//	printf("Tong: %f\n", tong); //In ra ket qua
//	printf("Tich: %f\n", tich);
//	printf("Trung binh cong: %f\n", tbc);
//	printf("Trung binh nhan: %f\n", tbn);
//}

//**********************************************************************************************************************//
//bt2. Nhap vao 2 so, in ra su so sanh cua 2 so do
//#include <stdio.h>
//
//main(){
//	int a, b;
//	
//	printf("Input A, B: "); scanf("%d%d", &a, &b);
//	
//	if (a > b){
//		printf("A > B");
//	} else if (a < b){
//		printf("A < B");
//	} else {
//		printf("A = B");
//	}
//}

//**********************************************************************************************************************//
//bt3. Nhap vao 3 so a, b, c, in ra gia tri min, max cua chung
//#include <stdio.h>
//
//main(){
//	float a, b, c, min, max, tb;
//	printf("Input A: "); scanf("%f", &a);
//	printf("Input B: "); scanf("%f", &b);
//	printf("Input C: "); scanf("%f", &c);
//
//	if (a>=b && a>=c) printf("Max: %0.2f", a);
//	else if (b>=c) printf("Max: %0.2f", b);
//	else printf("Max: %0.2f", c);
//}

//**********************************************************************************************************************//
//bt4a. Nhap vao 3 so a, b, c, in ra gia tri min, max cua chung
//#include <stdio.h>
//
//main(){
//	float a, b, c, d;
//	float min, max;
//	printf("Input A: "); scanf("%f", &a);
//	printf("Input B: "); scanf("%f", &b);
//	printf("Input C: "); scanf("%f", &c);
//	printf("Input D: "); scanf("%f", &d);
//		
//	if (a<=b && a<=c && a<=d) printf("Min: %0.2f\n", a);
//	else if (b<=c && b<=d) printf("Min: %0.2f\n", b);
//	else if (c<=d) printf("Min: %0.2f\n", c);
//	else printf("Min: %0.2f\n", d);
//	
//	if (a>=b && a>=c && a>=d) printf("Max: %0.2f\n", a);
//	else if (b>=c && b>=d) printf("Max: %0.2f\n", b);
//	else if (c>=d) printf("Max: %0.2f\n", c);
//	else printf("Max: %0.2f\n", d);
//}

//**********************************************************************************************************************//
//bt4b. Nhap vao n so, in ra gia tri min, max cua chung
//#include <stdio.h>
//#include <math.h>
//
//main(){
//	int n, i, num;
//	int min, max = 0;
//	
//	printf("Nhap N: "); scanf("%d", &n);
//	printf("Nhap phan tu 1: "); scanf("%d", &min);
//	if(max < min) max = min;
//	
//	for(i = 0; i<n-1; i++){
//		printf("Nhap phan tu %d: ", i+2); scanf("%d", &num);
//		if(min > num) min = num;
//		else if(max < num) max = num;
//	}
//		
//	printf("Min: %d\n", min);
//	printf("Max: %d\n", max);	
//}

//**********************************************************************************************************************//
//bt4c. Nhap vao n so, in ra gia tri min, max, tbc, tbn cua chung
//#include <stdio.h>
//#include <math.h>
//
//main(){
//	float n, i, num;
//	float min, max = 0;
//	float tbc, tbn, tong, tich;
//	
//	printf("Nhap N: "); scanf("%f", &n);
//	
//	printf("Nhap phan tu 1: "); scanf("%f", &min);
//	
//	tong = min;
//	tich = min;
//	
//	for(i = 0; i<n-1; i++){
//		printf("Nhap phan tu %.0f: ", i+2); scanf("%f", &num);
//		if(min > num) min = num;
//		else if(max < num) max = num;
//		
//		tong = tong + num;
//		tich = tich * num;
//	}
//	
//	tbc = tong / n;
//	tbn = pow(tich, 1/n);
//		
//	printf("Min: %.2f\n", min);
//	printf("Max: %.2f\n", max);
//	printf("TBC: %.2f\n", tbc);
//	printf("TBN: %.2f\n", tbn);
//}

//**********************************************************************************************************************//
//bt5b. Nhap 3 so a,b,c, Xet dieu kien tam giac, 
// Neu a, b, c dat dieu kien thi tinh chu vi va dien tic _ok
// Neu khong dat thi in ra rang khong dat dieu kien
//#include <stdio.h>
//#include <math.h>
//main(){
//	float a, b, c, S, P, S1;
//	printf("Nhap A, B, C: "); scanf("%f%f%f", &a, &b, &c);
//	if(a+b <=c || b+c <= a || a+c <=b || a <= 0 || b<= 0 || c <=0){
//		printf("Khong dat dieu kien la tam giac");
//	} else {
//		P = a + b + c;
//		S1 = P / 2;
//		S = sqrt(S1*(S1-a)*(S1-b)*(S1-c));
//		printf("Chu vi Tam giac: %.2f\nDien tich Tam giac: %.2f", P, S);
//	}
//}

//**********************************************************************************************************************//
// bt8. Nhap vao so giay, in ra so nam, thang, ngay, gio, phut, giay
// **** Cach 1 ****
//#include <stdio.h>
//main(){
//	int n;
//	int nam, thang, ngay, gio, phut, giay;
//	printf("Nhap so giay: "); scanf("%d", &n);
//	printf("%d giay = ", n);
//	giay = n % 60; n = n /60;
//	phut = n % 60 ; n = n /60;
//	gio = n % 24; n = n /24;
//	ngay  = n % 30; n = n / 30;
//	thang = n % 12;
//	nam = n / 12;
//	if(nam != 0)   printf("%d nam ", nam);	
//	if(thang != 0) printf("%d thang ", thang);
//	if(ngay != 0)  printf("%d ngay ", ngay);
//	if(gio != 0)   printf("%d gio ", gio);
//	if(phut != 0)  printf("%d phut ", phut);
//	if(giay != 0)  printf("%d giay ", giay);
//}
// **** Cach 2 ****
//#include <stdio.h>
//main(){
//	int n;
//	printf("Nhap so giay: "); scanf("%d", &n);
//	printf("%d giay = ", n);
//	if(n/(3600*24*365) != 0)   printf("%d nam ", n/(3600*24*365));
//	n = n % (3600 *24*365);
//		
//	if(n/(3600*24*30) != 0) printf("%d thang ", n/(3600*24*30));
//	n = n%(3600*24*30);
//	
//	if(n /(3600*24) != 0)  printf("%d ngay ", n/(3600*24));
//	n = n%(3600*24);
//	
//	if(n / 3600 != 0)   printf("%d gio ", n/3600);
//	n = n % 3600;
//	
//	if(n/60 != 0)  printf("%d phut ", n/60);
//	n = n % 60;
//	
//	if(n != 0)  printf("%d giay ", n);
//}

//**********************************************************************************************************************//
// Nhap n, in ra cac so tu 1 den n (ke ca n) chia het cho 2 nhung khong chia het cho 3 va tong cua chung
//#include <stdio.h>
//
//main(){
//	int n, i, sum = 0; //khai bao
//	printf("Input N: "); scanf("%d", &n);
//	for(i = 1; i <=n ; i++){ //thuat toan
//		if(i % 2 == 0 && i % 3 != 0){
//			printf("%d ", i);
//			sum = sum + i;
//		}
//	}
//	printf("\nTong: %d", sum);
//}

//**********************************************************************************************************************//
// Nhap n, tinh tong cac chu so cua n
//#include <stdio.h>
//
//main(){
//	int n, sum = 0;
//	printf("Input N: "); scanf("%d", &n);
//	while(n != 0){
//		sum = sum + n % 10;
//		n = n /10;
//	}
//	printf("Sum: %d", sum);
//}

//**********************************************************************************************************************//
// Nhap n, in ra n so nguyen to dau tien
//#include <stdio.h>
//int checkPrime(int n){ 							//Ham kiem tra dieu kien snt
//	int i, count = 0;
//	if(n <= 1) return 0;
//	else {
//		for(i = 2; i*i <= n; i++){
//			if(n % i == 0) return 0;;
//		} 
//	}
//	return 1;
//}
//main(){
//	int n, i, count = 0;
//	printf("Nhap N: "); scanf("%d", &n); 		//Khai bao
//	printf("%d so nguyen to dau tien:\n", n);   // In ra 
//	while(count < n){ 							//Thuat toan
//		if(checkPrime(i) == 1){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
// Nhap n, in ra n so fibonacci dau tien
//#include <stdio.h>
//int checkFibonacci(int n){
////	int first_number = 0, second_number = 1, next_number;
//	int a = 0, b = 1, c = 0;
//	if(n == 0 || n == 1) return 1;
//	while(c <= n){ 
//		if(b == n) return 1;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}
//
//main(){
//	int n, i, count = 0;
//	printf("Nhap N: "); scanf("%d", &n); 		//Khai bao
//	printf("%d so fibonacci dau tien:\n", n);   // In ra 
//	while(count < n){ 							//Thuat toan
//		if(checkFibonacci(i) == 1){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
// Nhap n, in ra n so palindrome dau tien
//#include <stdio.h>
//int checkPalindrome(int n){
//	int reverse = 0, original, reminder;
//	original = n;
//	while(n > 0){
//		reverse = reverse * 10 + n % 10;
//		n = n / 10;
//	}
//	if(reverse == original) return 1;
//	return 0;
//}
//
//main(){
//	int n, i, count = 0;
//	printf("Nhap N: "); scanf("%d", &n); 		//Khai bao
//	printf("%d so palindrome dau tien:\n", n);  // In ra 
//	while(count < n){ 							//Thuat toan
//		if(checkPalindrome(i) == 1){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
// Nhap n, in ra n so armstrong dau tien
//#include <stdio.h>
//#include <math.h>
//int countDigit(int n){							// count digit (Dem cac chu so co trong so do de tinh so mu)
//	int count = 0;
//	while(n > 0){
//		n = n / 10;
//		count++;
//	}
//	return count;
//}
//int checkArmstrong(int n){						// check Armstrong Number
//	int original, sum = 0, digit;
//	original = n;
//	digit = countDigit(n);						// So mu
//	while(n > 0){
//		sum += pow(n % 10, digit);
//		n = n / 10;
//	}
//	if(sum == original) return 1;
//	return 0;
//}
//main(){
//	int n, i, count = 0;
//	printf("Nhap N: "); scanf("%d", &n); 		//Khai bao
//	printf("%d so armstrong dau tien:\n", n);   // In ra 
//	while(count < n){ 							//Thuat toan
//		if(checkArmstrong(i) == 1){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
//In ra cac so nguyen to nho hon n va co tong cac chu so chia het cho 5
//#include <stdio.h>
//int checkPrime(int n){ 							//Ham kiem tra dieu kien snt
//	int i, count = 0;
//	if(n <= 1) return 0;
//	else {
//		for(i = 2; i*i <= n; i++){
//			if(n % i == 0) return 0;;
//		} 
//	}
//	return 1;
//}
//int checkSum(int n){							//Ham check dieu kien tong cac chu so chia het cho 5
//	int sum = 0;
//	while(n != 0){
//		sum = sum + n % 10;
//		n = n /10;
//	}
//	if(sum % 5 == 0) return 1;
//	return 0;
//}
//main(){
//	int n, i;
//	printf("Input N: "); scanf("%d", &n);
//	for( i = 1; i <= n; i++){
//		if (checkPrime(i) && checkSum(i)) printf("%d ", i);
//	}
//}

//**********************************************************************************************************************//
//In ra 2 so nguyen to nho hon n va 3 so nguyen to lon hon n
//#include <stdio.h>
//int checkPrime(int n){ 							//Ham kiem tra dieu kien snt
//	int i, count = 0;
//	if(n <= 1) return 0;
//	else {
//		for(i = 2; i*i <= n; i++){
//			if(n % i == 0) return 0;;
//		} 
//	}
//	return 1;
//}
//main(){
//	int n, i, count_1 = 0, count_2 = 0;
//	printf("Input N: "); scanf("%d", &n);
//	printf("2 so nguyen to nho hon %d: ", n);
//	i = n - 1;
//	while(count_1 < 2){
//		if(checkPrime(i) == 1){
//			printf("%d ", i);
//			count_1++;
//		}
//		i--;
//		if(i == 0) break;
//	}
//	printf("\n3 so nguyen to lon hon %d: ", n);
//	i = n + 1;
//	while(count_2 < 3){
//		if(checkPrime(i) == 1){
//			printf("%d ", i);
//			count_2++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
// Nhap n, p, q, in ra p snt nho hon n va q snt lon hon n
//#include <stdio.h>
//int checkPrime(int n){ 							//Ham kiem tra dieu kien snt
//	int i, count = 0;
//	if(n <= 1) return 0;
//	else {
//		for(i = 2; i*i <= n; i++){
//			if(n % i == 0) return 0;;
//		} 
//	}
//	return 1;
//}
//main(){
//	int n, p, q, i, count_1 = 0, count_2 = 0;
//	printf("Nhap N: "); scanf("%d", &n);
//	printf("Nhap P: "); scanf("%d", &p);
//	printf("Nhap Q: "); scanf("%d", &q);
//	printf("%d so nguyen to nho hon %d: ", p, n);
//	i = n - 1;
//	while(count_1 < p){
//		if(checkPrime(i) == 1){
//			printf("%d ", i);
//			count_1++;
//		}
//		i--;
//		if(i == 0) break;
//	}
//	printf("\n%d so nguyen to lon hon %d: ", q, n);
//	i = n + 1;
//	while(count_2 < q){
//		if(checkPrime(i) == 1){
//			printf("%d ", i);
//			count_2++;
//		}
//		i++;
//	}
//}

//**********************************************************************************************************************//
//Nhap vao so tien (nghin dong), in ra so to tien co cac menh gia thuc te (500k, 200k, 100k, 50k, 20k, 10k, 5k, 2k, 1k) voi so luong to tien it nhat
//#include <stdio.h>
//#include <math.h>
//main(){
//	int n, i, so_to;
//	float menh_gia_tien = 500;
//	printf("Nhap so tien: "); scanf("%d", &n);
//	for(i = 0; i < 9; i++){
//		int menh_gia = (int)menh_gia_tien; //Ep kieu in de chia lay phan du
//		so_to = n / menh_gia;
//		if(so_to != 0) printf("So tu cua %d la %d\n", menh_gia, so_to);
//		n = n % menh_gia;
//		if(i % 3 == 0)	 	menh_gia_tien = menh_gia_tien / 2.5; //QL cac menh gia 500, 200, 50, 20, 5, 2
//		else 				menh_gia_tien = menh_gia_tien /2; //QL cac menh gia 200, 100, 20, 10, 2, 1
//	}
//}

//**********************************************************************************************************************//
// Uoc so chung lon nhat cua a va b
// **** Cach 1.a ****
//#include <stdio.h>
//main(){
//	int a, b, i, so_be;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	if( a < b) so_be = a; // so_be = a<b?a:b; viet tat cua if else
//	else so_be = b;
//	for(i = so_be; i > 0; i--){
//		if(a % i == 0 && b % i == 0){
//			printf("UCLN: %d", i);
//			break;
//		}
//	}
//}
// **** Cach 1.b: Viet tat ****
//	//Cach 1,b: Viet tat
//#include <stdio.h>
//main(){
//	int a, b, i;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	for(i = a<b?a:b; i > 0; i--){
//		if(a % i == 0 && b % i == 0){
//			printf("UCLN: %d", i);
//			break;
//		}
//	}
//}
// **** Cach 2 ****
//#include <stdio.h>
//main(){
//	int a, b, i;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	while( a!= b){
//		if (a > b) a = a - b;
//		else b = b - a;
//	}
//	printf("UCLN: %d", a);
//}
// **** Cach 3: Thuat toan chia lay phan du ****
//#include <stdio.h>
//main(){
//	int a, b, i, so_be;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	while(a*b!=0){
//		if (a > b) a = a % b;
//		else b = b % a;
//	}
//	so_be = a==0?b:a; //Viet tat cua if(a == 0) so_be = a; else so_be = a;
//	printf("UCLN: %d", so_be);
//}

//**********************************************************************************************************************//
//Tim boi so chung nho nhat cua a va b
// **** Cach 1.a ****
//#include <stdio.h>
//main(){
//	int a, b, i, so_lon, ucln, org_a, org_b;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	if( a > b) so_lon = a; // so_lon = a>b?a:b; viet tat cua if else
//	else so_lon = b;
//	for(i = so_lon; i <= a*b; i++){
//		if(i % a == 0 && i % b == 0){
//			printf("BCNN: %d", i);
//			break;
//		}
//	}
// **** Cach 1.b: Viet tat ***
//#include <stdio.h>
//main(){
//	int a, b, i;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	for(i = a>b?a:b; i <= a*b; i++){
//		if(i % a == 0 && i % b == 0){
//			printf("BCNN: %d", i);
//			break;
//		}
//	}
//}
// **** Cach 2: BCNN(a, b) = a * b / UCLN(a, b) ****
//#include <stdio.h>
//main(){
//	int a, b, ucln, original_a, original_b;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	original_a = a; 
//	original_b = b;
//	while(a*b!=0){
//		if (a > b) a = a % b;
//		else b = b % a;
//	}
//	ucln = a==0?b:a;
//	
//	printf("BCNN: %d", (original_a * original_b)/ucln);
//}
// **** Cach 3.a: Dung vong lap for va tong ****
//#include <stdio.h>
//main(){
//	int a, b, boi_so, step;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	boi_so = a > b? a : b;
//	step = boi_so;
//	for(;;boi_so += step){
//		if(boi_so% a == 0 && boi_so%b == 0) break;
//	}
//}
// **** Cach 3.b: Dung vong lap while va tong
//#include <stdio.h>
//main(){
//	int a, b, boi_so, step;
//	printf("Nhap A: "); scanf("%d", &a);
//	printf("Nhap B: "); scanf("%d", &b);
//	boi_so = a > b? a : b;
//	step = boi_so;
//	while(boi_so % b != 0 || boi_so % a != 0) boi_so = boi_so + step;
//	printf("BCNN: %d", boi_so);
//}

