#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,nguess=1;
	
	srand(time(0));
	number=rand()%100+1;
	
	do{
		printf("Guess a number between 1 to 100\n");
		scanf("%d",&guess);
		
		if(guess>number){
			printf("Guess a lower number please !\n");
		}
		else if(guess<number){
			printf("Guess a higher number please !\n");
		}
		else{
			printf("You have guessed the correct number in %d th terms\n",nguess);
		}
		nguess++;
	}
	while(guess!=number);
	
	return 0;
}
