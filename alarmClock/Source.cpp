#include <iostream>

using namespace std;

int main() {

    int weekday;
    cout << "----Alarm Application---- " << endl;
    cout << "Enter a day number starting 0 as a Sunday to 6 as Saturday : ";
    cin >> weekday;
    if (weekday >= 6 || weekday <= 0) {
        cout << endl << "Please enter weekday number between 0-6.";
        cin >> weekday;
        cout << "Are you on a vacation?(y/n)";
        char choice;
        cin >> choice;
        if (choice == 'y')
            cout << "Alarm set at 11:00 am on";
        else if (choice == 'n')
            cout << "Alarm set at 7:00 am on";

        if (weekday == 0) {

            cout << "Sunday";

        }
        else if (weekday == 1) {

            cout << "Monday";

        }
        else if (weekday == 2) {

            cout << "Tuesday";

        }
        else if (weekday == 3) {

            cout << "Wednesday";

        }
        else if (weekday == 4) {

            cout << "Thursday";

        }
        else if (weekday == 5 && choice == 'y') {

            cout << "Alarm off, It is a weekend vacation";

        }
        else if (weekday == 6 && choice == 'y') {

            cout << "Alarm off, It is a weekend vacation";

        }
        else {

            cout << endl << "Please enter weekday number between 0-6.";
        }
    }
        
    else 
        cout << "Are you on a vacation?(y/n)";
        char choice;
        cin >> choice;
        if (choice == 'y')
            cout << "Alarm set at 11:00 am on";
        else if (choice == 'n')
            cout << "Alarm set at 7:00 am on"; 

 
        ;    if (weekday == 0) {

            cout << "Sunday";

        }
        else if (weekday == 1) {

            cout << "Monday";

        }
        else if (weekday == 2) {

            cout << "Tuesday";

        }
        else if (weekday == 3) {

            cout << "Wednesday";

        }
        else if (weekday == 4) {

            cout << "Thursday";

        }
        else if (weekday == 5 && choice == 'y') {

            cout << "Alarm off, It is a weekend vacation";

        }
        else if (weekday == 6 && choice == 'y') {

            cout << "Alarm off, It is a weekend vacation";

        }
        else {

            cout << endl << "Please enter weekday number between 0-6.";
        };
int loop();
      while (true) // infinite loop
    {
        std::cout << "Enter 0 to exit or 2 to continue: ";
        int num{};
        std::cin >> num;

        // exit loop if user enters 0
        if (num == 0)
            break;
    }

    std::cout << "We're out!\n";

    return 0;
};



    
