//Name : Ibrahim Talha ASAN
//Course:Programming for Engineers,Fall Semester,2020
//Purpose:The purpose of this problem is that there are 
//10 int numbers in the cards whose number is entered 
//(except the last card). Each card is sorted in ascending 
//order and to find its maximum value. Then, to rank these
// maximum values in an ascending order.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#define N 10									//Number of cards.

int main(int argc, char *argv[]) {
	
	int* array = (int*) malloc(N * sizeof(int));
	int* maxInt = (int*) malloc(N * sizeof(int));
	int i,k,j = 0,l = 0, temp;
	
	int rand();
    srand(time(0));
	printf("Cards");
	for (i = 0 ; i<(N-1)*10 ; i++) {
		array[i] = rand();						//array fill with random integer values 
		
	}
	for (i = (N-1)*10 ; i < N*10 ; i++){
		array[i] = -1;							//last card's integer values be "-1"
	}
	
	for (i = 0 ; i<(N-1)*10 ; i++) {			
		if (i%10 == 0)
			printf("\n%d . card \n\n", ++j);
		printf("%d = %d \n",i+1 , array[i] );
		
	}
	for (i = (N-1)*10 ; i < N*10 ; i++){
		if (i%10 == 0)
			printf("\n%d . card \n\n", ++j);
		printf("%d = %d \n",i+1 ,array[i] );
	}
	
	for(k=0; k<N-1 ; k++){						//sorting the array
		for(j= 0; j<10 ; j++){
			for (i=0;i<10 - 1;i++){
           		if (array[(k*10)+i]>array[(k*10)+i+1]){
               		temp=array[(k*10)+i];
               		array[(k*10)+i]=array[(k*10)+i+1];
               		array[(k*10)+i+1]=temp;
           		}
          	}
		}		
	}
	printf("Array after the sorting. \n");		//print sorted array
	for (i = 0 ; i<(N-1)*10 ; i++) {
		if (i%10 == 0)
			printf("\n%d . card \n\n", ++l);
		printf("%d = %d \n",i+1 , array[i] );
		
	}
	
	for (i = (N-1)*10 ; i < N*10 ; i++){		//print sorted array
		if (i%10 == 0)
			printf("\n%d . card \n\n", ++l);
		printf("%d = %d \n",i+1 ,array[i] );
	}
	
	printf("\nMax integers \n\n");
	
	for (i = 0 ; i< N ; i++){					//fill the maxInt with all card's max Values
		maxInt[i] = array[(i*10)+9];
	}
	
	for(j=0; j<N; j++)							//sorting the maxInt values
       {
           for (i=0;i<N-1;i++)
          {
           if (maxInt[i]>maxInt[i+1]){
               temp=maxInt[i];
               maxInt[i]=maxInt[i+1];
               maxInt[i+1]=temp;
           }
          }
       }
    
    for(i=0; i<N ; i++){						//print sorted maxInt array.
    	printf("%d \n ", maxInt[i]);
    	
	}
	
	return 0;
}
