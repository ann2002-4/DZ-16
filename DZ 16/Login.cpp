#include "User.h"

void Login(vector<Person>& A, string& login_, string& password_, vector<Person::Chat>& B, const string& namefrom_, string& nameto_, string& message_)
{
    int n = 0;
    int k;
    cout << "Этап авторизации" << endl;
    cout << "Введите Логин: ";
    cin >> login_;
    cout << endl;
    cout << "Введите Пароль: ";
    cin >> password_;
    cout << endl;
    for (int i = 0; i < A.size(); i++)
    {
        if (login_ == A[i].login)
        {
            n++; 
            k = i;
        }
    }
    try
    {
        if (n == 0) { throw bad_sing(); }
        else if (A[k].password == password_)
        {
            ChatMenu(A, B, login_, namefrom_, nameto_, message_);
        }
        else if (A[k].password != password_)
        {
            throw bad_sing();
        }

    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}