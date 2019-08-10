// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
using namespace std;

// 2. POINTERS - LVL2
/*
	// Write a program to reverse the digits a number using pointers. 
*/
void swap(int *k)
{
	int var = 0;
	int *p = &var;

	while (*k != 0) {
		*p = (*p)* 10 + (*k) % 10;
		*k = *k / 10;
	}
	*k = *p;
}

int main() {
	int temp;
	cin >> temp;
	int *x = &temp;
	
	swap(x);
	cout << *x;
}

// 1. POINTERS - LVL2
/*
	// Write a program to find the factorial of a number using pointers.
void factorial(int *var, int contor) {
	*var = 1;

	if (contor == 0)
		return;
	else
	{
		while (contor != 1) {
			*var = *var * contor;
			--contor;
		}
	}

}

int main() {
	unsigned int n;
	cin >> n;
	int temp = 1;
	int *x = &temp;

	factorial(x, n);
	cout << *x ???

	return 0;
}
*/

// 6. POINTERS - LVL1
/*
	//Write a program to find out the greatest and the smallest among three numbers using pointers.

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (*(&a) > *(&b) )
	{
		if (*(&a) > *(&c))
			cout << a;
		else
			cout << c;
	}
	else
	{
		if (*(&b) > *(&c))
			cout << b;
		else
			cout << c;
	}
}
*/

// 5. POINTERS - LVL1
/*
	//Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function. 

void print(int *a)
{
	cout << *a << "\n";
}

int main()
{
	int x;
	cout << "Enter a number\n";
	cin >> x;
	print(&x);
	return 0;
}
*/

// 4. POINTERS - LVL1
/*
	//Write a program to print a number which is entered from keyboard using pointer. 
int main()
{
	int x;
	cout << "Enter a number\n";
	cin >> x;
	cout << *(&x) << "\n";
	return 0;
}
*/

// 3. POINTERS - LVL1
/*
	//Write a program to print the value of the address of the pointer to a variable whose value is input from user

int main() {
	int x;
	int *ptr = &x;
	cin >> x;

	cout << "Value:" << *ptr;
	return 0;
}
*/

// 2. POINTERS LVL1
/*	
	// Write a program to print the address of the pointer to a variable whose value is input from user. 
int main() {
	int x;
	int *ptr = &x;
	cin >> x;
	
	cout << "Adress:" << ptr;
	return 0;
}
*/

// 1. POINTERS - LVL1
/* //Write a program to print the address of a variable whose value is input from user
int main()
{
	int x;
	cin >> x;
	cout << "Adress:" << &x;
	return 0;
}
*/
