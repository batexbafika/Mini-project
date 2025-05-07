#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

//The Bank Card class
class bankCard{
    private:
    string name; 
    int cardPin; 
    int cardNumber;
    string cardOwner;
    double cardBalance;
   
    public:
    //contructor to initialize card class data members
    bankCard(string name, string cardOwner, int cardNumber, 
    double cardBalance , int cardPin):
    name(name), cardOwner(cardOwner), 
    cardNumber(cardNumber), cardBalance(cardBalance), cardPin(cardPin){}
    
    //Methods for operations that can be done on this bankCard
    string get_name(){return name;}
    string get_cardOwner(){return cardOwner;}
    int get_cardNumber(){return cardNumber;}
    int get_cardPin(){return cardPin;}
    double get_cardBalance(){return cardBalance;}

    //setter methods to set the values of the data members
    void set_cardBalance(double newBalance){
        cardBalance = newBalance;
    }
};

//Function to chose the ATM operation
char ATMOperation(){
    char operation;
    cout << "Please select the ATM operation you want to perform: \n";
    cout << "1. Withdraw Cash\n";
    cout << "2. Deposit Cash\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cin >> operation;
    return operation;
}

//check if amount is valid
bool checkAmount(int amount){
    if(amount % 10 != 0){
        
    return false;
}
    else{
        return true;
    }
}

//The entry point of the program
int main(){

    //Creating a bank card object with the required data
    bankCard card( "NFCBank", "John Doe", 543456789, 1000.00, 1234);
    //Prompting the user to enter their pin
    int pin;

    cout << "Please enter your ATM pin: ";
    cin >> pin;
    //Checking if the entered pin is correct
    if(pin == card.get_cardPin()){
       double currentBalance = card.get_cardBalance(); // Get the current balance

        while (true) { 
            char operation = ATMOperation(); // Show menu
        
            if (operation == '4') {
                cout << "Exiting...\n";
                break; // Exit the loop properly
            }
        
            switch (operation) {
                case '1':
                        cout << "You have selected to withdraw cash.\n";
                        double withdrawAmount;
                        cout << "Enter the amount to withdraw: $";
                        cin >> withdrawAmount;
                    while (withdrawAmount <= 0) {
                        cout << "Invalid amount. Please enter a positive value: $";
                        cin >> withdrawAmount;                       
                }
              
                if(checkAmount(withdrawAmount)) // Check if the amount is valid
               {

                if(withdrawAmount > card.get_cardBalance()){
                    cout << "\nInsufficient funds. Please try again.\n";
                }else{  
                    cout << "Withdrawing $" << withdrawAmount << "...\n";
                    currentBalance -= withdrawAmount; // Update balance
                    card.set_cardBalance(currentBalance); // Set the new balance
                    cout << "Withdrawal successful. New balance: $" << card.get_cardBalance() << endl;
                    
                }
            }
                else{
                    cout << "Invalid amount. Please enter a multiple of 10.\n";
                }
                break;
             // the case for deposit cash   
            case '2':
                cout << "You have selected to deposit cash.\n";
                double depositeAmount;
                cout << "Enter the amount to Deposite: $";
                cin >> depositeAmount;
               while(depositeAmount<=0){
                    cout << "Invalid amount. Please enter a positive value: $";
                    cin >> depositeAmount;
               }
               if(checkAmount(depositeAmount)) // Check if the amount is valid
               {
                if(depositeAmount <= 0){
                    cout << "Insufficient funds. Please try again.\n";
                }else{  
                    cout << "Depositing $" << depositeAmount << "...\n";
                    currentBalance += depositeAmount; // Update balance
                    card.set_cardBalance(currentBalance); // Set the new balance
                    cout << "Deposite successful. New balance: $" << card.get_cardBalance() << endl;
                    
                }
            } else{
                cout << "Invalid amount. Please enter a multiple of 10.\n";
            }
                break;
                //the case for checking balance

            case '3':
                cout << "Your current balance is: $" << card.get_cardBalance() << endl;
                break;
            default:
                cout << "Invalid operation selected.\n";
                
            }
        }
    }
    else{
        cout << "Incorrect pin. Please try again.\n";
        
    }

    return 0;   
}


