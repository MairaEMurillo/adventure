//Evelyn Murillo , Mario Martinez, Zamba Diallo, Angel Gonzalez
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
using namespace std;

double sky(int num);
int main(){
cout << sky(5);
return 0;}

double sky(int num){
int loop = 1;
char hotel;
double answr = num * 700;
for(loop; loop <= num; loop++){
    cout << "Does person " << loop << " want to reside in Wilderness Lodge (65/night) or at the Luxury Inn (120/night)? (W or L): ";
    cin >> hotel;
    if (hotel == 'W')
        answr += 4 * 65;
    else
        answr += 4 * 120;
}    
cout << "Sub-total for this package is " << answr << endl;
return answr;}
