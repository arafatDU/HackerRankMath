#include<stdio.h>
int main() {
	int b, a;

	scanf("%d%d", &b,&a);
	a = 2*a;

	if( a%b == 0) printf("%d", a/b);
	else printf("%d", (a/b +1));

	return 0;
}
