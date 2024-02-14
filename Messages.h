#pragma once

#include <string>

using namespace std;

class Messages
{
private:
	string _sender, _text;

public:
	//Конструктор
	Messages() {};

	// Деструктор
	~Messages() {};

	// Сеттеры
	void setSender(string sender);

	void setText(string text);

	// Геттеры
	string getSender();

	string getText();
};