#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int a,b;
	
	printf("input a number :");
	scanf("%d", &a);
	
	for(b=0; b<=a; b=b+1)
		sum=sum+b;
		
	printf("The result is %i", sum);
	
	return 0;
}
