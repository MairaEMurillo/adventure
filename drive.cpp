


#include <iostream>
#include <cassert>

using namespace std;

// Prototype
double devilCourthouse(int numberPeople);

int main()
{



    cout << devilCourthouse(3) << endl;

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
    int rentalDays;
    
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
        cout << "For how many days?" << endl;
        cin >> rentalDays;
        
        while(true)
        {
            if(rentalDays < 4 && rentalDays > 1)
            {
                break;
            }
            
            cout << "The maximum number of days you can rent the equipment is 3 days.\n";
            cout << "The minimum is 1 day." << endl;
            cin >> rentalDays;
            
        }
        
        equipmentRental = 40 * numberPeople * rentalDays;
        total = total + equipmentRental;
        
    }
    
    return total;

}
