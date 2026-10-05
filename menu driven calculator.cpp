#include <iostream>
using namespace std;

class CalculatorMenu
{
private:
    int choice;
    float num1, num2;

public:
    void displayMenu()
    {
        cout << "\n----- MENU DRIVEN CALCULATOR -----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
    }

    void getChoice()
    {
        cout << "Enter your choice: ";
        cin >> choice;
    }

    void getNumbers()
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }
};

int main()
{
    CalculatorMenu menu1, menu2;

    menu1.displayMenu();
    menu1.getChoice();
    menu1.getNumbers();

    cout << "\nSecond Calculator Menu\n";

    menu2.displayMenu();
    menu2.getChoice();
    menu2.getNumbers();

    return 0;
}
