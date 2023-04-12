#include <iostream>
using namespace std;

	int main() {
	int balance = 1000;
	string inputPin = "";
	string pin = "0000";
	string newPin = "";
	int attempts = 0;
	string name;
	char gender;	     
	int amount;
	            string recipient;	
// Page 1 introduction
	cout << "----------Welcome To TeleCom MoMo----------" << endl;
	cout << "Please Enter Your Name: ";
	getline(cin, name);
	cout << "Please enter your gender M/F: ";
	cin >> gender;
	system("cls");
	if (gender == 'M' || gender == 'm') {
    cout << "Hello Mr " << name << ", Welcome To Telecom Momo" << endl;
	}
	else if (gender == 'F' || gender == 'f') {
    cout << "Hello Mrs " << name << ", Welcome To Telecom Momo" << endl;
	}
// Remember to auto-exit if user enters an invalid character
	else 
		{
    cout << "YOU HAVE ENTERED AN INVALID INPUT" << endl;
    cout << "Please Try Again" << endl;
    return 0;
		}

// Users Account
	cout << endl;
	cout << "-----YOUR ACCOUNT IS STILL ACTIVE-----" << endl;
	cout << endl;

	cout << "****Please Enter The Default Pin To Access Your Account: ****" << endl;
	do {
    cout << "Please enter your 4-digit PIN: " ;
    cin >> inputPin;
    attempts++;
    if (inputPin == pin) {
        cout << "****ACCESS GRANTED****" << endl;
        cout << endl;
        break;
    }
    else {
        cout << "****ACCESS DENIED****" << endl;
        cout << endl;
    }
    if (attempts >= 3) {
        cout << "Maximum attempts reached." << endl;
        cout << "Exiting Program......................" << endl;
        return 0;
	}
	} while (true);
	
	// Main Menu
	int choice;
	do {
		
	    cout << "--------------MAIN MENU--------------" << endl;
	    cout << "1. Reset/Change Pin" << endl;
	    cout << "2. Check Balance" << endl;
	    cout << "3. Send Money" << endl;
	    cout << "0. Exit" << endl;
	    cout << "-------------------------------------" << endl;
	    cout << "Please enter your choice: ";
	    cin >> choice;
	    switch (choice)
		 {
	        case 1:
				 // Reset/Change Pin
	            cout << "Please enter your new 4-digit PIN: ";
	            cin >> newPin;
	            pin = newPin;
	            cout << " Your New Pin Is " << newPin << endl;
	            cout << "Please don't share with anyone else" << endl;
	            cout << "Your PIN has been successfully changed." << endl;
	   			 return 0;
			    break;
	            
	           
	        case 2: 
				// Check Balance
	            cout << "Your balance is: " << balance << endl;
	            return 0;
	            break;
	        case 3: 
				// Send Money

	            cout << "Please enter recipient's phone number: ";
	            cin >> recipient;
	            cout << "Please enter amount to send: ";
	            cin >> amount;
	            if (amount > balance)
					 {
	                cout << "Insufficient balance." << endl;
	                return 0;
	            	}
	            else
					 {
	                balance -= amount;
	                cout << "Transaction successful." << endl;
	                cout << "New balance is: " << balance << endl;
	                return 0;
	           		 }
	        break;
        case 0:
		 //Exit
            cout << "Exiting Program......................" << endl;
            return 0;
	    	}
	   }
	        while (true);
	        return 0;

}

