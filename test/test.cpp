#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

void test() {
	struct Option {
			long double toBe;
			int num1;
			int num2;
			int num3;
	};

	Option options[] = {
			{
					62,
					5,
					6,
					5
			},
			{
					-2026,
					9,
					2,
					-521
			},
			{
					3502,
					523,
					8,
					87
			},
			{
					532,
					56,
					88,
					5
			},
			{
					21316,
					2863,
					525,
					772
			}
	};

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		long result = operations(option.num1, option.num2, option.num3);

		cout << endl;

		if (result == options[i].toBe) {
			cout << termcolor::green << "TEST " << "\"" << options[i].num1 << " " << options[i].num2 << " " << options[i].num3 << "\"" << " PASSED!";
		} else {
			cout << termcolor::red << "TEST " << "\"" << options[i].num1 << " " << options[i].num2 << " " << options[i].num3 << "\"" << " FAILED! EXPECTED \"" << options[i].toBe << "\" INSTEAD OF " << "\"" << result << "\"!";
		}

		cout << endl;
	}
}