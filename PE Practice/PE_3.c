#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*Q1: ....
*/

void Q1(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\nOUTPUT\n");
	if(a<b) printf("a<b");
	else printf("a>=b");
}

/*Q2:
Users are required to enter a non-negative integer variables n using the keyboard(STDIN).
The system displays the sum of the last three even numbers in range from 0 to n.

===> Example:
6

OUTPUT:
12
*/

void Q2(){
	int n, i, sum = 0, count = 0;
	scanf("%d", &n);
	for(i = n; i>=0; i--){
		if(i%2 == 0){
			sum = sum + i;
			count++;
		}
		if(count == 3) break;
	}
	printf("\nOUTPUT\n");
	printf("%d", sum);
}

/*Q3:
Your program allows users to enter 4 characters.
The system displays the entered characters foloowing alphabetical order. There is a space character in
between any two adjacent characters. 

===> Example:
a
h
b
g

OUTPUT:
a b g h
*/

void Q3(){
	int k, i, j, a[5];
	char s[1];
	for(i = 1; i<=4; i++){
		scanf("%s", &s);
		a[i] = (int)s[0];
	}
	for(i = 1; i<4; i++){
		for(j = i+1; j<5; j++){
			if(a[i] > a[j]){
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	printf("\nOUTPUT:\n");
	for(i = 1; i<=4; i++){
		printf("%c ", (char)a[i]);
	}
}

/*Q4:
Your program allows users to enter 7 integer numbers into an array.
The system performs selection sorting of the array in ascending order then prints the sorted array.
There is a space character between any two adjacent numbers.

===> Example:
1
3
2
6
4
8
10

OUTPUT:
1 2 3 4 6 8 10
*/

void Q4(){
	int a[7], i,j;
	for(i = 0; i<7; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i<6; i++){
		for(j = i + 1; j<7; j++){
			if(a[i] > a[j]){
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	printf("\nOUTPUT:\n");
	for(i = 0; i<7; i++){
		printf("%d ", a[i]);
	}
}

/*Q5:
Your program allows users to enter array of n integers, where n is entered by the user (n < 20)
- If the array is symmetric, the program displays: 1
- Otherwise the program displays: 0

===> Example 1:
5
2
2
3
2
2

OUTPUT:
1

===> Example 2:
5
2
2
3
4
2

OUTPUT:
0
*/

void Q5(){
	int n, i, j, a[100], count = 0;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0, j = n-1; i<n/2; i++, j--){
		if(a[i] != a[j]) count--;
	}
	printf("\nOUTPUT:\n");
	if(count < 0) printf("0");
	else printf("1");
}

/*Q6: Stupid Solution
Your program allows users to enter 5 person names into an array strings. The program performs
sorting of the array in ascending order then prints each element of the array followed by a space
character.

===> Example:
John
Joe
Due
Long
Ming

OUTPUT:
Due Joe John Long Ming
*/
void Q6(){
	char s[6][100], temp[100];
	int i, j;
	for(i = 1; i<=5; i++){
		scanf("%s", &s[i]);
	}
  	//Sort array using the Buuble Sort algorithm
  	for(i=0; i<5; i++){
    	for(j=i+1; j<6; j++){
      		if(strcmp(s[i], s[j]) > 0){
        	//swap array[j] and array[j+1]
        		strcpy(temp, s[i]);
        		strcpy(s[i], s[j]);
        		strcpy(s[j], temp);
      		}
    	}
  	}
  	printf("\nOUTPUT:\n");
	for(i = 1; i <= 5; i++){
		printf("%s ", s[i]);
	}
	
}

/*Q7:
Your program allows users to enter a string with an odd number of charracters (5<n<20). 
The program them displays the middle 5 characters of the string.

===> Example:
1hello7

OUTPUT:
hello
*/

void Q7(){
	char s[20];
	int mid, right, left, i;
	gets(s);
	mid = strlen(s) / 2;
	right = mid + 2;
	left = mid - 2;
	printf("\nOUTPUT:\n");
	for(i = left; i<= right; i++){
		printf("%c", s[i]);
	}
}

main(){
	Q1();
	Q2();
	Q3();
	Q4();
	Q5();
	Q6();
	Q7();
}
