
#include <iostream>
class Counter
{
private:
	int count;
public:
	void inc() { (count += 1); }
	void decr() { (count -= 1); }
	double eq() { return count; }
	Counter(int count) { this->count = count; }
	Counter()
	{
		count = 1;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
		std::string answer;
	std::cout << "Вы хотите указать начальное значение счетчика? Введите yes или no:   ";
	std::cin >> answer;
	Counter counter;
	if (answer == "yes")
	{
		int count;
		std::cout << "Введите начальное значение счетчика:  ";
		std::cin >> count;
		Counter Test(count);
		counter = Test;
	}
	else
	{
		Counter Test;
		counter = Test;
	}
	
	int e = 1;
	while (e != 0)
	{
		std::cout << "Введите команду ( '+', '-', '=' или 'x'):  ";
		std::cin >> answer;
		std::cout << std::endl;
		if (answer == "+") { counter.inc(); }
		else if (answer == "-") { counter.decr(); }
		else if (answer == "=") { std::cout << counter.eq() << std::endl; }
		else if (answer == "x") { e = 0; }
		else { std::cout << "Неверная команда" << std::endl; }
	}
	;
}


