#include <stdio.h>
#include <stdbool.h>

enum operator {
	PLUS,
	MINUS,
	MULTI,
	DIVISION,
};

int main(int argc, char const *argv[])
{
	printf("Please type input:\n");
	char calculation[4];
	int i = 0;
	int c;
	int firstNum;
	int secondNum;
	char operator;
	bool isFirstNum = true;
	fgets(calculation, 4, stdin);
	for (int i=0; i < 3; i++) {
		c = calculation[i];
		if(c >= '0' && c <= '9') {
			if(isFirstNum) {
				firstNum = c - '0';
				isFirstNum = false;
			} else {
				secondNum = c - '0';
				break;
			}
		} else {
			operator = c;
		}
	}
	switch (operator) {
		case '+':
			printf("%d\n", firstNum + secondNum);
			break;
		case '-':
			printf("%d\n", firstNum - secondNum);
			break;
		case '*':
			printf("%d\n", firstNum * secondNum);
			break;
		case '/':
			printf("%d\n", firstNum / secondNum);
			break;

	}
	// if(operator == '+') {
	// 	printf("%d\n", firstNum + secondNum);
	// } else if (operator == '-') {
	// 	printf("%d\n", firstNum - secondNum);
	// } else if (operator == '*') {
	// 	printf("%d\n", firstNum * secondNum);
	// } else if (operator == '/') {
	// 	printf("%d\n", firstNum / secondNum);
	// }
	return 0;
}