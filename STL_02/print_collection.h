#pragma once


template<typename T>
const void print_container(const T& a)
{
	for (auto it = a.cbegin(); it < a.cend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

template<typename T>
const void print_container(const std::list<T>& a)
{
	for (auto it = a.cbegin(); it != a.cend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

template<typename T>
const void print_container(const std::set<T>& a)
{
	for (auto it = a.cbegin(); it != a.cend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
}


