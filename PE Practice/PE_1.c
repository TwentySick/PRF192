#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*Q1:
Users are required to enter two integer numbers: 'w', 'h' using the keyboard (STDIN).
Here, 'w' is width and 'h' is height of a rectangle
Please prints out perimeter and area of the rectangle.

===> Example:
20
15

OUTPUT
70
300
*/

void Q1(){
	int w, h;
	scanf("%d", &w);
	scanf("%d", &h);
	printf("\n\nOUTPUT:\n%d\n%d", 2*(w+h), w*h);
}

/*Q2:
Users are required to enter a real number array containing the price of the 5 books of a store.
The program calculates total price of 5 books. If the book price is greater than or equal to 10 dollars, 
it is reduced by 5%. In addition, it must not be reduced.
Print results to the screen with one decimal place.

===> Example:
5.5
6.0
10.8
15.5
20.0

OUTPUT:
55.5
*/

void Q2(){
	float n, i, sum =0;
	for(i=0;i<5;i++){
		scanf("%f", &n);
		if(n>10) n = n - 0.05*n;
		sum = sum + n;
	}
	printf("\n\nOUTPUT:\n%.1f", sum);
}

/*Q3:
Your program allows users to enter an integer array of 'n' elements entered from the keyboard.
The system sorts the entered numbers in ascending order.
The system then displays numbers to screen. There is a newline character between any two adjacent
numbers.

===> Example:
5
3 10 7 6 5

OUTPUT:
3
5
6
7
10
*/

void swap(int *x, int *y){
	int temp = *x;
		*x = *y;
		*y = temp;
}

void Q3(){
	int n, a[100], temp, i, j;
	scanf("%d", &n);
	for(i= 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i<n-1; i++){
		for(j = i; j<n; j++){
			if(a[i] > a[j]) swap(&a[i], &a[j]);
		}
	}
	printf("\n\nOUTPUT:\n");
	for(i=0; i<n; i++){
		printf("%d\n", a[i]);
	}
}

/*Q4:
Users are required to enter an integer number to define "rows" of half Pyramid pattern(rows > 0)
Program prints out the half Pyramid of number

===> Example:
6

OUTPUT:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/

void Q4(){
	int i, j, n;
	scanf("%d", &n);
	printf("\n\nOUTPUT:\n");
	for(i = 1; i<=n; i++){
		for(j = 1; j<=i; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
}

/*Q5:
Your program allows users to enter an array of 'n' integers, where 'n' is entered by the user.
The program prints the numbers that are prime to screen. Otherwise, if none of the numbers are prime,
print: "no primes in the array"

===> Example 1:
5
-9 10 1 3 7

OUTPUT:
3 7

===> Example 2:
5
6 -3 0 15 4

OUTPUT:
no primes in the array
*/

int isPrime(int n){
	int i, count = 0;
	if(n <= 1) return 0;
	for(i = 2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void Q5(){
	int i, n, count = 0, a[100];
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n\nOUTPUT:\n");
	for(i = 0; i < n; i++){
		if(isPrime(a[i])){
			printf("%d ", a[i]);
			count++;
		}
	}
	if(count == 0) printf("no primes in the array");
}

/*Q6:
Your program allows users to enter a strings:'s' with maximum length of 100 characters. The system
finds characters in a string whose index is even and converts them to uppercase.
Finally, the system prints out 's' string to the screen.

===> Example:
c console application

OUTPUT:
C CoNsOlE ApPlIcAtIoN
*/

void Q6(){
	char s[100];
	int i;
	gets(s);
	printf("\n\nOUTPUT:\n");
	for(i = 0; i< strlen(s); i++){
		if(i % 2 == 0) printf("%c", toupper(s[i]));
		else printf("%c", s[i]);
	}
}

/*Q7:
Your program allows the user to enter a string:'s' with a maximum length of 100 characters.
The system converts the first letter of each word to uppercase
Finally, the system prints the string 's' to the screen

===> Example:
hello everyone, how are you?

OUTPUT:
Hello Everyone, How Are You?
*/

void Q7(){
	char s[100];
	int i;
	gets(s);
	printf("\n\nOUTPUT:\n");
	printf("%c", toupper(s[0]));
	for(i = 1; i< strlen(s); i++){
		if((int)s[i-1] == 32) printf("%c", toupper(s[i]));
		else printf("%c", s[i]);
	}
}

/*Q8:
Your program allows users to enter array of 'n' integer, where 'n' is entered by the user(n < 10).
The program prints the squared of each entered even number following the order that they were
entered.
There is a newline character '\n' between any two printed numbers.

===> Example:
5
3 5 4 2 7

OUTPUT:
16
4
*/

void Q8(){
	int n, i, a[10];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n\nOUTPUT:\n");
	for(i=0; i<n; i++){
		if(a[i] % 2 == 0) printf("%d\n", a[i]*a[i]);
	}
}

/*Q9:
Your program allows users to enter an integer number 'n' (10<n<100), then it should display 4 prime
number whose values are less than 'n' starting from the number that is closest to n. There is a newline
character '\n' between any two adjcent numbers.

===> Example:
20

OUTPUT:
19
17
13
11
*/

void Q9(){
	int i, n, count = 0;
	printf(" 10 < n < 100\nInput N: ");
	do{
		scanf("%d", &n);
	} while (n <= 10 || n >=100);
	i = n - 1;
	printf("\n\nOUTPUT:\n");
	while(count != 4){
		if(isPrime(i)){
			printf("%d\n", i);
			count++;
		}
		i--;
	}
}

/*Q10:
Your program allows users to enter a binary number 'n', where 'n' has maximum length 2 bytes.
The program prints the octal value of 'n'

===> Example:
101001111

OUTPUT:
517
*/

void Q10(){
	int n, i=0, sum = 0;
	scanf("%d", &n);
	printf("\n\nOUTPUT:\n");
	while(n>0){
		sum = sum + pow(2, i)*(n%10);
		i++;
		n = n / 10;
	}
	printf("%o", sum);
}
main(){
	Q1();
	Q2();
	Q3();
	Q4();
	Q5();
	Q6();
	Q7();
	Q8();
	Q9();
	Q10();
}
