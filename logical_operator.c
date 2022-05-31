#include<stdio.h>
int main()
{
	int a=2,b=3,c=4;
	printf("(a<b&&a<c)=%d",(a<b&&a<c));
	printf("(c<b&&c<a)=%d",(c<b&&c<a));
	printf("(a=>b||b==c)=%d",(a==b||b==c));
	printf("(a!=b||b=c)=%d",(a!=b||b==c));
}
/* output
(a<b&&a<c)=1(c<b&&c<a)=0(a=>b||b==c)=0(a!=b||b=c)=1 */