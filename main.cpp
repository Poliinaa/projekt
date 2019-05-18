// forPolina.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

struct Signs
{
	int bday[3]; // дата рождения дд.мм.гг
};

string sign_zodiac[12] = { "Овен", "Телец", "Близнецы", "Рак" , "Лев", "Дева",
								"Весы", "Скорпион", "Стрелец", "Козерог", "Водолей", "Рыбы" }; // порядок следования знаков зодиака

string answers[12] = { "Нельзя сказать, что удача сама идет вам в руки, но шансы поймать ее есть.",
							"Сегодня, чем более сильное отвращение будет вызывать у вас то или иное занятие, тем быстрее вы с ним будете справляться.",
							"Сегодня вы не сможете пожаловаться на невостребованность.", "У вас сегодня не будет ни малейшей причины для скуки или любого другого вида плохого настроения.",
							"Сегодняшний день идеален для восстановления давно утерянных связей.", "Сегодня успех ваших действий будет зависеть лишь от их обдуманности и своевременности.",
							"Сегодня вам лучше не искать компании, у вас могут появиться трудности в общении с себе подобными.", "Сегодня вам не стоит полагаться на интуицию, а также надеяться на кривую, которая вывезет.",
							"Ваше обаяние сегодня работать не будет, надеяться на него не стоит.", "Сегодня вы вполне можете добиться успеха в делах.",
							"Не полагайтесь на хорошую память сегодня, ни на свою, ни на чью-либо еще.", "Сегодня вам следует продемонстрировать свой неповторимый стиль." };

class Answers
{
public:
	void getAnswer(string signZodiac, Signs year[8])
	{
		if ((signZodiac == sign_zodiac[0]) || ((year[0].bday[1] == 3 && year[0].bday[0] >= 21) || (year[0].bday[1] == 4 && year[0].bday[0] <= 19)))
		{
			cout << sign_zodiac[0] << "\n" << answers[0];
		}
		else if ((signZodiac == sign_zodiac[1]) || ((year[0].bday[1] == 4 && year[0].bday[0] >= 20) || (year[0].bday[1] == 5 && year[0].bday[0] <= 20)))
		{
			cout << sign_zodiac[1] << "\n" << answers[1];
		}
		else if ((signZodiac == sign_zodiac[2]) || ((year[0].bday[1] == 5 && year[0].bday[0] >= 21) || (year[0].bday[1] == 6 && year[0].bday[0] <= 21)))
		{
			cout << sign_zodiac[2] << "\n" << answers[2];
		}
		else if ((signZodiac == sign_zodiac[3]) || ((year[0].bday[1] == 6 && year[0].bday[0] >= 22) || (year[0].bday[1] == 7 && year[0].bday[0] <= 22)))
		{
			cout << sign_zodiac[3] << "\n" << answers[3];
		}
		else if ((signZodiac == sign_zodiac[4]) || ((year[0].bday[1] == 7 && year[0].bday[0] >= 23) || (year[0].bday[1] == 8 && year[0].bday[0] <= 22)))
		{
			cout << sign_zodiac[4] << "\n" << answers[4];
		}
		else if ((signZodiac == sign_zodiac[5]) || ((year[0].bday[1] == 8 && year[0].bday[0] >= 23) || (year[0].bday[1] == 9 && year[0].bday[0] <= 22)))
		{
			cout << sign_zodiac[5] << "\n" << answers[5];
		}
		else if ((signZodiac == sign_zodiac[6]) || ((year[0].bday[1] == 9 && year[0].bday[0] >= 23) || (year[0].bday[1] == 10 && year[0].bday[0] <= 23)))
		{
			cout << sign_zodiac[6] << "\n" << answers[6];
		}
		else if ((signZodiac == sign_zodiac[7]) || ((year[0].bday[1] == 10 && year[0].bday[0] >= 24) || (year[0].bday[1] == 11 && year[0].bday[0] <= 22)))
		{
			cout << sign_zodiac[7] << "\n" << answers[7];
		}
		else if ((signZodiac == sign_zodiac[8]) || ((year[0].bday[1] == 11 && year[0].bday[0] >= 23) || (year[0].bday[1] == 12 && year[0].bday[0] <= 21)))
		{
			cout << sign_zodiac[8] << "\n" << answers[8];
		}
		else if ((signZodiac == sign_zodiac[9]) || ((year[0].bday[1] == 12 && year[0].bday[0] >= 22) || (year[0].bday[1] == 1 && year[0].bday[0] <= 20)))
		{
			cout << sign_zodiac[9] << "\n" << answers[9];
		}
		else if ((signZodiac == sign_zodiac[10]) || ((year[0].bday[1] == 1 && year[0].bday[0] >= 21) || (year[0].bday[1] == 2 && year[0].bday[0] <= 18)))
		{
			cout << sign_zodiac[10] << "\n" << answers[10];
		}
		else if ((signZodiac == sign_zodiac[11]) || ((year[0].bday[1] == 2 && year[0].bday[0] >= 19) || (year[0].bday[1] == 3 && year[0].bday[0] <= 20)))
		{
			cout << sign_zodiac[11] << "\n" << answers[11];
		}
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answer;
	string sign;

	const int size_array = 8; // количество записей
	Signs year[size_array]; // объявляем массив 

	cout << "Ввести дату рождения или знак зодиака?\n1 - дата рождения (в формате дд.мм.гг)\n0 - знак зодиака\n";
	cout << "Ваш ответ: ";
	cin >> answer;

	while (answer != 0 || answer != 1)
	{
		if (answer == 0)
		{
			cout << "\n\nВведите знак зодиака: ";
			cin >> sign;
		}
		else if (answer == 1)
		{
			cout << "\n\nВведите дату: ";
			cin >> setw(2) >> (year[0].bday[0]); // считать первые два символа, т.е. день
			cin.ignore(); // пропустить символ точки
			cin >> setw(2) >> year[0].bday[1]; // считать следующие два символа, т.е. месяц
			cin.ignore(); // пропустить символ точки
			cin >> setw(4) >> year[0].bday[2]; // считать четыре символа, т.е. год
			cin.get(); // считываем символ новой строки '\n'
		}
		else
		{
			cout << "Введите Ваш ответ еще раз: ";
			cin >> answer;
		}

		cout << "Гороскоп за сегодняшний день: ";
		Answers objAnswer;
		objAnswer.getAnswer(sign, year);
	} 

	return 0;
}
