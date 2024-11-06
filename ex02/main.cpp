#include "iostream"

using std::cout;
using std::string;

int main()
{
	string f = "HI THIS IS BRAIN";
	string *stringPTR = &f;
	string &stringREF = f;

	cout << &f << "\n";
	cout << stringPTR << "\n";
	cout << &stringREF << "\n";
	cout << f << "\n";
	cout << *stringPTR << "\n";
	cout << stringREF << "\n";
}