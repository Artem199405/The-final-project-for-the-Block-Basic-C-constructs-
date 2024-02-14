#include "Chat.h"

Chat::Chat(int size) : _size(size), _count(0)
{
	_participants = new Participants[_size];
}

Chat::~Chat()
{
    delete[] _participants;
}

bool Chat::compareLogin(string login)
{
    for (int i = 0; i < _count; i++)
    {
        if (login == _participants[i].getLogin())
            return true;
    }
    return false;
}

bool Chat::compareName(string name)
{
    if (name == "all")
        return true;
    
    for (int i = 0; i < _count; i++)
    {
        if (name == _participants[i].getName())
            return true;
    }
    return false;
}

void Chat::addParticipant(string login, string password, string name)
{
    _participants[_count].setLogin(login);
    _participants[_count].setPassword(password);
    _participants[_count].setName(name);
    _count++;
}

bool Chat::SignIn(string login, string password)
{
    for (int i = 0; i < _count; i++)
    {
        if (login == _participants[i].getLogin())
        {
            if (password == _participants[i].getPassword())
            {
                iSender = i;
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

void Chat::SignOut()
{
    iSender = -1;
}

void Chat::sendMessage(string name, string text)
{
    if (name == "all")
    {
        for (int i = 0; i < _count; i++)
        {
            if (i != iSender)
            {
                _participants[i].recordMessage(_participants[iSender].getName(), text);
            }
        }
    }
    else
    {
        for (int i = 0; i < _count; i++)
        {
            if (name == _participants[i].getName())
            {
                _participants[i].recordMessage(_participants[iSender].getName(), text);
                break;
            }
        }
    }
}

void Chat::readMessages()
{
    _participants[iSender].showMessages();
}