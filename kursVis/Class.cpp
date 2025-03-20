#include "pch.h"
#include "Class.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace kursVis;
 List list;

Node* List::Add(ABONENT abonent, Node* node = NULL)
{
	Node* elem = new Node();
	elem->inf = abonent;
	count++;
	if (node == NULL) // Добавление нового корня
	{
		if (head == NULL) {
			elem->ptr = NULL;
			head = elem;
		}
		else {
			elem->ptr = head;
			head = elem;
		}
		return elem;
	}
	elem->ptr = node->ptr; //  Добавление узла после текущего
	node->ptr = elem;
	return elem;
}

Node* List::Delete(Node* node)
{
	if (node == NULL) { return NULL; } // В списке нет узлов
	count--;
	if (node == head)	// Удаление корневого узла
	{
		head = node->ptr;
		delete node;
		return head;
	}
	Node* prev = Prev(node); // Удаление промежуточного узла
	prev->ptr = node->ptr;
	delete node;
	return prev;
}

ABONENT List::Print(int a)
{
	Node* p = head;
	int k = 0;
	while (k != a) { p = Next(p); k++; }
	return p->inf;
}

void List::Clear()
{
	class Node* p = head;
	if (p == NULL) return;
	do {
		Node* d = p;
		p = Next(p);
		delete d;
	} while (p != NULL);
	count = 0;
	head = NULL;
}

Node* List::getLast()
{
	Node* p = head;
	while (Next(p) != NULL)
		p = Next(p);
	return p;
}

Node* List::Next(Node* node)
{
	if (isEmpty()) return NULL;
	return node->ptr;
}

Node* List::Prev(Node* node)
{
	if (isEmpty()) return NULL;
	if (node == head) return NULL;
	Node* p = head;
	while (p->ptr != node)
		p = p->ptr;
	return p;
}

void List::Swap(Node* node1, Node* node2)
{
	if (node1 == NULL || node2 == NULL) return;
	if (node1 == node2) return;
	if (node2->ptr == node1)
	{
		Node* p = node1;
		node1 = node2;
		node2 = p;
	}
	Node* prev1 = Prev(node1);
	Node* prev2 = Prev(node2);
	Node* next1 = Next(node1);
	Node* next2 = Next(node2);
	if (next1 == node2)
	{
		if (prev1 != NULL)
			prev1->ptr = node2;
		else
			head = node2;
		node2->ptr = node1;
		node1->ptr = next2;
		return;
	}
	if (prev1 != NULL)
		prev1->ptr = node2;
	else
		head = node2;
	if (prev2 != NULL)
		prev2->ptr = node1;
	else
		head = node1;
	node2->ptr = next1;
	node1->ptr = next2;
}

void List::SortByName() 
{
	for (int l = 0; l < count; l++) {
		for (int j = 0; j < count; j++) {
			Node* p1 = getLast(), * p2 = Prev(p1);
			for (int i = 0; i < count-1; i++) {
				if (strcmp(p1->inf.F, p2->inf.F) < 0) {
					Swap(p2, p1);
				}
				else {
					if (strcmp(p1->inf.F, p2->inf.F) == 0) {
						if (strcmp(p1->inf.I, p2->inf.I) < 0) {
							Swap(p2, p1);
						}
						else {
							if (strcmp(p1->inf.I, p2->inf.I) == 0) {
								if (strcmp(p1->inf.O, p2->inf.O) < 0) {
									Swap(p2, p1);
								}
							}
						}
					}
				}
				p1 = Prev(p1);
				p2 = Prev(p2);
			}	
		}
	}

}
	
bool List::SortByPerereg(int j)
{
	Node* p = head;
	int i = 0;
	while (i != j) {
		p = Next(p);
		i++;
	}
	if (strcmp(p->inf.perereg, "N") == 0)
	{
		return true;
	}
}

bool List::SortByDolg(string kafedra, int j)
{
	Node* p = head;
	char kaf[nameK];
	char* cstr = new char[kafedra.size()];
	strcpy(cstr, kafedra.c_str());
	int i = 0;
	while (i != j) {
		p = Next(p);
		i++;
	}
	if ((strcmp(p->inf.kafedr, cstr) == 0) && (strcmp(p->inf.knigi, "Y") == 0))
	{
		return true;
	}
}

float List::Sotrud() {
	char dolznost[nameD] = "сотрудник";
	Node* p = head;
	float sotrKol = 0;
	do {
		if (strcmp(p->inf.dolznost, dolznost) == 0) { sotrKol++; }
		p = Next(p);
	} while (p != NULL);
	return sotrKol;
}

float List::Stud()
{
	char dolznost[nameD] = "студент";
	Node* p = head;
	int i = 0;
	float studKol = 0;
	do {
		if (strcmp(p->inf.dolznost, dolznost) == 0) { studKol++; }
		i++;
		p = Next(p);
	} while (p != NULL);
	return studKol;
}

int List::SeekByNum(int number) {
	Node* p = head;
	int i = 0;
	do {
		if (p->inf.number == number) { return i; }
		i++;
		p = Next(p);
	} while (p != NULL);
}

void List::Readfile(char* z)
{
	try {
		Node* node = new Node();
		FILE* f = fopen(z, "r");
		list.Clear();
		int i = 0;
		while (!feof(f))
		{
			ABONENT abonent;
			ch = fscanf(f, "%u", &abonent.number);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.F);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.I);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.O);
			std::fgetc(f);
			ch = fscanf(f, "%u", &abonent.god);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.pol);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.kafedr);
			std::fgetc(f);
			ch = fscanf(f, "%u", &abonent.group);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.dolznost);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.perereg);
			std::fgetc(f);
			ch = fscanf(f, "%s", abonent.knigi);
			std::fgetc(f);
			ch = fscanf(f, "%u", &abonent.data[0]);
			std::fgetc(f);
			ch = fscanf(f, "%u", &abonent.data[1]);
			std::fgetc(f);
			ch = fscanf(f, "%u", &abonent.data[2]);
			while (std::fgetc(f) != '\n' && !feof(f));
			if (ch != EOF) list.Add(abonent);
			i++;
		}
		std::fclose(f);
	}
	catch (...) {
		MessageBox::Show("Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void List::WriteFile()
{
	Node* p = head;
	FILE* f = fopen("buff.txt", "w");
	for (int i = 1; i <= count; i++)
	{
		ABONENT abonent = p->inf;
		char* wF = abonent.F;
		char* wI = abonent.I;
		char* wO = abonent.O;
		char* wpol = abonent.pol;
		char* wknigi = abonent.knigi;
		char* wdolznost = abonent.dolznost;
		char* wkafedr = abonent.kafedr;
		char* wperereg = abonent.perereg;
		unsigned int wnum = abonent.number;
		unsigned int wgroup = abonent.group;
		unsigned int wgod = abonent.god;
		unsigned int wadata0 = abonent.data[0];
		unsigned int wadata1 = abonent.data[1];
		unsigned int wadata2 = abonent.data[2];
		fprintf(f, "%u %s %s %s %u %s %s %u %s %s %s %u %u %u\n", wnum, wF, wI, wO, wgod, wpol, wkafedr, wgroup, wdolznost, wperereg, wknigi, wadata0, wadata1, wadata2);
		p = Next(p);
	}
	fclose(f);
}
