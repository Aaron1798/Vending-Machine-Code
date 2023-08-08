#include <iostream>

using namespace std;

int main()
{

    int choice = 0;
    string decide;
    double x;
    double water, candy, chips, soda;

    do
    {
        cout << "Pick an item from the vending machine" << endl;

        cout << " " << endl;

        cout << " Water(1) \n Candy(2) \n Chips(3) \n Soda(4)\n";
        cout << "---------" << endl;
        cout << ">>> "; 
        cin >> choice;

        while (choice>4 || choice<1)
        {
            cout << "What you have choosen is not an option" << endl;
            cout << "Please make a proper selection" << endl;
            cout << " " << endl;
            cout << " Water(1) \n Candy(2) \n Chips(3) \n Soda(4)\n";
            cout << "---------" << endl;
            cout << ">>> ";
            cin >> choice;
        }

        cout << "You have chosen: ";


        switch (choice)
        {
        case 1:
            cout << "water" << endl;
            cout << "That will be $1.25" << endl;
            water = 1.25;
            cout << "please enter the legal tender" << endl;
            cin >> x;
            while (x < 1.25)
            {
                cout << "INSUFFICIENT FUNDS" << endl;
                cout << "Please enter the amount of $1.25" << endl;
                cin >> x;
            }
            if (x > 1.25)
            {
                cout << "Hear is your change" << endl;
                cout << x - water << endl;
            }
            else (x == 1.25);
            {
                cout << "thank you enjoy" << endl;
            }
            break;


        case 2:
            cout << "Candy" << endl;
            cout << "That will be $0.75" << endl;

            candy = 0.75;
            cout << "please enter the legal tender" << endl;
            cin >> x;
            while (x < 0.75)
            {
                cout << "INSUFFICIENT FUNDS" << endl;
                cout << "Please enter the amount of $0.75" << endl;
                cin >> x;
            }
            if (x > 0.75)
            {
                cout << "Hear is your change" << endl;
                cout << x - candy << endl;
            }
            else (x == 0.75);
            {
                cout << "thank you enjoy" << endl;
            }
            break;

        case 3:
            cout << "Chips" << endl;
            cout << "That will be $1.75" << endl;

            chips = 1.75;
            cout << "please enter the legal tender" << endl;
            cin >> x;
            while (x < 1.75)
            {
                cout << "INSUFFICIENT FUNDS" << endl;
                cout << "Please enter the amount of $1.75" << endl;
                cin >> x;
            }
            if (x > 1.75)
            {
                cout << "Hear is your change" << endl;
                cout << x - chips << endl;
            }
            else (x == 1.75);
            {
                cout << "thank you enjoy" << endl;
            }
            break;

        case 4:
            cout << "Soda" << endl;
            cout << "That will be $1.50" << endl;

            soda = 1.50;
            cout << "please enter the legal tender" << endl;
            cin >> x;
            while (x < 1.50)
            {
                cout << "INSUFFICIENT FUNDS" << endl;
                cout << "Please enter the amount of $1.50" << endl;
                cin >> x;
            }
            if (x > 1.50)
            {
                cout << "Hear is your change" << endl;
                cout << x - soda << endl;
            }
            else (x == 1.50);
            {
                cout << "thank you enjoy" << endl;
            }
            break;
        }

        cout << "  " << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Would you like another item (yes or no)? ";
        cin >> decide;
    } while (decide == "Yes" || decide == "yes" || decide == "Y" || decide == "y");

    cout << "  " << endl;
    cout << "_____________________" << endl;
    cout << "Here is your purchase" << endl;
    cout << "Have a good day" << endl;

    return 0;
}