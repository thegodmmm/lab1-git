//	Лабораторная	работа	№	1.	Вариант	38.
//	Выполнил:	Максимов	М.	М.,	группа	ПИ-51.
#include	<iostream>
#include	<Windows.h>
using	namespace	std;

//	=====	Расчётные	функции	варианта	=====
//	Работа тока
double	currentWork(double	U, double	I, double	t) {
	return	U * I * t;
}
//	Теплота тока
double	jouleHeat(double	I, double	R, double t) {
	return	I * I * R * t;
}
//	=====	Главная	функция:	меню	=====
int	main() {
	SetConsoleCP(65001);       
	SetConsoleOutputCP(65001);
	int	choice;		
	double	a, b, c;
	do {
		cout << "\n===	Вариант	38:	расчёты	для	тока	===\n";
		cout << "1.	Работа\n";
		cout << "2.	Теплота\n";
		cout << "0.	Выход\n";
		cout << "Выберите	пункт:	";
		cin >> choice;
		switch (choice) {
		case	1:
			cout << "Введите напряжение U в вольтах, силу тока I в амперах и время t в секундах:	";
			cin >> a >> b >> c;
			cout << "Работа	 в джоулях =	" << currentWork(a, b, c) << "\n";
			break;
		case	2:
			cout << "Введите	силу тока I в амперах, сопротивление R в омах и время  t в секундах:	";
			cin >> a >> b >> c;
			cout << "Теплота в джоулях	=	" << jouleHeat(a, b, c) << "\n";
			break;
		case	0:
			cout << "Работа	завершена.\n";
			break;
		default:
			cout << "Такого	пункта	нет.\n";
		}
	} while (choice != 0);
	return	0;
}

