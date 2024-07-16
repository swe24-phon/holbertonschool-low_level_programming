#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        op = get_op_func(avrg[2]);

	if (op == NULL || !(avrg[2] == '+' || avrg[2] == '-' || avrg[2] == '*' || avrg[2] == '/' 
				|| op == '%'))
	{
                printf("Error\n");
                exit (99);			
	}
	if ((avrg[2] == '/' || avrg[2] == '%') && num2 == 0)
	{
                printf("Error\n");
                exit (100);		
	}
	printf("%d\n", op);
	return (0);

}
