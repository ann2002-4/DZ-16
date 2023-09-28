#include "User.h"

void ChatMenu(vector<Person>& A, vector<Person::Chat>& B, string& login_, const string& namefrom_, string& nameto_, string& message_)
{
    char operat = '0';

    string NamefromUser = login_;
    cout << "Ваше имя: " << NamefromUser << endl;


    string NametoUser;
    string Message;
    bool k = false;
    bool n = false;
    while (operat != '3')
    {
        cout << "Выберите команду: " << endl << "1 - написать сообщение" << endl << "2 - История сообщений " << endl << "3 - выйти в главное меню" << endl;
        cin >> operat;

        switch (operat)
        {
        case '1':
            cout << "Выберите получателя:" << endl;
            for (int i = 0; i < A.size(); ++i)
            {
                cout << A[i].login << endl;
            }
            cin >> NametoUser;

            for (int i = 0; i < A.size(); ++i)
            {
                if (A[i].login == NametoUser)
                {
                    k = true;
                    cout << "Введите сообщение: ";
                    cin >> Message;
                    B.emplace_back(NamefromUser, NametoUser, Message);
                };

            };
            if (k == false) cout << "Данный получатель незарегистрирован" << endl;
            k = false;
            break;
        case '2':
            cout << "Выберите получателя:" << endl;
            for (int i = 0; i < A.size(); ++i)
            {
                cout << A[i].login << endl;
            }
            cin >> NametoUser;

            for (int i = 0; i < A.size(); ++i)
            {
                if (A[i].login == NametoUser)
                {
                    k = true;
                    for (int i = 0; i < B.size(); ++i)
                    {
                        if (NamefromUser == B[i].Namefrom || NamefromUser == B[i].Nameto)
                        {
                            if (NametoUser == B[i].Namefrom || NametoUser == B[i].Nameto)
                            {
                                bool n = true;
                                cout << "Отправитель: " << B[i].Namefrom << " Получатель: " << B[i].Nameto << endl << " Сообщение: " << B[i].Message << endl;
                            };
                        };
                    }
                };

            };
            if (k == false) cout << "Данный получатель незарегистрирован" << endl;
            if (n == false) cout << "Истории сообщений нет" << endl;
            k = false;
            break;
        default:

            std::cout << "Вы ввели неверную команду!" << std::endl;
            std::cout << std::endl;
            break;

        };


    };
};