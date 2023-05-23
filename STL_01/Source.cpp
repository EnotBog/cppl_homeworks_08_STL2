#include <windows.h>
#include <locale.h>

#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
const void print_container(const T& a)
{
	for (auto it = a.cbegin(); it < a.cend(); ++it)
	{
		std::cout << *it;
	}
}
 

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	
	std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
	std::sort(vec.begin(),vec.end());

	auto it_unique = std::unique(vec.begin(), vec.end());

	vec.erase(it_unique, vec.end());

	print_container(vec);
}	
