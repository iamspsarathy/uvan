13 lines (10 sloc)  129 Bytes
#include <stdio.h>

int main(void) {
int a,b,temp;

scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;

printf("%d %d",a,b);

	return 0;
}
