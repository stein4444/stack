#pragma once
#include<iostream>
#include<string>
using namespace std;
#define SIZE 100
template<class T_type>

class  Stack
{
private:
	T_type* arr;
	int top;
	int capacity;



public:
	Stack(int size = SIZE) ;
	

	~Stack();

	void Push(T_type element);

	T_type Pop();

	int GetCount()const;

	T_type peek();
	bool IsEmpty()const;

	bool IsFull()const;


	bool checkString(T_type expression);
	void check(T_type expression);
};
