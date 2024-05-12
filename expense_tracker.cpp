#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

class Expense_tracker; // Forward declaration

class entertainment {
private:
    int choice;
    int choose;

public:
    entertainment(int c = 0, int ch = 0) : choice(c), choose(ch) {}

    void main_display();
};

class transport {
private:
    int choice;
    int choose;

public:
    transport(int c = 0, int ch = 0) : choice(c), choose(ch) {}

    void main_display();
};

class Fees {
private:
    int choice;
    int choose;

public:
    Fees(int c = 0, int ch = 0) : choice(c), choose(ch) {}

    void main_display();
};

class House_utilities {
private:
    int choice;
    int choose;

public:
    House_utilities(int c = 0, int ch = 0) : choice(c), choose(ch) {}

    void main_display();
};

class Expense_tracker {
private:
    int choice;
    float total_expense;

public:
    Expense_tracker(int c = 0, float te = 0.0) : choice(c), total_expense(te) {}

    void display();
};

void entertainment::main_display() {
    string expense_type, line;
    int amount;
    ofstream outFile("C:\\Users\\Hp\\Desktop\\fff.txt", ios::app);

    do {
        system("cls");
        cout << "1. Do you want to add expense"
             << "\n2. Do you want to remove expense"
             << "\n3. Do you want to see expense"
             << "\n4. Again see the menu"
             << "\n5. See the main menu"
             << "\npress any key to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            cout << "How many expenses do you want to add : ";
            cin >> choose;
            for (int i = 0; i < choose; i++) {
                cout << "Enter expense type " << i + 1 << ": ";
                cin.ignore();
                getline(cin, expense_type);
                cout << "Enter your amount : ";
                cin >> amount;
                outFile << expense_type << " " << amount << endl;
            }
            outFile.close();
        }

        if (choice == 2) {
            cout << "Enter the expense number you want to remove: ";
            int expenseNum;
            cin >> expenseNum;
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            ofstream tempFile("C:\\Users\\Hp\\Desktop\\temp.txt");
            int lineNum = 1;
            bool found = false;

            while (getline(inFile, line)) {
                if (lineNum != expenseNum) {
                    tempFile << line << endl;
                } else {
                    found = true;
                }
                lineNum++;
            }

            inFile.close();
            tempFile.close();

            remove("C:\\Users\\Hp\\Desktop\\fff.txt");
            rename("C:\\Users\\Hp\\Desktop\\temp.txt", "C:\\Users\\Hp\\Desktop\\fff.txt");

            if (found) {
                cout << "Expense removed successfully." << endl;
            } else {
                cout << "Invalid expense number." << endl;
            }
        }

        if (choice == 3) {
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            if (inFile.is_open()) {
                int lineNum = 1;
                while (getline(inFile, line)) {
                    cout << "Expense " << lineNum++ << ": " << line << endl;
                }
                inFile.close();
            } else {
                cout << "No expenses added yet." << endl;
            }
        }

        if (choice == 5) {
            Expense_tracker obj1;
            obj1.display(); // Display the main menu again
        }

        cout << "if you want to see menu again and perform any action then press 4"
             << " \nor any other key to exit : ";
        cin >> choice;
    } while (choice == 4);
}

void transport::main_display() {
    string expense_type, line;
    int amount;
    ofstream outFile("C:\\Users\\Hp\\Desktop\\fff.txt", ios::app);

    do {
        system("cls");
        cout << "1. Do you want to add expense"
             << "\n2. Do you want to remove expense"
             << "\n3. Do you want to see expense"
             << "\n4. Again see the menu"
             << "\n5. See the main menu"
             << "\npress any key to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            cout << "How many expenses do you want to add : ";
            cin >> choose;
            for (int i = 0; i < choose; i++) {
                cout << "Enter expense type " << i + 1 << ": ";
                cin.ignore();
                getline(cin, expense_type);
                cout << "Enter your amount : ";
                cin >> amount;
                outFile << expense_type << " " << amount << endl;
            }
            outFile.close();
        }

        if (choice == 2) {
            cout << "Enter the expense number you want to remove: ";
            int expenseNum;
            cin >> expenseNum;
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            ofstream tempFile("C:\\Users\\Hp\\Desktop\\temp.txt");
            int lineNum = 1;
            bool found = false;

            while (getline(inFile, line)) {
                if (lineNum != expenseNum) {
                    tempFile << line << endl;
                } else {
                    found = true;
                }
                lineNum++;
            }

            inFile.close();
            tempFile.close();

            remove("C:\\Users\\Hp\\Desktop\\fff.txt");
            rename("C:\\Users\\Hp\\Desktop\\temp.txt", "C:\\Users\\Hp\\Desktop\\fff.txt");

            if (found) {
                cout << "Expense removed successfully." << endl;
            } else {
                cout << "Invalid expense number." << endl;
            }
        }

        if (choice == 3) {
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            if (inFile.is_open()) {
                int lineNum = 1;
                while (getline(inFile, line)) {
                    cout << "Expense " << lineNum++ << ": " << line << endl;
                }
                inFile.close();
            } else {
                cout << "No expenses added yet." << endl;
            }
        }

        if (choice == 5) {
            Expense_tracker obj1;
            obj1.display(); // Display the main menu again
        }

        cout << "if you want to see menu again and perform any action then press 4"
             << " \nor any other key to exit : ";
        cin >> choice;
    } while (choice == 4);
}

void Fees::main_display() {
    string expense_type, line;
    int amount;
    ofstream outFile("C:\\Users\\Hp\\Desktop\\fff.txt", ios::app);

    do {
        system("cls");
        cout << "1. Do you want to add expense"
             << "\n2. Do you want to remove expense"
             << "\n3. Do you want to see expense"
             << "\n4. Again see the menu"
             << "\n5. See the main menu"
             << "\npress any key to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            cout << "How many expenses do you want to add : ";
            cin >> choose;
            for (int i = 0; i < choose; i++) {
                cout << "Enter expense type " << i + 1 << ": ";
                cin.ignore();
                getline(cin, expense_type);
                cout << "Enter your amount : ";
                cin >> amount;
                outFile << expense_type << " " << amount << endl;
            }
            outFile.close();
        }

        if (choice == 2) {
            cout << "Enter the expense number you want to remove: ";
            int expenseNum;
            cin >> expenseNum;
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            ofstream tempFile("C:\\Users\\Hp\\Desktop\\temp.txt");
            int lineNum = 1;
            bool found = false;

            while (getline(inFile, line)) {
                if (lineNum != expenseNum) {
                    tempFile << line << endl;
                } else {
                    found = true;
                }
                lineNum++;
            }

            inFile.close();
            tempFile.close();

            remove("C:\\Users\\Hp\\Desktop\\fff.txt");
            rename("C:\\Users\\Hp\\Desktop\\temp.txt", "C:\\Users\\Hp\\Desktop\\fff.txt");

            if (found) {
                cout << "Expense removed successfully." << endl;
            } else {
                cout << "Invalid expense number." << endl;
            }
        }

        if (choice == 3) {
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            if (inFile.is_open()) {
                int lineNum = 1;
                while (getline(inFile, line)) {
                    cout << "Expense " << lineNum++ << ": " << line << endl;
                }
                inFile.close();
            } else {
                cout << "No expenses added yet." << endl;
            }
        }

        if (choice == 5) {
            Expense_tracker obj1;
            obj1.display(); // Display the main menu again
        }

        cout << "if you want to see menu again and perform any action then press 4"
             << " \nor any other key to exit : ";
        cin >> choice;
    } while (choice == 4);
}

void House_utilities::main_display() {
    string expense_type, line;
    int amount;
    ofstream outFile("C:\\Users\\Hp\\Desktop\\fff.txt", ios::app);

    do {
        system("cls");
        cout << "1. Do you want to add expense"
             << "\n2. Do you want to remove expense"
             << "\n3. Do you want to see expense"
             << "\n4. Again see the menu"
             << "\n5. See the main menu"
             << "\npress any key to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            cout << "How many expenses do you want to add : ";
            cin >> choose;
            for (int i = 0; i < choose; i++) {
                cout << "Enter expense type " << i + 1 << ": ";
                cin.ignore();
                getline(cin, expense_type);
                cout << "Enter your amount : ";
                cin >> amount;
                outFile << expense_type << " " << amount << endl;
            }
            outFile.close();
        }

        if (choice == 2) {
            cout << "Enter the expense number you want to remove: ";
            int expenseNum;
            cin >> expenseNum;
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            ofstream tempFile("C:\\Users\\Hp\\Desktop\\temp.txt");
            int lineNum = 1;
            bool found = false;

            while (getline(inFile, line)) {
                if (lineNum != expenseNum) {
                    tempFile << line << endl;
                } else {
                    found = true;
                }
                lineNum++;
            }

            inFile.close();
            tempFile.close();

            remove("C:\\Users\\Hp\\Desktop\\fff.txt");
            rename("C:\\Users\\Hp\\Desktop\\temp.txt", "C:\\Users\\Hp\\Desktop\\fff.txt");

            if (found) {
                cout << "Expense removed successfully." << endl;
            } else {
                cout << "Invalid expense number." << endl;
            }
        }

        if (choice == 3) {
            ifstream inFile("C:\\Users\\Hp\\Desktop\\fff.txt");
            if (inFile.is_open()) {
                int lineNum = 1;
                while (getline(inFile, line)) {
                    cout << "Expense " << lineNum++ << ": " << line << endl;
                }
                inFile.close();
            } else {
                cout << "No expenses added yet." << endl;
            }
        }

        if (choice == 5) {
            Expense_tracker obj1;
            obj1.display(); // Display the main menu again
        }

        cout << "if you want to see menu again and perform any action then press 4"
             << " \nor any other key to exit : ";
        cin >> choice;
    } while (choice == 4);
}

void Expense_tracker::display() {
    system("cls");
    cout << "To enter house utilities press 1"
         << "\nTo enter Fees expense press 2"
         << "\nTo enter transport expense press 3"
         << "\nTo enter entertainment expense press 4"
         << "\nTo exit press any key"
         << "\nEnter your choice : ";
    cin >> choice;

    if (choice == 1) {
        House_utilities obj1;
        obj1.main_display();
    }
    if (choice == 2) {
        Fees obj2;
        obj2.main_display();
    }
    if (choice == 3) {
        transport obj3;
        obj3.main_display();
    }
    if (choice == 4) {
        entertainment obj4;
        obj4.main_display();
    }
}

int main() {
    Expense_tracker e;
    e.display();
    return 0;
}
