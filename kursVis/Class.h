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
	Node* head; // Корень списка
	int count = 0; // Количество узлов списка
	Node* Prev(Node*); // Переход к предыдущему узлу
	friend class Node;
public:
	List() { head = NULL; } //  Инициализация списка
	int getCount() { return count; } // Получение количества узлов списка
	bool isEmpty() { return head == NULL; }  // Проверка, пуст ли список
	ABONENT getValue(Node* p) { return p->inf; } // Получение значения узла списка
	void setValue(Node* p, int val) { p->field = val; } //Установка значения узла списка
	Node* getFirst() { return head; } // Получение корневого узла списка
	Node* getLast();			// Получение последнего узла списка
	void Clear();				// Очистка списка
	Node* Next(Node*);			// Переход к следующему узлу
	Node* Add(ABONENT abonent, Node*);// Добавление узла списка
	Node* Delete(Node*);		// Удаление узла списка
	ABONENT Print(int a);		//Вывод значений узлов списка
	void Swap(Node*, Node*);	// Взаимообмен двух узлов
	void SortByName();          //Сортировка по имени
	bool SortByPerereg(int j);		//Сортировка по непрошедшим перерегистрацию
	bool SortByDolg(string kafedra, int j);	//Сортировка по должникам кафедры
	float Sotrud();			//кол-во Сотрудников
	float Stud();             //кол-во Студентов
	int SeekByNum(int number);	//Поиск по номеру билета
	void WriteFile();			//Сохранение в файл
	void Readfile(char* z); // Чтение из файла
};