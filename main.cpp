#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
	// Ввод quantity(колличества предметов)
    std::cout << "Введите количество предметов: ";
    int quantity;
    std::cin >> quantity;

	// Создание массива grades для quantity
    std::vector<double> grades(quantity);

	// Цикл for для запроса оценок grades, цикл if если некор. ввод
    for (int i{0}; i < quantity; ++i) 
	{
		std::cout << "Введите оценку для предмета " << i + 1 << ": ";
        std::cin >> grades[i];

        if (grades[i] < 1.0 || grades[i] > 5.0) 
		{std::cout << "Ошибка: оценка должна быть в диапазоне от 1 до 5.\n"; --i;}
    }

	// Ввод sum(сумма оценок), цикл for для расчета суммы оценок, ввод average для расчёта средней оценки
    double sum{0};
    for (int i{0}; i < quantity; ++i) {sum += grades[i];}
    double average{sum / quantity};

	// Вывод average с точностью до 2 знаков после ","
    std::cout << "Средний балл: " << std::fixed << std::setprecision(2) << average << '\n';
	
	// Цикл if для вывода оценки
	if (average == 5.0) {std::cout << "Оценка: Отлично.\n";} 
	else if (average >= 4.0 && average < 5.0) { std::cout << "Оценка: Хорошо.\n";} 
	else if (average >= 3.0 && average < 4.0) {std::cout << "Оценка: Удовлетворительно.\n";} 
	else {std::cout << "Оценка: Неудовлетворительно.\n";}

    return 0;
}
