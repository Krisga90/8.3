#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <fstream>

void Change(std::ostream & a, std::string b);

int main()
{
	std::cout << "Podaj swoj tekst:";
	std::string tekst;
	std::getline(std::cin,tekst);
	Change(std::cout, tekst);

	std::cin.get();
	return 0;
}





void Change(std::ostream & a, std::string b)
{
	int i = 0;
	while (b[i])
	{
		b[i]=std::toupper(b[i]);
		a << b[i]<<std::endl;
		i++;
	}
	a << b;

}