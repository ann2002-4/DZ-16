#include "User.h"

int main()
{
    system("chcp 1251");
    std::vector<Person> User;
    std::vector<Person::Chat> Messenger;
    string Log;
    string Pass;
    string NameTo;
    string NameFrom;
    string Message;

    StartMenu(User, Log, Pass, Messenger, NameFrom, NameTo, Message);

    return 0;
};