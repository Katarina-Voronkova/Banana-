#pragma once
#include <iostream>

class Node
{
public:
	int data;
	Node* next;
	Node* prev;
};

class Queue
{
private:
	Node* head;
	Node* tail;
public:
	Queue() : head(nullptr), tail(nullptr) {}
	Queue(int value);
	bool empty() const { return head == nullptr && tail == nullptr; }; //�������� �� �������
	int front() const { return head->data; }; //��������� � ������� �������
	int back() const { return tail->data; }; //��������� � ���������� ��������
	void pop(); //�������� ������� ��������
	size_t size();
	void push(int value);
};

