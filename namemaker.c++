// Self made project by BETTYE J. TAYLOR 
// WORK BY BETTYE TAYLOR AT PRAIRE STATE COLLEGE AND UIUC
// YEAR 2025
// TIME OF WORK: AROUND 1 HOURS 


#include <string> 
#include <iostream> 
#include <limits>

using namespace std;

int main() {

//These Strings are Imporant for the rules set later.
// (A string in c++ is a variable that stores a sequence of letters and other characters.)

string petsName; 
int petsAge; 

// Getting the Pet's Name. 
cout <<"What is your pet's name: ";
cin >> petsName; 

// Getting the Pet's Age. Validation with correct input. 
cout << "What is your pet's age: ";
while (!(cin >> petsAge)) {
    cout << "Invalid Input! Please enter a number for your pet's age.";
    cin.clear(); // Clear the error flag. 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ingnore Incorrect Input 
    
}
    
// Age-based Response 

 if (petsAge <0)    {
    cout << "Error: Age cannot be negative!" << endl; // No Age 
}
else if (petsAge == 0)  {
    cout << "Your pet is a newborn!" << endl; // Baby Pet 
}
else if (petsAge >= 2 && petsAge <= 7)  {
    cout << "Your pet is young and healthy!" << endl; // Average Pet
}

else {
    cout << "Your pet is getting older, take care of them." << endl; // Old Pet 

}


// Final Output with all information needed. 
cout << "Hello your pet's name is " << petsName << ", who is "  << petsAge << " years old!" << endl;
cout << "Your Welcome!"; 

    return 0; 
}
