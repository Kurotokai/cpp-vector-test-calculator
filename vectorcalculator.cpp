#include <iostream>
#include <vector>
#include <string>
#include <ctype.h> // Used for the stol() function, which converts a string to a integer

using std::cin;
using std::cout;
using std::vector;

int main()
{

    vector<int> numbers = {};
    double evenResult;
    double oddResult = 1;
    std::string input;
    double numInput;

    cout << "Welcome to CPP Number Calculator! \n";
    while (true) {
        cout << "Please enter your numbers. Enter stop to stop the inputs. \n";
        cin >> input;
        if (input == "stop") {
            break;
        } else {
            numInput = stoi(input);
            numbers.push_back(numInput);             
        } 
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenResult += numbers[i];
        }
        else
        {
            oddResult *= numbers[i];
        }
    } 

    cout << "You entered a total of " << numbers.size() << " numbers. \n";
    cout << "The sum of even numbers is " << evenResult << ". \n";
    cout << "The product of odd numbers is " << oddResult << ".";
}