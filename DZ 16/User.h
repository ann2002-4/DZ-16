#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string login;
    string password;
    struct Chat {
        string Namefrom;
        string Nameto;
        string Message;
        Chat(const string& namefrom_, string& nameto_, string& message_) :Namefrom(namefrom_), Nameto(nameto_), Message(message_) {}
    };
    Person(const string& login_, string& password_) : login(login_), password(password_) {}

};

void  Registration(vector<Person>& A, string& login_, string& password_);
void  Login(vector<Person>& A, string& login_, string& password_, vector<Person::Chat>& B, const string& namefrom_, string& nameto_, string& message_);
void StartMenu(vector<Person>& A, string& login_, string& password_, vector<Person::Chat>& B, const string& namefrom_, string& nameto_, string& message_);
void ChatMenu(vector<Person>& A, vector<Person::Chat>& B, string& login_, const string& namefrom_, string& nameto_, string& message_);
class bad_sing : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "неверный логин или пароль";
        std::cout << std::endl;
    }
};

