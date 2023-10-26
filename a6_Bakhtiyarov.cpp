// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float rate_occupancy = 0;
    float roomsOccupied = 0;
    float totalRooms = 0;

    int num_of_rooms;
    int num_of_floors;
    int total_rooms_used = 0;
    int total_rooms_occupied = 0;
    int total_rooms_unoccupied = 0;

    cout << "How many floors the hotel has? ";

    cin >> num_of_floors;

    for (int i = 0; i < num_of_floors; i++)
    {
        if ((i + 1) == 13)
        {
            cout << "\nSkipping 13th floor."
                << endl
                << endl;
        }
        else
        {
            cout << "How many rooms does floor number ";
            cout << (i + 1) << " have? ";

            while (!(cin >> num_of_rooms) ||
                (num_of_rooms < 10))
            {
                cout << "ERROR: enter a number\n"
                    << "greater than 10: ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            totalRooms += num_of_rooms;

            cout << "How many rooms are occupied on that floor? " <<endl;

            while (!(cin >> roomsOccupied) ||
                (roomsOccupied < 1))
            {
                cout << "ERROR: enter a number\n"
                    << "greater than 10: ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            total_rooms_used += roomsOccupied;
        }


    }

    total_rooms_unoccupied = totalRooms - total_rooms_used;
    cout << "Total rooms unoccupied = "
        << total_rooms_unoccupied
        << endl;

    cout << "Total rooms used = "
        << total_rooms_used
        << endl;

    cout << "Total number of rooms = "
        << totalRooms
        << endl;

    rate_occupancy = (total_rooms_used / totalRooms) * 100;
    cout << "Occupancy rate = "
        << rate_occupancy
        << "%."
        << endl;
    return 0;
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
