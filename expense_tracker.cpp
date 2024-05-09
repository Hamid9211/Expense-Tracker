#include <iostream>#include<iostream>
#include<string>
#include<windows.h>

using namespace std;
// class expense_tracker;
class entertainment{
   int choice;
    int choose;
  public:
  entertainment (int c=0,int ch=0): choice(c),choose(ch){};
  void main_display(){
   
    string *arr = nullptr;
    int *amount_arr=0;
  do{
    system("cls");
    cout<<"1. Do you want to add expense"
    <<"\n2. Do you want to remove expense" 
    <<"\n3. Do you want to see expense"
    <<"\n4. Again see the menu"
    <<"\npress any key to exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    if (choice==1){
      cout<<"How many expenses do you want to add : ";
      cin>>choose;
      cin.ignore();
      arr = new string[choose];
      amount_arr=new int [choose];
      for(int i=0;i<choose;i++){
        cout<<"Enter expense type "<<i+1<<": ";
        cin.ignore();
        getline(cin, arr[i]); 
        cout<<"Enter your amount : ";
        cin>>amount_arr[i];
      }
    }
    if (choice == 2) {
      if (choose > 0) {
    int removeIndex;
    cout << "Which expense do you want to remove? Enter its number: ";
    cin >> removeIndex;
    if (removeIndex >= 1 && removeIndex <= choose) {
        for (int i = removeIndex - 1; i < choose - 1; i++) {
            arr[i] = arr[i + 1];
        }
        choose--;
        cout << "Expense removed successfully." << endl;
    } 
    else {
        cout << "Invalid expense number." << endl;
    }
}
else {
    cout << "No expenses to remove." << endl;
}

    }
  
    if (choice == 3) {
      if (arr != nullptr) { 
          for (int i = 0; i < choose; i++) {
            cout << "Expense " << i + 1 << ": " << arr[i] <<" "<<amount_arr[i]<<"$"<<endl;
          }
      } 
      else {
       cout << "No expenses added yet." << endl;
      }
    }
   cout<<"if you want to see menu again and perform any action then press 4"
   <<" \nor any other key to exit : ";
   cin>>choice;
  }
  while(choice==4);
  };
};
class transport{
   int choice;
    int choose;
  public:
  transport (int c=0,int ch=0): choice(c),choose(ch){};
  void main_display(){
   
    string *arr = nullptr;
    int *amount_arr=0;
  do{
    system("cls");
    cout<<"1. Do you want to add expense"
    <<"\n2. Do you want to remove expense" 
    <<"\n3. Do you want to see expense"
    <<"\n4. Again see the menu"
    <<"\npress any key to exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    if (choice==1){
      cout<<"How many expenses do you want to add : ";
      cin>>choose;
      cin.ignore();
      arr = new string[choose];
      amount_arr=new int [choose];
      for(int i=0;i<choose;i++){
        cout<<"Enter expense type "<<i+1<<": ";
        cin.ignore();
        getline(cin, arr[i]); 
        cout<<"Enter your amount : ";
        cin>>amount_arr[i];
      }
    }
    if (choice == 2) {
      if (choose > 0) {
    int removeIndex;
    cout << "Which expense do you want to remove? Enter its number: ";
    cin >> removeIndex;
    if (removeIndex >= 1 && removeIndex <= choose) {
        for (int i = removeIndex - 1; i < choose - 1; i++) {
            arr[i] = arr[i + 1];
        }
        choose--;
        cout << "Expense removed successfully." << endl;
    } 
    else {
        cout << "Invalid expense number." << endl;
    }
}
else {
    cout << "No expenses to remove." << endl;
}

    }
  
    if (choice == 3) {
      if (arr != nullptr) { 
          for (int i = 0; i < choose; i++) {
            cout << "Expense " << i + 1 << ": " << arr[i] <<" "<<amount_arr[i]<<"$"<<endl;
          }
      } 
      else {
       cout << "No expenses added yet." << endl;
      }
    }
   cout<<"if you want to see menu again and perform any action then press 4"
   <<" \nor any other key to exit : ";
   cin>>choice;
  }
  while(choice==4);
  };


