#pragma once

#include <string>

using namespace std;

class Messages
{
private:
	string _sender, _text;

public:
	//�����������
	Messages() {};

	// ����������
	~Messages() {};

	// �������
	void setSender(string sender);

	void setText(string text);

	// �������
	string getSender();

	string getText();
};