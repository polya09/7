#include"Header.h"

void hard() {

	/*Даны указатели Р1 и Р2 на начало и конец непстой очереди. Извлекать из очереди элементы, 
	пока значение начального элемента очереди не станет четным, и выводить значения извлеченных
	элементов (если очередь не содержит элементов с четными значениями, то извлечь все ее элементы)
	Вывести также новые адреса начала и конца очереди (для пустой очереди дважды вывести nil). Посе 
	извлечения элементов из очереди освобождать память, которую они заняли.*/

	srand(time(0));
	queue<int> q;

	int* p1;
	int* p2;

	cout << "Queue:\n";

	//добавление элементов в очередь и вывод их на экран
	for (int i = 0; i < rand() % 8 + 3; i++)
	{
		q.push(rand() % 30);
		cout << q.back() << "\t";
	}

	//вывод указателей на первый и последний элемент очереди
	p1 = &(q.front());
	p2 = &(q.back());
	cout << "\nQueue first element pointer: " << p1 << "\n";
	cout << "Queue last element pointer: " << p2 << "\n";

	//вывод количества элементов в очереди
	cout << "\nNumber of elements: " << q.size() << "\n";

	//если первый элемент очереди уже четный 
	if (q.front() % 2 == 0) cout << "\nFirst queue element is already even\n";
	else //иначе начать очистку
	{
		while (!q.empty() && q.front() % 2 != 0)
		{
			cout << "Extracting current front element: " << q.front() << "\n";
			q.pop();
		}
	}

	//вывод указателей на первый и последний элемент обновленной очереди
	if (q.empty())
	{
		cout << "\nQueue first element pointer: nil\n";
		cout << "Queue last element pointer: nil\n";
	}
	else
	{
		p1 = &(q.front());
		p2 = &(q.back());
		cout << "\nQueue first element pointer: " << p1 << "\n";
		cout << "Queue last element pointer: " << p2 << "\n";
	}

	system("pause");
}