#pragma once

#include <string>
#include "Messages.h"

using namespace std;

class Messages;

class Participants
{
private:
	

	int _size; // ������������ ���������� ���������� ���������
	int _count; // ���������� ���������� ���������
	string _login, _password, _name;
	Messages* _messages;

public:
	//�����������
	Participants();

	// ����������
	~Participants();

	// ���������� ������ ���������
	void recordMessage(string name, string text);

	// ������ ���������� ���������
	void showMessages();

	// ���������� ������� ������� _messages
	void resize();

	// �������
	void setLogin(string login);

	void setPassword(string password);

	void setName(string name);

	// �������
	string getLogin();

	string getPassword();

	string getName();
};