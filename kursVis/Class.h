#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
static char ch;
static const int nameL = 45, nameK = 7, nameD = 10;
struct ABONENT {
	int number;
	char F[nameL];
	char I[nameL];
	char O[nameL];
	char kafedr[nameK];
	int group;
	char perereg[2];
	char pol[5];
	char dolznost[nameD];
	char knigi[2];
	int data[3];
	int god;
};
class Node
{
	int field;
	class Node* ptr;
	friend class List;
	ABONENT inf;
};

class List
{
	Node* head; // ������ ������
	int count = 0; // ���������� ����� ������
	Node* Prev(Node*); // ������� � ����������� ����
	friend class Node;
public:
	List() { head = NULL; } //  ������������� ������
	int getCount() { return count; } // ��������� ���������� ����� ������
	bool isEmpty() { return head == NULL; }  // ��������, ���� �� ������
	ABONENT getValue(Node* p) { return p->inf; } // ��������� �������� ���� ������
	void setValue(Node* p, int val) { p->field = val; } //��������� �������� ���� ������
	Node* getFirst() { return head; } // ��������� ��������� ���� ������
	Node* getLast();			// ��������� ���������� ���� ������
	void Clear();				// ������� ������
	Node* Next(Node*);			// ������� � ���������� ����
	Node* Add(ABONENT abonent, Node*);// ���������� ���� ������
	Node* Delete(Node*);		// �������� ���� ������
	ABONENT Print(int a);		//����� �������� ����� ������
	void Swap(Node*, Node*);	// ����������� ���� �����
	void SortByName();          //���������� �� �����
	bool SortByPerereg(int j);		//���������� �� ����������� ���������������
	bool SortByDolg(string kafedra, int j);	//���������� �� ��������� �������
	float Sotrud();			//���-�� �����������
	float Stud();             //���-�� ���������
	int SeekByNum(int number);	//����� �� ������ ������
	void WriteFile();			//���������� � ����
	void Readfile(char* z); // ������ �� �����
};