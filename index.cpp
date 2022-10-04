#include <iostream>
#include <string>

int operations(int num1, int num2, int num3) {

	int result1 = num1 + num3;
	int result2 = num2 - num3;
	int result3 = result1 * 6;
	int result4 = result2 * 2;
	int result5 = result3 + result4;

	return result5;
}
