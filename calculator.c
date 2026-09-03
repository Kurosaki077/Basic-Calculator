# include <stdio.h>

double add(double num1, double num2){
	return num1 + num2;
}

double subtract(double num1, double num2){
	return num1 - num2;
}

double multiply(double num1, double num2){
	return num1 * num2;
}

double divide(double num1, double num2){
	return num1 / num2;
}
 
int main() {
	int operation;
	double num1;
	double num2;
	double answer; 	

	printf("Calculator\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");

	printf("Choose an operation: ");
	scanf("%d", &operation);

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter second number: ");
	scanf("%lf", &num2);

	switch(operation){
		case 1:
			answer = add(num1, num2);
			printf("Addition: %.2f\n", answer);
			break;

		case 2:
			answer = subtract(num1, num2);
			printf("Subtraction: %.2f\n", answer);
			break;

		case 3:
			answer = multiply(num1, num2);
			printf("Multiplication: %.2f\n", answer);
			break;

		case 4:
			if(num2 == 0){
				printf("Can't divide by zero\n");
			}
			else{
				answer = divide(num1, num2);
				printf("Division: %.2f\n", answer);
			}

			break;
	}
	
	return 0;
 }