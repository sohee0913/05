#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial=0; 
	
	
	do
	{
		printf("input a number :"); //입력해라 문구 출력 
		scanf("%i", &x); //입력을 받음 
		if (x>59)
			printf("Low\n");
		else if (x<59)
			printf("High\n"); //입력숫자가 정답보다 큰지 작은지 출력 
		trial=trial+1;
	}
	while(x!=59);//정답과 같은지 여부 판단 
	
	
	printf("Congratulation! Number of trial = %i.\n", trial); //시도 횟수 출력 
	
	
	return 0;
}
