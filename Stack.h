#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T_type>

class  Stack
{
private:
	T_type* arr;
	int max;
	int topIndex;



public:
	Stack() { topIndex = 0;  arr = nullptr; max = 0; };
	Stack(int topIndex)
	{
		this->topIndex = topIndex;
	};

	~Stack() = default;

	void Push(T_type element);

	T_type Pop();

	int GetCount()const;

	int peek();
	bool IsEmpty()const;

	bool IsFull()const;


	bool checkString(string expr);
	void check(string expr);
};
