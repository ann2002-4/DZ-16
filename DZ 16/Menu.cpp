#include "User.h"

void StartMenu(vector<Person>& A, string& login_, string& password_, vector<Person::Chat>& B, const string& namefrom_, string& nameto_, string& message_)
{
    char operat = '0';
    while (operat != '3')
    {
        cout << "������ ����!" << endl << "�������� �������: " << endl << "1 - ����������� ������ ������������" << endl << "2-���� � ������ �������" << endl << "3 - ����� �� ���������" << endl;

        cin >> operat;
        switch (operat)
        {
        case '1':

            Registration(A, login_, password_);
            break;
        case '2':
            Login(A, login_, password_, B, namefrom_, nameto_, message_);

            break;
        default:

            std::cout << "�� ����� �������� �������!" << std::endl;
            std::cout << std::endl;
            break;

        };
    }
}