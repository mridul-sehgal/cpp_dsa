#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // for setprecision
#include <ctime>   // for date and time

using namespace std;

struct Person {
    string name;
    double totalExpenses = 0.0; // Total expenses for the person
};

void updateFile(const vector<Person> &people, ofstream &outFile);
void splitBillEvenly(double totalBill, int numPeople, vector<Person> &people);
void addExpensesForPerson(vector<Person> &people);
void displayLatestEntries();
void settleBalances(vector<Person> &people);

int main() {
    vector<Person> people; // Vector to store people's expenses
    cout <<endl<<endl<< "Welcome to the Bill Splitter Program!" << endl<<endl;
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Split bill evenly" << endl;
        cout << "2. Add expenses for a person" << endl;
        cout << "3. Display latest entries" << endl;
        cout << "4. Settle balances" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            double totalBill;
            int numPeople;
            cout << endl<<"Enter the total bill amount: $";
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
            displayLatestEntries();
            break;
        case 4:
            settleBalances(people);
            break;
        case 5:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}

string getCurrentDateTime() {
    time_t now = time(0);
    tm *timeinfo = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    return buffer;
}

void updateFile(const vector<Person> &people, ofstream &outFile) {
    if (!outFile.is_open()) {
        cout << "Unable to open file." << endl;
        return;
    }
        outFile << endl<<"Entry Time: " << getCurrentDateTime() << endl;
    for (const Person &person : people) {
        outFile << "Name: " << setw(10) << left << person.name << " | Total Expenses: $" << fixed << setprecision(2) << setw(8) << right << person.totalExpenses<<endl;
    }
    outFile.close();
    cout << endl<<"Data written to bill_data.txt successfully." << endl;
}

void splitBillEvenly(double totalBill, int numPeople, vector<Person> &people) {
    cout<<endl<<"The Bill Splitter is Working";
    cout<<endl<<endl;
    if (numPeople <= 0) {
        cout << "Number of people should be greater than zero." << endl;
        return;
    }
    double share = totalBill / numPeople;
    cout << "Each person owes: $" << fixed << setprecision(2) << share << endl;
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

void addExpensesForPerson(vector<Person> &people) {
    string name;
    double expense;
    cout << "Enter the name of the person to add expenses for: ";
    cin >> name;
    bool found = false;
    for (Person &person : people) {
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

void displayLatestEntries() {
    ifstream inFile("bill_data.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file." << endl;
        return;
    }
    string line;
    cout << "Latest Entries:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

void settleBalances(vector<Person> &people) {
    string name1, name2;
    cout << "Enter the name of the first person: ";
    cin >> name1;
    cout << "Enter the name of the second person: ";
    cin >> name2;

    double balance1 = 0.0, balance2 = 0.0;
    bool found1 = false, found2 = false;

    for (const Person &person : people) {
        if (person.name == name1) {
            balance1 = person.totalExpenses;
            found1 = true;
        }
        if (person.name == name2) {
            balance2 = person.totalExpenses;
            found2 = true;
        }
    }

    if (!found1 || !found2) {
        cout << "One or both persons not found." << endl;
        return;
    }

    double diff = balance1 - balance2;
    cout << endl
         << "Settlement Details:" << endl;
    cout << "-------------------" << endl;
    if (diff > 0) {
        cout << name2 << " owes $" << fixed << setprecision(2) << abs(diff) << " to " << name1 << endl;
    } else if (diff < 0) {
        cout << name1 << " owes $" << fixed << setprecision(2) << abs(diff) << " to " << name2 << endl;
    } else {
        cout << "Balances are settled. No one owes anything." << endl;
    }
}
