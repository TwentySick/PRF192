#include <stdio.h>
#include <string.h>

/*Q1:
Users are required to enter two float variables a and b using the keyboard (STDIN).
Please check the following conditions.
-	If a is greater than b then print: float a >  b
-	If a is less than or equal to b then print: float a <= b

===> Example:
5
4

OUTPUT:
float a>b
*/

void Q1(){
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	if(a>b) printf("float a>b");
	else printf("float a<=b");
}

/*Q2:
Users are required to enter non-negative integer variables using the keyboard (STDIN).
The system displays the product of all even numbers that are greater than or equal to 2 and smaller than or equal to half of n.

===> Example:
9

OUTPUT:
8
*/

void Q2(){
	int n, i, multi = 1;
	scanf("%d", &n);
	for(i = 2; i<=n/2; i++){
		if(i % 2 == 0) multi = multi * i;
	}
	printf("%d", multi);	
}

/*Q3:
Your program allows users to enter 5 float numbers. 
The system displays the entered numbers in descending order.

===> Example:
9.4
8.2
6.3
7.2
5.1

OUTPUT:
9.400000 8.200000 7.200000 6.300000 5.100000
*/

void Q3(){
	float a[5];
	int i;
	for(i = 0; i < 5; i++) scanf("%f", &a[i]);
	for(i = 0; i < 5; i++) printf("%f ", a[i]);
}

/*Q4:
Your program allows users to enter an integer number n.
The system displays an inverted right triangle with the height = n.

===> Example:
5

OUTPUT:
*****
 ****
  ***
   **
    *
*/

void Q4(){
	int i, n,j ;
	scanf("%d", &n);
	for(i = n; i>0; i--){
		for(j = n; j>0; j--){
			if(j <= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

/*Q5:
Your program allows users to enter array of n integers, where n is entered by the user 
(n should be kept as a small value, in this case, n <= 10).
Your program should then print the sum of squared of each even integer.

===> Example:
5
1
2
4
1
3

OUTPUT:
20
*/

void Q5(){
	int n, i, a[100], sum = 0;
	scanf("%d", &n);
	for(i = 0; i<n; i++) scanf("%d", &a[i]);
	for(i = 0; i<n; i++){
		if(a[i] % 2 == 0) sum = sum + a[i]*a[i];
	}
	printf("%d", sum);
}

/*Q6:
Yours progarm allows users enter a long string 'o' and a short string 'p'.
The system finds the occurrences of 'p' in 'o' and replaces them by the reversed of 'p'.
It then prints out the modified string 'o'.

===> Example:
ccbadefgba
ba

OUTPUT:
ccabdefgab
*/

void Q6(){
	char input[100], check[100];
	char *found;
	int i, j = 0, count, k, i_check;
	gets(input);
	gets(check);

	for(i = 0; i<strlen(input); i++){
		k = strlen(check)-1;
		count = 0;
		i_check = i;
		for(j = 0; j<strlen(check); j++){
			if(input[i_check] == check[j]){
				count++;
			}
			i_check++;
		}
		if(count == strlen(check)){
			for(j = i; j<i_check; j++){
				input[j] = check[k];
				k--;
			}
		}
	}
	puts(input);
}

/*Q7:
Your program should allow users to find the two-digit number(s)
that appear(s) the most in the array of 7 integers.
Then your program should print out the found two-digit numbers.

===> Example 1:
1
3
4
7
12
12
12

OUTPUT:
12

===> Example 2:
1
3
5
7
9
1
2

OUTPUT:
no two-digit number

===> Example 3:
10
10
1
2
3
12
12

OUTPUT:
10 12
*/

void Q7(){
	int n= 7;
	int arr[7],i, j;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	//b1: Dem so xuat hien nhieu nhat la bao nhieu lan 
	int max = 0;
	for(i=0; i<n; i++){
		int count = 0;
		for(j=i; j<n; j++){
			if(arr[i] == arr[j] && arr[i]>=10 && arr[j]>=10 && arr[i]<=99 && arr[j]<=99)
				count++;
		}
		if(max < count){
			max = count;
		}
	}
	//b2: Tim xem so nao co so lan xuat hien bang voi max
	printf("\nOUTPUT:\n");
	if(max == 0) printf("There is no two-digit number");
	else{
		for(i=0; i<n; i++){
			int count1 = 0;
			for(j=i; j<n; j++){
				if(arr[i] == arr[j])
					count1++;
			}
			if(count1 == max && arr[i]>=10 && arr[i]<=99){
				printf("%d ", arr[i]);
			}
		}
	}
}

/*Q8: 
Your program should allow users to enter a character,
then it should display the location of that character
in the ASCII table and octal from ASCII table.

===> Example:
a

OUTPUT:
97 0141
*/

void Q8(){
	char input[1];
	int n;
	gets(input);
	n = input[0];
	printf("%d %04o", n, n);
}

/*Q9:
Your program should allow users to enter an integer numnber 'n',
then it should display the sum of all the digits forming 'n'.

===> Exaple:
12345

OUTPUT:
15
*/

void Q9(){
	int n, sum = 0;
	scanf("%d", &n);
	while(n>0){
		sum = sum + n%10;
		n = n / 10;
	}
	printf("%d", sum);
}

/*Q10:
Your program should allow users to enter an integer number 'n', then it should display as follows.
If 'n' is prime number, displays: Not Prime
If 'n' is not prime number, displays: Prime

===> Example 1:
7

OUTPUT:
Not Prime

===> Example 2:
12

OUTPUT:
Prime
*/

int isPrime(int n){
	int i;
	if(n<2) return 0;
	else{
		for(i = 2; i*i <=n; i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}

void Q10(){
	int n;
	scanf("%d", &n);
	if(isPrime(n) == 1) printf("Prime");
	else printf("Not Prime");
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
