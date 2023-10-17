#include <iostream>
using namespace std;
int main()
{
//			//task  1
//    //assign variables to province populations
//    char prov;
//    //user input for required province
//    cout << "Enter the first letter(uppercase) of the province you want to know the population of: "<<endl;
//    cin >> prov;
//    // switch case sta
//    switch (prov) {
//    case 'P': 
//    cout << "Population of Punjab is: 110,000,000" << endl;
//    break;
//    case 'B':
//    cout << "Population of Balochistan is: 12,335,129" << endl;
//    break;
//    case 'K':
//    cout << "Population of KPK is: 35,501,964" << endl;
//    break;
//    case 'S':
//    cout << "Population of Sindh is: 47,854,510" << endl;
//    break;
//      }
//    //task 2
//    char letter;
//    cout<<"Enter a letter(lowercase only): "<<endl;
//    cin>>letter;
//    switch (letter) {
//    case 'a': case 'e': case 'i': case 'o': case 'u':
//    cout << "This letter is a vowel" << endl;
//    break;
//		default :
//    cout << "This letter is a consonant"<<endl;
//    break;
//    }
//    		// task 3
//    float n;
//    // Ask user to enter a number of choice
//    cout<< "Enter any number: "<<endl;
//    cin>>n;
//    // Switch statement checks if the value of n is positive
//	switch (n > 0) {
//    	case true:
//    		cout<<"This number is positive."<<endl;
//    		break;
//    	case false:
//    		// If it is zero or negative we add another switch
//    		switch (n < 0) 
//			{
//    			case true:
//    				cout<<"This number is negative."<<endl;
//    				break;
//    			case false:
//    				cout<<"This number is zero."<<endl;
//    				break;
//    			}
//    		
//    }
//			// task 4
//	// Assign variable for age of a person
//	int age;
//	cout<<"Enter your age: "<<endl;
//	cin>>age;
//	
//	if (age<0) {
//		cout<<"Invalid number entered."<<endl;
//	} else {
//		if (age < 13) {
//			cout<<"You are a child."<<endl;
//	}	else if (age <= 18) {
//			cout<<"You are a teen."<<endl;
//	}	else {
//		cout<<"You are an adult"<<endl;
//		
//		}
////	}
//			// task 5
//	int num1, num2, num3;
//	//Input 3 numbers
//	cout<<"Enter three numbers of your choice: "<<endl;
//	cin >> num1 >> num2 >> num3;
//	//nested if else statement for determining largest number
//	if (num1>=num2 && num1 >= num3){
//		cout<<num1<<" is the largest number"<<endl;
//	}	else if (num3>num1 && num3>num2) {
//		cout<<num3<<" is the largest number"<<endl;
//	}	else { 
//		cout<<num2<<" is the largest number"<<endl;
//		}
//	
			//task 6
	char alp;
	cout<<"Enter a letter of your choice (lowercase only): "<<endl;
	cin>> alp;
	    if (alp >= 'a') {
        if (alp == 'a') {
            cout << "This is a vowel." << endl;
        } else if (alp == 'e') {
            cout << "This is a vowel." << endl;
        } else if (alp == 'i') {
            cout << "This is a vowel." << endl;
        } else if (alp == 'o') {
            cout << "This is a vowel." << endl;
        } else if (alp == 'u') {
            cout << "This is a vowel." << endl;
        } else {
            cout << "This is a consonant." << endl;
        }
    } else {
        cout << "Invalid character. Please try again." << endl;
    }

    return 0;
}
