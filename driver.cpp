//Evelyn Murillo , Mario Martinez, Zamba Diallo, Angel Gonzalez

#include <iostream>

using namespace std;

double scuba(int numPeople);
double discount(double prices, int numPeople);
double barronCliffSpelunk (int numOfPeople);

int main()
{












}
double barronCliffSpelunk( int numOfPeople)
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
     else if ( numOfpeople => 5)
     {
        total= (numOfPeople * baseCharge) +(numOfdays * equipemtRental);
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
