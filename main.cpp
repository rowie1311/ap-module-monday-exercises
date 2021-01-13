#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "\nWelcome to Primer 3 Self Checkout Programme: \n\n";

int productnumber = 1, quantity;
float price, total, subtotal, tax, taxcalc, actualtotal = 0.00;

while (1) {
  cout << "\nPlease Enter The Quantity Of Item " << productnumber << " You Would Like (Enter 0 to finish): " ;
  cin >> quantity;
  
  while (1)
  {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please Enter A Valid Quantity"<<endl;
        cin >> quantity;
      }
      if (quantity == 0 && actualtotal >= 0.01)
      {
        tax = 5.5;
        taxcalc = (tax / 100) * actualtotal;
        cout << "Your subtotal is: " << actualtotal << "\nShipping Tax (5.5%): " << taxcalc << endl;
        total = taxcalc + actualtotal;
        cout << "\nYour Total For This Shopping Is: " << total << endl;

      }
      if (quantity == 0) 
      {
        cout << "Thank You For Visiting, We Hope To See You Again :)\n";
        return 0;
      }
      if(!cin.fail()) 
      {
        break;
      }
  }
    cout << "So, You Would Like: " << quantity << " of Item " << productnumber;

    cout << "\n\nPlease Enter The Price for Item " << productnumber << " (Please use 0.00 format): ";
    cin >> price;

      while (1) {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please Enter A Valid Price"<<endl;
        cin >> price;
      }
      if(!cin.fail()) 
      {
        break;
      }
      }

    cout << price;
    subtotal = price * quantity;
    actualtotal = actualtotal + subtotal;
    cout << "\nSubtotal so far: " << actualtotal;
    productnumber++;
  }
  
};




