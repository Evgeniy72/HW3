
#include <iostream>
class Counter
{
private:
	int count;
	int e = 1;
public:
	void inc() { (count += 1); }
	void decr() { (count -= 1); }
	double eq() { return count; }
	Counter(int count) {}
	Counter()
	{
		count = 1;
	}
};

int main()
{
	std::string answer;
	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет:   ";
	std::cin >> answer;
	if (answer == "да")
	{
		int count;
		std::cout << "Введите начальное значение счетчика:  ";
		std::cin >> count;
		Counter Test(count);
	}
	else
	{
		Counter Test();
	}
	int e = 1;
	while (e == 0)
	{
		std::cout << "Введите команду ( '+', '-', '=' или 'x'):  ";
		std::cin >> answer;
		std::cout << std::endl;
		if (answer == "+") {Test.inc;}
		else if (answer == "-") { Test.decr; }
		else if (answer == "=") { std::cout << Test.eq; }
		else { e = 0; }
	}
	;
}


