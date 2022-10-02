﻿#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	class Calculator
	{
	public:
		double num1;
		double num2;
		double add() { return(num1 + num2); }
		double multiply() { return(num1 * num2); }
		double subtract_1_2() { return(num2 - num1); }
		double subtract_2_1() { return(num1 - num2); }
		double divide_1_2() { return(num1 / num2); }
		double divide_2_1() { return(num2 / num1); }
		bool set_num1(double num1) {
			if (num1 != 0) { this->num1 = num1; return true; }
			else { return false; }
		}

		bool set_num2(double num2) {
			if (num2 != 0) { this->num2 = num2; return true; }
			else { return false; }
		}
	};

	Calculator test;
	double num1;
	double num2;
	while (true) {
		num1 = 0;
		num2 = 0;
		while (!test.set_num1(num1)) {
			std::cout << "Введите num1:  ";
			std::cin >> num1;
			test.set_num1(num1);
			if (!test.set_num1(num1)) { std::cout << "Неверный ввод!" << std::endl; }
		}
		while (!test.set_num2(num2)) {
			std::cout << "Введите num2:  ";
			std::cin >> num2;
			test.set_num2(num2);
			if (!test.set_num2(num2)) { std::cout << "Неверный ввод!" << std::endl; }
		}
		std::cout << "num1 + num2 =   " << test.add() << std::endl;
		std::cout << "num1 * num2 =   " << test.multiply() << std::endl;
		std::cout << "num1 - num2 =   " << test.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 =   " << test.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 =   " << test.divide_1_2() << std::endl;
		std::cout << "num2 / num1 =   " << test.divide_2_1() << std::endl;
	}
}
