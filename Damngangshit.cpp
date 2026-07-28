//PSP project Student A – User/Record Management Module 
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector>

using namespace std;

struct Customer {
    string id;
    string name;
    string phone;
    string petName;
    string petType;
};

vector<Customer> customerList;

void addCustomer() {
    Customer newCustomer;
    cout << "Enter Customer ID: ";
    cin >> newCustomer.id;
    cout << "Enter Customer Name: ";
	cin.ignore(); // Clear the input buffer
	cin;getline(cin, newCustomer.name); // Get the whole line for name
    cout << "Enter Customer Phone: ";
    cin >> newCustomer.phone;
    cout << "Enter Pet Name: ";
    cin.ignore(); // Clear the input buffer
	cin;getline(cin, newCustomer.petName); // Get the whole line for pet name
    cout << "Enter Pet Type: ";
    cin >> newCustomer.petType;
    customerList.push_back(newCustomer);
}

//test only :if under main menu

int main() {
    int choiceMainMenu;
    do {
        cout << setfill('=') << setw(50) << "" << endl;
        cout << setfill(' ') << setw(46) << "Welcome to the Pet Grooming Booking System" << endl;
        cout << setfill('=') << setw(50) << "" << endl;
        cout << "\nPress 7 to get to User/Record Management Module" << endl;

        cin >> choiceMainMenu;
        switch (choiceMainMenu) {
        case 7:
            cout << "\nYou are now in the User/Record Management Module\n" << endl;
            break;
        default:
            cout << "Invalid input. Please try again." << endl;
            break;
        }
    } while (choiceMainMenu != 7);



    int choiceRMM;
    do {
        cout << setfill('=') << setw(50) << "" << endl;
        cout << setfill(' ') << setw(40) << "User/Record Management Module" << endl;
        cout << setfill('=') << setw(50) << "" << endl;
        cout << "1. Add Record \n2. Update Record \n3. Delete Record" << endl;
        cout << "4.Search Record \n5.Display All Records" << endl;
        cout << "\nPlease enter your choice: ";

        cin >> choiceRMM;

        switch (choiceRMM) {
        case 1:
            addCustomer();
            break;
        default:
            cout << "Invalid input. Please try again." << endl;
            break;
        }
    } while (choiceRMM != 1);

    return 0;
}
