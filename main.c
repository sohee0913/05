#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt=0; 
	
	printf("input a string :");
	
	while( (c=getchar()) !='\n' ) //입력 문자가 개행문자가 나올때까지 반복 
	{ if (c>47 && c<58)
	//c+=1;//입력된 글자가 숫자인가?
		cnt=cnt+1;//그렇다면 하나를 센다
	
	}
	printf("the number of digits is %i.\n", cnt);
	
	return 0;
}
