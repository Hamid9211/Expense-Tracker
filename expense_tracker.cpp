#include <iostream>
#include <string>
#include <fstream>
#include <algorithm> // For std::remove
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
    void updateTotalExpense(float expense);
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
                cin.ignore(); // Ignore newline character
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
                cin.ignore(); // Ignore newline character
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
                cin.ignore(); // Ignore newline character
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
                cin.ignore(); // Ignore newline character
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

class Registration {
public:
    string username;
    string password;
    string checkusername;
    string checkpassword;
    bool checkU = false;
    bool checkP = false;
    int namelines;
    string file ="C:\\Users\\Hp\\Desktop\\pp.txt";
    string tempfile = "C:\\Users\\Hp\\Desktop\\pp.txt";
    int rpin;

    void registration() {
    bool validUsername = false;

    do {
        cout << "Enter your username: ";
        cin.ignore(); // Clear any newline characters in the input buffer
        getline(cin, username);

        // Check if the username contains spaces
        if (username.find(' ') != string::npos) {
            cout << "Username cannot contain spaces. Please try again." << endl;
        } else {
            validUsername = true;
        }
    } while (!validUsername);

    cout << "Enter your password: ";
    getline(cin, password);

    cout << "Enter Recovery 4 digit pin: ";
    cin >> rpin;

    ofstream userdata(file, ios::app);
    if (userdata.is_open()) {
        userdata << username << endl;
        userdata << password << endl;
        userdata << rpin << endl;
        cout << "\nRegistration Successful!!"<<endl;
    } else {
        cout << "Error while registering new user. Please TRY AGAIN!! ";
        return; // Stop execution if the file cannot be opened
    }
}


    bool login(string file) {
        cout << "Enter username : ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, username);
        username.erase(remove(username.begin(), username.end(), ' '), username.end()); // Remove spaces

        cout << "Enter Password : ";
        getline(cin, password);

        ifstream readfile(file);
        string checkUsername, checkPassword;

        while (readfile >> checkUsername >> checkPassword) {
            if (checkUsername == username && checkPassword == password) {
                readfile.close();
                cout << "Login successful" << endl;
                Sleep(2000);
                return true;
            }
        }

        readfile.close();
        cout << "Invalid username or password" << endl;
        return false;
    }

    void changepassword(string file, string tempfile) {
    string srpin;
    string newpassword;
    cout << "Enter username : ";
    cin >> username;
    cout << "Enter Recovery Key : ";
    cin >> rpin;
    srpin = to_string(rpin);
    ifstream readfile(file);
    int recoverykey = 0;
    while (getline(readfile, checkusername)) {
        if (username == checkusername) {
            checkU = true;
            break;
        }
        recoverykey++;
    }
    readfile.seekg(0, ios::beg);
    recoverykey = recoverykey + 2;
    for (int i = 0; i <= recoverykey; i++) {
        getline(readfile, checkpassword);
        if (i == recoverykey) {
            if (srpin == checkpassword) {
                checkP = true;
                break;
            }
        }
    }
    readfile.close();
    if (!checkU) {
        cout << "No User Found" << endl;
        return;
    }
    if (!checkP) {
        cout << "Recovery Key Invalid!" << endl;
        return;
    }

    // Reopen the file for writing
    ofstream temp(tempfile);
    ifstream readfile2(file);
    string line;
    while (getline(readfile2, line)) {
        if (line == username) {
            // Skip the current line (username) and recovery key line
            getline(readfile2, line); // Read and discard the recovery key line
            getline(readfile2, line); // Read and discard the old password line
            cout << "Enter your new password : ";
            cin >> newpassword;
            temp << line << endl; // Write the username
            temp << newpassword << endl; // Write the new password
        } else {
            temp << line << endl; // Write other lines as they are
        }
    }
    readfile2.close();
    temp.close();
    
    // Remove the old file and rename the temporary file
    remove(file.c_str());
    rename(tempfile.c_str(), file.c_str());
    
    cout << "Password Changed Successfully!!" << endl;
}
};

int main() {
    int choice;
    Registration obj;
    while (1) {
        cout << "1. Register"
             << "\n2. Login"
             << "\n3. Change Password"
             << "\n4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                obj.registration();
                break;
            case 2:
                if (obj.login(obj.file)) {
                    Expense_tracker obj1;
                    obj1.display();
                }
                break;
            case 3:
                obj.changepassword(obj.file, obj.tempfile);
                break;
            case 4:
                cout << "Thank you for using our system!!";
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
