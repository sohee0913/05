#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt=0; 
	
	printf("input a string :");
	
	while( (c=getchar()) !='\n' ) //�Է� ���ڰ� ���๮�ڰ� ���ö����� �ݺ� 
	{ if (c>47 && c<58)
	//c+=1;//�Էµ� ���ڰ� �����ΰ�?
		cnt=cnt+1;//�׷��ٸ� �ϳ��� ����
	
	}
	printf("the number of digits is %i.\n", cnt);
	
	return 0;
}
