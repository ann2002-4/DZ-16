#include "User.h"

void ChatMenu(vector<Person>& A, vector<Person::Chat>& B, string& login_, const string& namefrom_, string& nameto_, string& message_)
{
    char operat = '0';

    string NamefromUser = login_;
    cout << "���� ���: " << NamefromUser << endl;


    string NametoUser;
    string Message;
    bool k = false;
    bool n = false;
    while (operat != '3')
    {
        cout << "�������� �������: " << endl << "1 - �������� ���������" << endl << "2 - ������� ��������� " << endl << "3 - ����� � ������� ����" << endl;
        cin >> operat;

        switch (operat)
        {
        case '1':
            cout << "�������� ����������:" << endl;
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
                    cout << "������� ���������: ";
                    cin >> Message;
                    B.emplace_back(NamefromUser, NametoUser, Message);
                };

            };
            if (k == false) cout << "������ ���������� �����������������" << endl;
            k = false;
            break;
        case '2':
            cout << "�������� ����������:" << endl;
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
                                cout << "�����������: " << B[i].Namefrom << " ����������: " << B[i].Nameto << endl << " ���������: " << B[i].Message << endl;
                            };
                        };
                    }
                };

            };
            if (k == false) cout << "������ ���������� �����������������" << endl;
            if (n == false) cout << "������� ��������� ���" << endl;
            k = false;
            break;
        default:

            std::cout << "�� ����� �������� �������!" << std::endl;
            std::cout << std::endl;
            break;

        };


    };
};