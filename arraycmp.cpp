#include <iostream>
using namespace std;

int main() {
    float arr[10];
    float arr1[10];
    
   // Inserting data using pointer notation
    cout << "Enter 1st 10 elements: ";
    for (int i = 0; i < 10; ++i) {
        cin >> *(arr + i) ;
    }

    // Displaying data using pointer notation
    cout << "Displaying 1st 10 elements data: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << *(arr + i) << endl ;
    }

    cout << "Enter  2nd set of 10 elements: ";
    for (int i = 0; i < 10; ++i) {
        cin >> *(arr1 + i) ;
    }

    // Displaying data using pointer notation
    cout << "Displaying second set of 10 elements data: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << *(arr1 + i) << endl ;
    }

    cout<<"commparing array by its index"<<endl;
    for(int i=0;i<10;i++)
    {
        if(*(arr + i)==*(arr1 + i))
        {
            cout<<"both arrays elements are equal"<<" "<<*(arr + i)<<" "<<*(arr1 + i)<<endl;
            *(arr + i);
            *(arr1 + i);

        }
        else 
        {
            cout<<"both arrays elements are unequal"<<" "<<*(arr + i)<<" "<<*(arr1 + i)<<endl;
        }

    }

    return 0;
}