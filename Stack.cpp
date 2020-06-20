#include"Stack.h"


template<class T_type>
void Stack<T_type>::Push(T_type element)
{
	T_type* tmp;
	tmp = arr;
	arr = new T_type[topIndex+1];
	topIndex++;
	for (int i = 0; i < topIndex - 1; i++)
	{
		arr[i] = tmp[i];
	}
		
	arr[topIndex - 1] = element;

	if (topIndex > 1)
		delete[] tmp;
	return *this;
}


template<class T_type>
T_type Stack<T_type>::Pop()
{
	if (topIndex == 0)
		return 0; 
	topIndex--;
	return arr[topIndex];
}

template<class T_type>
int Stack<T_type>::GetCount() const
{
	return topIndex;
}

template<class T_type>
int Stack<T_type>::peek()
{
	if (!IsEmpty())
		return arr[topIndex];
}

template<class T_type>
bool Stack<T_type>::IsEmpty() const
{
	return topIndex == 0;
}

template<class T_type>
bool Stack<T_type>::IsFull() const
{
	return topIndex >= topIndex;
}
