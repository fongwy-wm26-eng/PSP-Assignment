/*PSP project Student A – User / Record Management Module

Student A – User/Record Management Module 
Functions: 
• Add Record  
• Update Record  
• Delete Record  
• Search Record  
• Display All Records  

Example: 
• Customer Management  
• Member Management  
• Student Management  */

#include <iostream>
#include <iomanip>
#include <string> 
#include <vector>

using namespace std;

struct Customer {   //create a struct to store customer information
    string id;
    string name;
    string phone;
    string petName;
    string petType;
};

vector<Customer> customerList;

void addCustomer() {
	cout << "\n" << string(15, '=') << " Add Record " << string(15, '=') << endl;
    Customer newCustomer;
    cout << "Enter Customer ID: ";
    cin >> newCustomer.id;
    cout << "Enter Customer Name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, newCustomer.name); // Get the whole line for name
    cout << "Enter Customer Phone: ";
    cin >> newCustomer.phone;
    cout << "Enter Pet Name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, newCustomer.petName); // Get the whole line for pet name
    cout << "Enter Pet Type: ";
    cin >> newCustomer.petType;
    customerList.push_back(newCustomer);
}

void updateCustomer() {
    cout << "\n" << string(15, '=') << " Update Record " << string(15, '=') << endl;
    if (customerList.empty()) {
        cout << "\n[Notice] No records found in the system to update.\n" << endl;
        return;
    }
    string searchName;
    cout << "Enter Customer Name to search: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;

    for (size_t i = 0; i < customerList.size(); ++i) {
        if (customerList[i].name == searchName)
            found = true;
        char continueUpdate = 'y'
    }
}

void deleteCustomer() {
    cout << "\n" << string(15, '=') << " Delete Record " << string(15, '=') << endl;
}

void searchCustomer() {
    cout << "\n" << string(15, '=') << " Search Record " << string(15, '=') << endl;
}

void displayAllCustomers() {
    cout << "\n" << string(15, '=') << " Display All Records " << string(15, '=') << endl;
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
        cout << "1. Add Record \n2. Update Record \n3. Delete Record \n4. Search Record \n5. Display All Records" << endl;
        cout << "\nPlease enter your choice: ";

        cin >> choiceRMM;

        switch (choiceRMM) {
        case 1:
            addCustomer();
            break;
        casec2:
			updateCustomer();
			break;
		case 3:
			deleteCustomer();
			break;
		case 4:
			searchCustomer();
			break;
		case 5:
			displayAllCustomers();
			break;
        default:
            cout << "Invalid input. Please try again." << endl;
            break;
        }
    } while (choiceRMM > 5 || choiceRMM < 1);

    return 0;
}
