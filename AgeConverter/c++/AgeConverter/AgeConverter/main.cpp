#include <iostream>
#include <string>

int age2year(int age = 0)
{
	const int currentYear2016 = 2016;
	return currentYear2016 - age;
}

int year2age(int year = 0)
{
	const int currentYear2016 = 2016; //easier way; (return 2016 - year)
	return currentYear2016 - year;

}

int main()
{  // https://goo.gl/8b0a7M ; its considered bad practice to use, using namespace std;
	int age;
	int year;

	std::string choice; 

	std::cout << "Please note this give's you an estimation on the current year or age that \n"
			<< "they are. Also Note if the person is over 2000 this will not work as of right now.\n" 
			<< std::endl;

	std::cout << "Please enter year2age or age2year depending on what you wish to convert." << std::endl;

	//Let user enter a decide on what they wish to convert.
	std::cin >> choice;

	if (choice == "year2age")
	{
		std::cout << "Please enter a year to be converted to an estimated year of birth.\n";
		std::cin >> year;
		std::cout << year2age(year) << std::endl;
	}
	else if (choice == "age2year")
	{
		std::cout << "Please enter a age to be converted to an estimated age of birth.\n";
		std::cin >> age;
		std::cout << age2year(age) << std::endl;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}

	system("PAUSE"); // Not supported on mac
	return 0;
}
