#include <stdio.h>
#define TAM 10

int main (){
	int arr[TAM];
	int greater=0;
	int less=0;
	int sum = 0;
	int even = 0, odd = 0;
		
	printf("Insert the elements to the array: ");
	for(int i = 0; i < TAM; i++) {
		scanf("%d", &arr[i]);
		sum+=arr[i];
		
		if(arr[i]%2==0) 
			even++;	
		else if(arr[i]%2!=0) 
			odd++;
	}	
	// Logic of the Major and the Minor Number
	for(int j = 0; j < TAM; j++) {
		if(arr[j] > greater)
			greater = arr[j];
			
		else if(arr[j] < less) 
			less = arr[j];
	}
	// Showing results
	printf("Greater: %d\n Less: %d\n Sum: %d\n Even: %d\n Odd\n",greater, less, sum, even, odd);
	
	// Reversing Logic of the output
	printf("The Reversed Array: ");
	for(int k = TAM; k>=0; k--) {
		printf(" %d ", arr[k]);
		}
		
		// OPTINS
		// Missing repetition Logic
		//Ordering of Array without functions
		//Calculate Average
		//Show up the greatest number based in the Average
		
		
	return (0);
}