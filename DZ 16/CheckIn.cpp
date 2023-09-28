#include "User.h"

void  Registration(vector<Person>& A, string& login_, string& password_)
{
    cout << "Этап регистрации" << endl;
    cout << "Введите Логин: ";
    cin >> login_;
    try
    {
        for (int i = 0; i < A.size(); i++)
        {
            if (login_ == A[i].login)
            {
                throw "Такой login уже зарегистрирован!";
            }
        }
        cout << endl;
        cout << "Введите Пароль: ";
        cin >> password_;
        cout << endl;
        A.emplace_back(login_, password_);
    }
    catch (const char* exception)
    {
        std::cout << std::endl;
        std::cout << exception << std::endl;
        std::cout << std::endl;
    }
}