#include <stdio.h>

int main(){
	int i;

	printf("Enter number:");
	scanf("%d", &i);

	if( ( i % 2 ) == 0 )
		printf("=== this number is Even \n");
	if ( ( i % 2 ) == 1 )
		printf("=== this number is Odd \n");

return 0;

}
