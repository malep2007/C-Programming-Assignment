/*QN 3*/

#include<stdio.h>
#include<conio.h>
int main(void)
{
	
int bucky[50];
 bucky[0]=16;
 bucky[1]=34;
 printf("%d\n", bucky);	
	
	
	getch();
	return 0;
}

WRITE A DECLARATION FOR AN ARRAY THAT WILL HOLD 50 TYPE LONG VALUES
answer:
	long values[50];
	
	
	b)Show a statement that assigns the value of 123.456 to the 50th element in the array from the above question
	answer:
		long values[49]=123456;
		
	What is the values of x when the following statement in complete?	
	ANSWER:
		value of x:
			answer:
				The value of x is 100
				
			QN:	What is the value of ctr when the following statement is compelte ?
				
				Answer:
					
				value of ctr when statement is complete
				answer:
					the value is 11
					
				QN:	Write a while statement to count from 1 to 100 by 3s
					ANSWER:
						
					while statement:
						answer:
							#include<stdio.h>
							main()
							{
							int counter=1;
							while(count<=100){
								printf("%d", count);
								counter+=3;
								
							}
							
								
							}
							
							
						QN:	whats wrong with the following code:
							
								answer:
									The code under thr for loop is always executed once outside the for loop
									because of the semicolon terminating the for loop.
									
									QN 4
									WRITE A FUNCTION NAMED ADDARRAYS...
									
									Answer:
										void addarray(int array[],int array[2],int destination_array[],int SIZE)
										{
											for(int i=0; i<SIZE;i++)
											{
												destination_array[i]=array[i]+array2[i]
											}
										}
										
										
										
										modify the function you created...
										Answer:
											#include<stdio.h>
											int*addarrays(int array1[], int array2[], int SIZE);
											MAIN(){
											
											int array1[]={2,5,3,22,6};
											int array2[]={13,143,11,10,121};
											
											int*array3=addarrays(array1,array2,5);
											for(int i=0;i<5;i++)
											{
												printf("%d"\n, array3[i]);
												
											}
										}
										int*addarrays(int array1[],int array2[], int length){
											int*destination_array=malloc(length*sizeof(int));
											for(int i=0; i<5; i++){
												destination_array[i]=array1[i]+array2[i];
											}
											return destination_array;
										}
											
