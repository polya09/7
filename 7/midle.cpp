#include"Header.h"

/* Создать стек стороковых значений , для реализации используя односвязные списки.
Реализвать операции добавляя (push) и удаления (pop)  элемента из стека. Добавьте в стек строки "sdf", "1",
"ssd4", "hello" и расспечайтайте содержимое стека. Удалите 2 элемента из стека, и расспечатайте содержимое
еще раз. Найдите строку минимальной длины, принадлежащей стеку. */

struct node {
    string data;
    node* next;
};

class Stack {

private:

    node* head;

public:

    Stack() { //Конструктор по умолчанию
        head = NULL;
    }

    ~Stack() { //Деструктор
        while (head != NULL) {
            node* temp = head->next;
            delete head;
            head = temp;
        }
    }

    void push(string data) { //Функция добавления элемента в стек
        node* temp = new node;
        temp->data = data;
        temp->next = head;
        head = temp;
    }

    void pop() { //Функция удаления элемента из вершины стека
        if (head == NULL) {
            cout << "Can't delete! The stack is empty!\n";
        }
        else {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void MIN() { //Функция поиска минимальной строки
        node* temp = head;
        int min = temp->data.length();
        string str;
        while (temp != NULL)
        {
            int length = temp->data.length();
            if (length < min) {
                min = length;
                str = temp->data;
            }
            temp = temp->next;
        }
        cout << min;
    }

    void print() { //Функция вывода списка на экран
        bool flag = false;
        node* temp = head;
        cout << "Now the stack is:\n";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
            flag = true;
        }
        if (!flag) {
            cout << "The stack is empty!\n";
        }
        cout << "\n";
    }
};

void midle() {
    Stack st;
    st.push("sdf");
    st.push("1");
    st.push("ssd4");
    st.push("hello");
    st.print();
    st.pop();
    st.pop();
    st.print();
    cout << "Found min of stack elements: ";
    st.MIN();
}