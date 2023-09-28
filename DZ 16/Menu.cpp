#include "User.h"

void StartMenu(vector<Person>& A, string& login_, string& password_, vector<Person::Chat>& B, const string& namefrom_, string& nameto_, string& message_)
{
    char operat = '0';
    while (operat != '3')
    {
        cout << "Добрый день!" << endl << "Выберите команду: " << endl << "1 - регистрация нового пользователя" << endl << "2-вход в личный кабинет" << endl << "3 - выход из программы" << endl;

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

            std::cout << "Вы ввели неверную команду!" << std::endl;
            std::cout << std::endl;
            break;

        };
    }
}