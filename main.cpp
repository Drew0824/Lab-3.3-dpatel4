#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double sales;
  double stateTax;
  double localTax;

  cout << setprecision (2) << fixed;

  cout << "Please input the total sales for the month \n" << endl;
  cin  >> sales;
  
  cout << "Please input the state tax percentage in decimal form \n" << endl;
  cin >> stateTax;
 
  cout << "Please input the local tax percentage in decimal form \n" << endl;
  cin >> localTax;


cout << "The total sales for the month is $ \n" << sales << endl;

cout << "The state tax for the month is $ \n" << stateTax * sales << endl;

cout << "The local tax for the month is $ \n" << localTax * sales << endl;

}
