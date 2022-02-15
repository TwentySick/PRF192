#include <stdio.h>
#include <math.h>

// check Prime Number
int isPrime(int n){
	int i, count = 0;
	if(n <= 1) return 0;
	else {
		for(i = 2; i*i <= n; i++){
			if(n % i == 0) return 0;;
		} 
	}
	return 1;
}

// check Fibonacci Number
int isFibonacci(int n){
	int first_number = 0, second_number = 1, next_number = 0;
	if(n == 0 || n == 1) return 1;
	while(next_number <= n){
		if(second_number == n) return 1;
		next_number = first_number + second_number;
		first_number = second_number;
		second_number = next_number;
	}
	return 0;	
}

// check Palindrome Number
int isPalindrome(int n){
	int reverse = 0, original;
	original = n;
	while(n > 0){
		reverse = reverse * 10 + n % 10;
		n = n / 10;
	}
	if(original == reverse) return 1;
	return 0;
}

// count digit (Dem cac chu so co trong 1 so)
int countDigit(int n){
	int count = 0;
	while(n > 0){
		n = n / 10;
		count++;
	}
	return count;
}

// check Armstrong Number
int isArmstrong(int n){
	int original, sum = 0, digit;
	original = n;
	digit = countDigit(n);
	while(n > 0){
		sum += pow(n % 10, digit);
		n = n / 10;
	}
	if(sum == original) return 1;
	return 0;
}

main(){
//**********************************************************************************************************************//
//bt1: Nhap n, in ra n so Fibonacci, n so Palindrome, n so Armstrong
//	printf("Bai 1:\n");
//	int i = 0, n, count = 0;
//	printf("Nhap N: "); scanf("%d", &n);
//	printf("%d so Fibonacci dau tien: ", n);
//	while(count < n){
//		if(isFibonacci(i)){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	i = 0, count = 0;
//	printf("\n%d so Palindrome dau tien: ", n);
//	while(count < n){
//		if(isPalindrome(i)){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	i = 0; count = 0;
//	printf("\n%d so Armstrong dau tien: ", n);
//	while(count < n){
//		if(isArmstrong(i)){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//**********************************************************************************************************************//
//bt2: Nhap n, in ra n so vua la Fibo vua la SNT
//	printf("Bai 2:\n");
//	int i = 0, n, count = 0;
//	printf("Nhap N: "); scanf("%d", &n);
//	printf("%d so vua la so Fibonacci, vua la so Nguyen to: ", n);
//	while(count < n){
//		if(isFibonacci(i) && isPrime(i)){
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//**********************************************************************************************************************//
//bt3: Nhap p,q, in ra cac so Nguyen to, Fibonacci, Palindrome, Armstrong co trong khoang p,q va dem so luong so cua tung loai
	printf("Bai 3:\n");
	int i = 0, p, q, count_Prime = 0, count_Fibo = 0, count_Palind = 0, count_Arms = 0 ;
	printf("Nhap P: "); scanf("%d", &p);
	printf("Nhap Q: "); scanf("%d", &q);
	//Prime Number
	printf("\n- Cac so nguyen to trong khoang %d den %d la: ", p, q);
	for(i = p; i <= q; i++){
		if(isPrime(i)){
			printf("%d ", i);
			count_Prime++;
		}
	}
	//Fibonacci Number
	printf("\n- Cac so fibonacci trong khoang %d den %d la: ", p, q);
	for(i = p; i <= q; i++){
		if(isFibonacci(i)){
			printf("%d ", i);
			count_Fibo++;
		}
	}
	//Palindrome Number
	printf("\n- Cac so palindrome trong khoang %d den %d la: ", p, q);
	for(i = p; i <= q; i++){
		if(isPalindrome(i)){
			printf("%d ", i);
			count_Palind++;
		}
	}
	//Armstrong Number
	printf("\n- Cac so armstrong trong khoang %d den %d la: ", p, q);
	for(i = p; i <= q; i++){
		if(isArmstrong(i)){
			printf("%d ", i);
			count_Arms++;
		}
	}
	printf("\n\n==> Co %d so nguyen to, %d so fibonacci, %d so palindrome, %d so armstrong trong khoang %d den %d", count_Prime, count_Fibo, count_Palind, count_Arms, p, q);
//**********************************************************************************************************************//
}
