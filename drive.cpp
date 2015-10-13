


#include <iostream>
#include <cassert>

using namespace std;

// Prototype
double devilCourthouse(int numberPeople);

int main()
{





    return 0;
    
}

double devilCourthouse(int numberPeople)
{
    double total = 0;
    const int DAYS = 3;
    char choice = 'n';
    double equipmentRental = 0;    
    double BASE_CHARGE = 350;
    double CLIMBING_INSTRUCTOR = 100;
    
    total = BASE_CHARGE * numberPeople;
    
    cout << "Do you want a climbing instructor?(y/n)" << endl;
    cin >> choice;
    
    choice = tolower(choice);
    
    while(true)
    {
        if(choice == 'y' || choice == 'n')
        {
            break;
        }
        cout << "Sorry I don't understand. Please use y for yes or n for no." << endl;
        cin >> choice;
        
    }
    
    if(choice == 'y')
    {
        total = total + (CLIMBING_INSTRUCTOR * numberPeople);
    
    }
    
    cout << "Would you like to rent equipment?" << endl;
    cin >> choice;
    
    choice = tolower(choice);
    
    while(true)
    {
        if(choice == 'y' || choice == 'n')
        {
            break;
        }
        cout << "Sorry I don't understand. Please use y for yes or n for no." << endl;
        cin >> choice;
    }
    
    
    if(choice == 'y')
    {
        equipmentRental = 40 * numberPeople * DAYS;
        total = total + equipmentRental;
        
    
    }
    
    return total;

}
