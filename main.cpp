#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

struct Signs
{
    int bday[3]; // ���� �������� ��.��.��
};

string sign_zodiac[12] = { "����", "�����", "��������", "���", "���", "����",
                           "����", "��������", "�������", "�������", "�������", "����"
                         }; // ������� ���������� ������ �������

string answers[12] = { "������ �������, ��� ����� ���� ���� ��� � ����, �� ����� ������� �� ����.",
                       "�������, ��� ����� ������� ���������� ����� �������� � ��� �� ��� ���� �������, ��� ������� �� � ��� ������ �����������.",
                       "������� �� �� ������� ������������ �� ������������������.", "� ��� ������� �� ����� �� �������� ������� ��� ����� ��� ������ ������� ���� ������� ����������.",
                       "����������� ���� ������� ��� �������������� ����� ��������� ������.", "������� ����� ����� �������� ����� �������� ���� �� �� ������������ � ���������������.",
                       "������� ��� ����� �� ������ ��������, � ��� ����� ��������� ��������� � ������� � ���� ���������.", "������� ��� �� ����� ���������� �� ��������, � ����� ��������� �� ������, ������� �������.",
                       "���� ������� ������� �������� �� �����, ��������� �� ���� �� �����.", "������� �� ������ ������ �������� ������ � �����.",
                       "�� ����������� �� ������� ������ �������, �� �� ����, �� �� ���-���� ���.", "������� ��� ������� ������������������ ���� ������������ �����."
                     };


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

    const int size_array = 8; // ���������� �������
    Signs year[size_array]; // ��������� ������

    cout << "������ ���� �������� ��� ���� �������?\n1 - ���� �������� (� ������� ��.��.��)\n0 - ���� �������\n";
    cout << "��� �����: ";
    cin >> answer;

    while (answer != 0 || answer != 1)
    {
        if (answer == 0)
        {
            cout << "\n\n������� ���� �������: ";
            cin >> sign;
        }
        else if (answer == 1)
        {
            cout << "\n\n������� ����: ";
            cin >> setw(2) >> (year[0].bday[0]); // ������� ������ ��� �������, �.�. ����
            cin.ignore(); // ���������� ������ �����
            cin >> setw(2) >> year[0].bday[1]; // ������� ��������� ��� �������, �.�. �����
            cin.ignore(); // ���������� ������ �����
            cin >> setw(4) >> year[0].bday[2]; // ������� ������ �������, �.�. ���
            cin.get(); // ��������� ������ ����� ������ '\n'
        }
        else
        {
            cout << "������� ��� ����� ��� ���: ";
            cin >> answer;
        }

        cout << "�������� �� ����������� ����: ";
        Answers objAnswer;
        objAnswer.getAnswer(sign, year);
    }

    return 0;
}
