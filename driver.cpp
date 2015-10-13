//Evelyn Murillo , Mario Martinez, Zamba Diallo, Angel Gonzalez

#include <iostream>

using namespace std;

double scuba(int numPeople);
double discount(double prices, int numPeople);
double barronCliffSpelunk (int numOfPeople);
int menu();

int main()
{










}
int menu()
{ 

    int advChoice; //adventure choices are 1-4, asked for later in the menu function

//Just cout stuff for general info

    cout << "The High Adventure Travel agency offers four vacation packages for thrill-seeking customers." << endl;
    cout << "The rates and options vary for each package." << endl << endl << "here are your options:" << endl;

    cout << "Devil’s Courthouse Adventure Weekend:" << endl;
    cout << "An action packed three day weekend spent camping, rock climbing, and rappelling at Devil’s Courthouse, North Carolina. This getaway is for novices and experts alike. Climbing instructors are available to beginners at an optional low price. Camping equipment rental is also available." << endl;
    
    cout << "Charges:" << endl;
    cout << "Base Charge:          $350 per person" << endl;
    cout << "Climbing Instruction: $100 per person" << endl;
    cout << "Equipment Rental:     $40/day per person" << endl << endl;

    cout << "Scuba Bahama:" << endl;
    cout << "A week long cruise to the Bahamas with three days of scuba diving. Those with prior experience may dive right in, while beginners should choose to take optional, but very affordable lessons." << endl;
    
    cout << "Charges:" << endl;
	cout << "Base Charge:		$1000 per person" << endl;
	cout << "Scuba Instruction:	$100 per person" << endl << endl;

    cout << "Sky Dive Colorado:" << endl;
    cout << "Four thrilling days with expert sky diving instructors in Colorado Springs CO. For lodging, you may choose either the Wilderness Lodge or the Luxury Inn. (Instruction is included for all members of the party)." << endl;
    
    cout << "Rate:" << endl;
	cout << "Base Charge:                 $700 per person" << endl;
	cout << "Lodging at Wilderness Lodge: $65/day per person" << endl;
	cout << "Lodging at Luxury Inn:		  $120/day per person" << endl << endl;

    cout << "Barron Cliff Spelunk:" << endl;
    cout << "Eight days spent hiking and exploring caves in the Barron Cliff Wilderness Area, Tennessee. Camping equipment rental is available." << endl;

    cout << "Rate:" << endl;
	cout << "Base Charge:		$700 per person" << endl;
	cout << "Equipment Rental:	$40/day per person" << endl << endl;

//choices for the adventure

    cout << "Type 1 if you wanted the Devil Courthouse Adventure Weekend" << endl;
    cout << "Type 2 if you wanted the Scuba Bahama trip" << endl;
    cout << "Type 3 if you wanted the Sky Dive Colorado stuff" << endl;
    cout << "Type 4 if you wanted the Baron Cliff Spelunk" << endl;
    cin >> advChoice;

    return advChoice;
}
double barronCliffSpelunk(int numOfPeople)
{

    double baseCharge = 700.00;//per person
    double equipmentRental = 40.00;//day per person
    int numOfDays;
    double total;
    double discount;
    
    
    if(numOfPeople < 5 )
    {
        total =(numOfPeople * baseCharge ) + (numOfDays *equipmentRental);
     
     return total;
     }
     else if ( numOfPeople >= 5)
     {
        total= (numOfPeople * baseCharge) +(numOfDays * equipmentRental);
         discount = (total * .9);
         return discount;
    }
 }   

double scuba(int numPeople)
{
    double price;
    int optionalLessons; //how many people want scuba lessons
    
    price += numPeople * 700;
    
    cout << "How many people want scuba instructions?" << endl;
    cin >> optionalLessons;
    
    if (optionalLessons == 0)
    {
        return price;
    }
    else
    {
        price += optionalLessons * 100;
    }
    
    return discount(price, numPeople);
}
double discount (double prices, int numPeople)
{

    double discounted;
    
    if (numPeople >= 5)
    {
        discounted = prices * .9; // 10% discount
    }
    else
    {
        return prices;
    }
}
