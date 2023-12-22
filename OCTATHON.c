// solution for the problem https://www.codechef.com/START103D/problems/OCTATHON
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	if(t<3)                 printf("GOLD\n");
	else if(t>=3 && t<6)    printf("SILVER\n");
	else                    printf("BRONZE\n");
	return 0;
}

