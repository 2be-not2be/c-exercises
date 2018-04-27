#include <stdio.h>

//typedef char OPERATOR;

int main(){
	
	char op = 0;
	int operand_1 = 0;
	int operand_2 = 0;
	
	printf("Enter an operator(+,-,* or /) and two integers: ");
	scanf("%c %d %d\n", &op, operand_1, operand_2);
	
	
	switch(op){
		case '+':
			printf(" %d + %d = %d", operand_1, operand_2, operand_1 + operand_2);
			//printf(operand_1, " + ", operand_2 " = " + operand_1 + operand_2);
			break;
		case '-':
			printf(" %d - %d = %d", operand_1, operand_2, operand_1 - operand_2);
			break;
		case '*':
			printf(" %d * %d = %d", operand_1, operand_2, operand_1 * operand_2);
			break;
		case '/':
			printf(" %d / %d = %d", operand_1, operand_2, operand_1 / operand_2);
			break;
		default:
			printf("Invalid input!");
			
	}

	return 0;
}
