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
	if (num2 == 0){
		printf("Cannot divide by zero\n");
		return 0;
	}

	return num1 / num2;
}
 
int main() {
 	double answer;

	answer = add(7.7, 5.4);
	printf("Addition: %.2f\n", answer);

	answer = subtract(4.5, 2.7);
	printf("Subtraction: %.2f\n", answer);

	answer = multiply(6.3, 8.9);
	printf("Multiplication: %.2f\n", answer);

	answer = divide(8.4, 2.2);
	printf("Division: %.2f\n", answer);

	return 0;
 }