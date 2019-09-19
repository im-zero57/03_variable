#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	printf("Hello Sookmyung EE!\n");

	int x;
	short y;
	char a;
	float b;
	double c;	
	
		
	printf("bytes of int : %d\n",sizeof(x) );
	
    printf("bytes of short : %d\n",sizeof(y) );
    
	printf("bytes of char : %d\n",sizeof(a) );
    
	printf("bytes of float : %d\n",sizeof(b) );
    
	printf("bytes of double : %d\n",sizeof(c) );
	
	int input_int;
	float input_float;
	
	printf("enter integer : ");
	scanf("%d", &input_int);
	
	printf("enter float : ");
	scanf("%f", &input_float);
	
	printf("integer : %d, float : %f\n", input_int, input_float);
	
	return 0;
}
