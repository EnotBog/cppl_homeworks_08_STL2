#include <windows.h>
#include <locale.h>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <list>
#include "print_collection.h"



int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };

	std::list<std::string> test_list = { "one", "two", "three", "four" };

	std::set<std::string> test_set = { "one", "two", "three", "four" };

	print_container(test_list);

	print_container(test_set);

	print_container(test_vector);
}	
