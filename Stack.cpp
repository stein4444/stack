#include"Stack.h"


template<class T_type>
Stack<T_type>::Stack(int size )
{
    arr = new T_type[size];
    capacity = size;
    top = -1;
}

template<class T_type>
Stack<T_type>::~Stack()
{
    delete[] arr;
}

template<class T_type>
void Stack<T_type>::Push(T_type element)
{
    if (IsFull())
        return 0;
    arr[++top] = element;
}


template<class T_type>
T_type Stack<T_type>::Pop()
{
    if (IsEmpty())
		return 0; 
    return arr[top--];
}

template<class T_type>
int Stack<T_type>::GetCount() const
{
	return top + 1;
}

template<class T_type>
T_type Stack<T_type>::peek()
{
	if (!IsEmpty())
		return arr[top];
}

template<class T_type>
bool Stack<T_type>::IsEmpty() const
{
	return top == -1   ;
}

template<class T_type>
bool Stack<T_type>::IsFull() const
{
	return top == capacity - 1;
}


	template<class T_type>
	bool Stack<T_type>::checkString(T_type expression)
	{
        Stack other;
        for (auto ch : expression) {
            switch (ch) {
            case '(':
            case '[': 
            case '{': 
                other.Push(ch);
                break;
            case ')': 
                if (other.IsEmpty() || other.GetCount() != '(') return false;
                other.Pop();
                break;
            case ']': 
                if (other.IsEmpty() || other.GetCount() != '[') return false;
                other.Pop();
                break;
            case '}': 
                if (other.IsEmpty() || other.GetCount() != '{') return false;
                other.Pop();
                break;
            }
        }
        return other.IsEmpty(); 
	}

	template<class T_type>
void Stack<T_type>::check(T_type expression)
{
    if (checkString(expression)) {
        cout << "Correct arithmetic expression" << endl;
        cout << expression << endl;
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    cout << expression << endl;
	}

}
