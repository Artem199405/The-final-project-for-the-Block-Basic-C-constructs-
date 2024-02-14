#include <iostream>
#include "Participants.h"

using namespace std;

Participants:: Participants() : _size(5), _count(0)
{
	_messages = new Messages[_size];
}

Participants::~Participants()
{
	delete[] _messages;
}

void Participants::recordMessage(string name, string text)
{
    _messages[_count].setSender(name);
	_messages[_count].setText(text);
	_count++;
}

void Participants::showMessages()
{
    if (_count == 0)
    {
        cout << "You don't have any unread messages" << endl;
    }
    else if (_count == 1)
    {
        cout << "You have one unread message" << endl;
    }
    else
    {
        cout << "You have " << _count << " unread messages" << endl;
    }

    for (int i = 0; i < _count; i++)
    {
        cout << "Sender: " << _messages[i].getSender() << endl;
        cout << "Text: " << _messages[i].getText() << endl;
    }

    _count = 0;
}

void Participants::setLogin(string login)
{
	_login = login;
}

void Participants::setPassword(string password)
{
	_password = password;
}

void Participants::setName(string name)
{
	_name = name;
}

string Participants::getLogin()
{
	return _login;
}

string Participants::getPassword()
{
	return _password;
}

string Participants::getName()
{
	return _name;
}