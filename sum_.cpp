#include <iostream>
#include <string>

int main()
{
    std::string user_name;
    int first_number, second_number, result;
    std::cout << "Please enter your name: ";
    std::cin >> user_name;
    std::cout << "Please enter two numbers: ";
    std::cin >> first_number >> second_number;
    result = first_number + second_number;
    std::cout << "Dear " << user_name << ", " << "sum of " << first_number << " and "
    << second_number << " is " << result << "." << std::endl;

    return 0;
}

