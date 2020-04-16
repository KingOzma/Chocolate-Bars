//A program that inputs the number of dollars and outputs how many chocolate bars you can collect after spending all your money and redeeming as many coupons as possible. 
#include <iostream> 
#include <cstdlib>
using namespace std; 
 
int main() 
{ 
//Variables
int cash = 0;
int totalBars = 0;
int totalCoupons= 0;
int newBars = 0;

cout << "Input how much you want to spend:";
cin >> cash;

totalBars = cash;
totalCoupons = totalBars;
//Coupons are greater than or equal to 7
while (totalCoupons >= 7)
{
//Can use 7 coupons for 1 chocolate bar
    newBars = totalCoupons / 7;
    totalBars = totalBars + newBars;
//Coupons equals remainder plus new bars
      totalCoupons = (totalCoupons % 7) + newBars;
}

//Results
cout << "You're able to purchase " << totalBars << " chocolate bars"; 
cout << " and " << totalCoupons << " coupons remaining." << endl; 
  
return 0; 
} 