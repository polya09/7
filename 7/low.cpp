#include"Header.h"

/*Создать очередь из вещественных чисел.Определить минимальный элемент очереди.
Организовать просмотр данных*/

struct List {
	double value;
	List* next;
};

List* head = NULL;
List* tail = NULL;

void push(double val);
void print();
double tmp = 0;

void low()
{
	push(5);
	tmp = tail->value;
	push(-4);
	push(15);
	push(67);
	print();
}

void push(double val)
{
	if (head != NULL)
	{
		tail->next = new List();
		tail->next->value = val;
		tail = tail->next;
		tail->next = NULL;
	}
	else
	{
		head = new List();
		head->value = val;
		head->next = NULL;
		tail = head;
	}
}

void print()
{
	cout << "Data in the queue:\t";
	for (List* temp = head; temp != NULL; temp = temp->next)
	{
		cout << temp->value << "\t";
		if (temp->next != NULL)
		{
			if (temp->next->value < tmp)
				tmp = temp->next->value;
		}
	}
	cout << "\nMin:\t" << tmp << endl;
}
