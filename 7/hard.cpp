#include"Header.h"

void hard() {

	srand(time(0));
	queue<int> q;

	int* p1;
	int* p2;

	cout << "Queue:\n";

	//���������� ��������� � ������� � ����� �� �� �����
	for (int i = 0; i < rand() % 8 + 3; i++)
	{
		q.push(rand() % 30);
		cout << q.back() << "\t";
	}

	//����� ���������� �� ������ � ��������� ������� �������
	p1 = &(q.front());
	p2 = &(q.back());
	cout << "\nQueue first element pointer: " << p1 << "\n";
	cout << "Queue last element pointer: " << p2 << "\n";

	//����� ���������� ��������� � �������
	cout << "\nNumber of elements: " << q.size() << "\n";

	//���� ������ ������� ������� ��� ������ 
	if (q.front() % 2 == 0) cout << "\nFirst queue element is already even\n";
	else //����� ������ �������
	{
		while (!q.empty() && q.front() % 2 != 0)
		{
			cout << "Extracting current front element: " << q.front() << "\n";
			q.pop();
		}
	}

	//����� ���������� �� ������ � ��������� ������� ����������� �������
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