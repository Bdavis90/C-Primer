// C++ Primer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include "Sales_item.h"
#include <vector>
#include <fstream>

std::string global_str;
constexpr int size() {
	return 10;
}
int main()
{
#pragma region Const Pointer 2.4.2
#if 0
	char a = 'a';
	char b = 'b';
	char *const constptr = &a; // const pointer
	//const char *constptr = &a; // const pointer
	*constptr = 1; // can be dereferenced and value changed but not reference
	//char const *ptrToConst = &a; // pointer to a const
	const char *ptrToConst = &a; // pointer to a const
	ptrToConst = &b; // cant dereference and change value but can change reference
	const char *const constPtrToConst = &a; // const pointer to a const. Cant change reference or value
	//char const *const constPtrToConst = &a; // const pointer to a const. Cant change reference or value
	std::cout << *ptrToConst << std::endl;

#endif // 0
#pragma endregion

#pragma region Constant Expressions 2.4.4
#if 0
	//an expression whose value cannot change and that can be evaluated at compile time
	constexpr int mf = 20; // 20 is const expr
	constexpr int limit = mf + 1; // mf + 1 is const expr
	constexpr int sz = size(); // function must be a constexpr

	const int* p = nullptr; // pointer to a const
	constexpr int* p = nullptr; // const pointer
#endif // 1

#pragma endregion

#pragma region Type Aliases 2.5.1
	typedef double wages; // wages is a synonym for double
	typedef wages base, * p; // base is a synonym for double, p for double*
	
	// Alias declaration
	using SI = Sales_item; // SI is a synonym for Sales_item
#pragma endregion

#pragma region decltype 2.5.3
	// Type specifier that deduces the type of a variable or an expression.
	decltype(size()) sum;
	const int ci = 0;
	const int& cj = ci;
	decltype(ci) x = 0; // const int
	decltype(cj) y = x; // const int reference

	int i = 42;
	int* a = &i;
	int& r = i;
	decltype(r + 0) b; // int; r + 0 to get value type from reference
	decltype(*a) c = r; // int& must be initialized
	decltype((i)) d = i; // int& must be initialized; always a reference.
#pragma endregion


	system("pause");
	return 0;

}

