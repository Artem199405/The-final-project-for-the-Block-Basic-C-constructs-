#pragma once

#include <string>
#include "Participants.h"

using namespace std;

class Participants;

class Chat
{
private:
	int _size; // Максимальное количество участников чата
	int _count; // Количество зарегистрированных учатников чата
	int iSender; // Номер авторизованного участника чата из массива _participants
	Participants* _participants;

public:
	//Конструктор
	Chat(int size);

	// Деструктор
	~Chat();

	// Сравнение существующих и введенного логинов
	bool compareLogin(string login);

	// Сравнение существующих и введенного имен
	bool compareName(string name);

    // Добавление нового участника чата
	void addParticipant(string login, string password, string name);

	// Вход в аккаунт
	bool SignIn(string login, string password);

	// Выход из аккаунта
	void SignOut();

	// Отправка сообщения
	void sendMessage(string name, string text);

	// Чтение сообщения
	void readMessages();
};