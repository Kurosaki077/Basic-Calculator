# include <stdio.h>

//Addition function
double add(double num1, double num2){
	return num1 + num2;
}

//Subtraction function
double subtract(double num1, double num2){
	return num1 - num2;
}

//Multiplication function
double multiply(double num1, double num2){
	return num1 * num2;
}

//Division function
double divide(double num1, double num2){
	return num1 / num2;
}
 
int main() {
	//Defining variables
	int operation;
	double num1;
	double num2;
	double answer; 	

	//Displays calculator options
	printf("Calculator\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");

	printf("Choose an operation: ");
	
	//Scans operation and checks validity
	if(scanf("%d", &operation) != 1){
		printf("Invalid input\n");
		return 1;
	}

	//Checks if operation is within the given range
	if(operation < 1 || operation > 4){
		printf("Invalid operation\n");
		return 1;
	}

	printf("Enter first number: ");
	
	//Scans first number and checks validity
	if(scanf("%lf", &num1) != 1){
		printf("Invalid number\n");
		return 1;
	}

	printf("Enter second number: ");
	
	//Scans second number and checks validity
	if(scanf("%lf", &num2) != 1){
		printf("Invalid number\n");
		return 1;
	}

	//Executes the given operation
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
			//Checks division by 0
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