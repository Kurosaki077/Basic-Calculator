# include <stdio.h>

double add(double num1, double num2){
	return num1 + num2;
}

int main() {
 	double answer;
	answer = add(7.7, 5.4);
	printf("Addition: %.2f\n", answer);
	return 0;
 }