#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial=0; 
	
	
	do
	{
		printf("input a number :"); //�Է��ض� ���� ��� 
		scanf("%i", &x); //�Է��� ���� 
		if (x>59)
			printf("Low\n");
		else if (x<59)
			printf("High\n"); //�Է¼��ڰ� ���亸�� ū�� ������ ��� 
		trial=trial+1;
	}
	while(x!=59);//����� ������ ���� �Ǵ� 
	
	
	printf("Congratulation! Number of trial = %i.\n", trial); //�õ� Ƚ�� ��� 
	
	
	return 0;
}
