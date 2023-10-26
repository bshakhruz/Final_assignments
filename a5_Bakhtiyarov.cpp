// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool run = true;

    int number;
    int instruction;

    cout << "Enter the number: ";
    cin >> number;


    while (run) {
        int reversed = 0;
        int remainder;
        int total = 0;
        int armstrong = 0;
        int temp = number;

        cout << "Menus" << endl;
        cout << "Enter 1, 2, 3, 4, 5: " << endl;
        cin >> instruction;

        while (temp != 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
            armstrong += pow(remainder, 3);
            total += remainder;
        }

        switch (instruction) {
        case 1:
            // Reverse the number
            cout << "The reverse number is " << reversed << endl;
            break;
        case 2:
            if (number == reversed) {
                cout << "The number is palindrome" << endl;
            }
            else {
                cout << "The number is not palindrome" << endl;
            }
            break;
        case 3:
            if (armstrong == number) {
                cout << "The number is armstrong" << endl;
            }
            else {
                cout << "The number is not armstrong" << endl;
            }
            break;
        case 4:
            cout << "Sum is: " << total << endl;
            break;
        case 5:
            run = false;
            break;
        }

        cout << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
