#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // for setprecision
#include <ctime> // for date and time

using namespace std;

struct Person {
    string name;
    double totalExpenses = 0.0; // Total expenses for the person
};

void updateFile(const vector<Person>& people, ofstream& outFile);
void splitBillEvenly(double totalBill, int numPeople, vector<Person>& people);
void addExpensesForPerson(vector<Person>& people);

int main() {
    vector<Person> people; // Vector to store people's expenses

    cout << "Welcome to the Bill Splitter Program!" << endl;

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Split bill evenly" << endl;
        cout << "2. Add expenses for a person" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double totalBill;
                int numPeople;
                cout << "Enter the total bill amount: $";
                cin >> totalBill;
                cout << "Enter the number of people to split the bill: ";
                cin >> numPeople;
                splitBillEvenly(totalBill, numPeople, people);
                break;
            }
            case 2:
                addExpensesForPerson(people);
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

string getCurrentDateTime() {
    time_t now = time(0);
    tm* timeinfo = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    return buffer;
}

void updateFile(const vector<Person>& people, ofstream& outFile) {
    if (!outFile.is_open()) {
        cout << "Unable to open file." << endl;
        return;
    }

    for (const Person& person : people) {
        outFile << "Name: " << person.name << ", Total Expenses: $" << person.totalExpenses;
        outFile << ", Entry Time: " << getCurrentDateTime() << endl;
        outFile<<endl<<endl;
    }
    outFile.close();
    cout << "Data written to bill_data.txt successfully." << endl;
}

void splitBillEvenly(double totalBill, int numPeople, vector<Person>& people) {
    if (numPeople <= 0) {
        cout << "Number of people should be greater than zero." << endl;
        return;
    }

    double share = totalBill / numPeople;

    cout << "Each person owes: $" << share << endl;

    for (int i = 0; i < numPeople; ++i) {
        Person person;
        cout << "Enter the name of person " << i + 1 << ": ";
        cin >> person.name;
        person.totalExpenses += share; // Add the share as the expense
        people.push_back(person);
    }

    ofstream outFile("bill_data.txt", ios::app); // Append mode
    updateFile(people, outFile);
}

void addExpensesForPerson(vector<Person>& people) {
    string name;
    double expense;

    cout << "Enter the name of the person to add expenses for: ";
    cin >> name;

    bool found = false;
    for (Person& person : people) {
        if (person.name == name) {
            found = true;
            cout << "Enter the expense for " << name << ": $";
            cin >> expense;
            person.totalExpenses += expense; // Add the entered expense
            cout << "Expense added successfully for " << name << "." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Person not found. Adding new person." << endl;
        cout << "Enter the expense for " << name << ": $";
        cin >> expense;
        Person newPerson;
        newPerson.name = name;
        newPerson.totalExpenses += expense;
        people.push_back(newPerson);
        cout << "New person added with expense." << endl;
    }

    ofstream outFile("bill_data.txt", ios::app); // Append mode
    updateFile(people, outFile);
}
