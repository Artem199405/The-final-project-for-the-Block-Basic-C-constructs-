#pragma once

#include <string>
#include "Participants.h"

using namespace std;

class Participants;

class Chat
{
private:
	int _size; // ������������ ���������� ���������� ����
	int _count; // ���������� ������������������ ��������� ����
	int iSender; // ����� ��������������� ��������� ���� �� ������� _participants
	Participants* _participants;

public:
	//�����������
	Chat(int size);

	// ����������
	~Chat();

	// ��������� ������������ � ���������� �������
	bool compareLogin(string login);

	// ��������� ������������ � ���������� ����
	bool compareName(string name);

    // ���������� ������ ��������� ����
	void addParticipant(string login, string password, string name);

	// ���� � �������
	bool SignIn(string login, string password);

	// ����� �� ��������
	void SignOut();

	// �������� ���������
	void sendMessage(string name, string text);

	// ������ ���������
	void readMessages();
};