#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b){
	int r;
        if(a<b) return gcd(b,a);
        while(a%b!=0){r=a%b; a=b; b=r;}
        return b;
}

int main(int argc,char* argv[]){
	int a,b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3){
		printf("%d와%d의 최대공약수는 : %d\n",a,b,gcd(a,b));
	}else{
		puts("잘못된 사용법입니다.");
		puts("gcd [숫자1] [숫자2]");
		puts("예) gcd 5 10");
	}
	return 0;
}
