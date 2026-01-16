#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    float bill, tax = 0;

    if (units > 300) {  

   bill = units * 10;

  
tax = bill * 0.29;   // 29% sales tax
  bill += tax;
   } else {
  
  bill = units * 5;
    }

    bill += 39; 

    cout << "Total electricity bill = $" << bill << endl;

    return 0;
}
