#pragma once

#include <string>
#include "Messages.h"

using namespace std;

class Messages;

class Participants
{
private:
	

	int _size; // Максимальное количество присланных сообщений
	int _count; // Количество присланных сообщений
	string _login, _password, _name;
	Messages* _messages;

public:
	//Конструктор
	Participants();

	// Деструктор
	~Participants();

	// Добавление нового сообщения
	void recordMessage(string name, string text);

	// Чтение присланных сообщений
	void showMessages();

	// Увеличение размера массива _messages
	void resize();

	// Сеттеры
	void setLogin(string login);

	void setPassword(string password);

	void setName(string name);

	// Геттеры
	string getLogin();

	string getPassword();

	string getName();
};