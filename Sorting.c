#include <stdio.h>

const MAX = 100;

void swap(int *x, int *y){
	int temp = *x;
		*x = *y;
		*y = temp;
}

// Selection sort
void selectionSort(int a[], int n){
	int i, j, min, t;
	for(i = 0; i<n-1; i++){
		min = i;
		for(j = i+1; j<n; j++){
			if(a[i] > a[j]) min = j;
		}
		t = a[min];				//swap(&a[min], &a[i]);
		a[min] = a[i];
		a[i] = t;
	}
}

// Interchange sort
void interchangeSort(int a[], int n){
	int i, j, t;
	for(i = 0; i<n-1; i++){
		for(j = i+1; j<n; j++){
			if(a[i] > a[j]){	 //swap(&a[i], &a[j]);
			t = a[i];
			a[i] = a[j];
			a[j] = t;	
			}
		}
	}
}

// Insertion Sort
void insertionSort(int a[], int n){  
	int i, pos, x;
	for(i = 1; i<n; i++){
		x = a[i];
		pos = i -1;
		while((pos>=0)&&(a[pos]>x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}

// Bubble Sort
void bubbleSort(int a[], int n){
	int i, j, t;
	for(i = 0; i<n; i++){
		for(j = n-1; j>i; j--){
			if(a[j-1] > a[j]){  	//swap(&a[j], &a[j-1]);
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			} 
		}
	}
}

main(){
	int i, j, n, min, a[MAX];
	printf("Input N: "); scanf("%d", &n);
	for(i= 0; i<n; i++){
		printf("A[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Before sort:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
	// Sorting
//	selectionSort(a, n);
//	interchangeSort(a, n);
//	insertionSort(a, n);
//	bubbleSort(a, n);
	
	// Output
	printf("\nAfter sort:\n");
	for(i= 0; i<n; i++){
		printf("%d ", a[i]);
	}
}
