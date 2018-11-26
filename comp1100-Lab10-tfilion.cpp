#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;

double grade (float x, float y)
    {
     return (x/y)*100;
    }

void joke (string jk){
    cout << "What did one ocean say to the other ocean" << jk << "?\n" ; // joke function
    cout << "Nothing, they just waved. \n";
}

int main() {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;
    string jk; // initiate function string variable

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }
    if (selection == 1) {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;
        
        // Read in 2 integer values
       
       cout << "Enter your mark: \n";
       cin >> marksReceived;
       cout << "What are total marks available? \n";
       cin >> totalMarksAvailable;
       
        /* 
           Pass the integer values to a function. 
           The function should calculate the grade
           as a percentage out of 100 and return as
           as a double
        */
        
        gradePercentage = grade(marksReceived, totalMarksAvailable); 
        cout << "You achieved a grade of: " << gradePercentage << "%" << endl; 
    } 
    else if(selection == 2) {
        
        // Ask the user for their name
        
        int name;
        cout << "Please enter your name: \n";
        cin >> name;
        
        // Call a function that tells them a joke
        // The function should not return a value

        joke (jk); //will print out joke string when they enter their name
    }
    else if (selection ==3) {
        int count = 0;

        // Replace the while loop with a for loop
        
       for (int count = 1; count < 11; ++count) { // print count to 10
            cout << count << " ";
        }
    }
   
    return 0;
}