#include <iostream>
#include <string>
using namespace std;

int main() {
  
  std::cout << "\nWelcome to Primer 1 - Farenheit/Celcius converter" << endl;
 
  float temperature, fahrenheit, celsius, kelvin, newtemp1, newtemp2;
  int option, option2;

  cout << "Enter your temperature: ";
  cin >> temperature;
  cout << "Is that is Celcius(1), Farenheit(2) or Kelvin(3)?: ";
  cin >> option;
  cout << "Would you like to convert it to Farenheit(1), Celcius(2) or Kelvin(3)?: ";
  cin >> option2;

  
    if (option == 1 && option2 == 1) 
    {
      newtemp1 = (temperature * 9/5) + 32;
      cout << "The temperature in Celsius : " << temperature << endl;
      cout << "The temperature in Fahrenheit : " << newtemp1 << endl;
    }
    else if (option == 1 && option2 == 3) 
    {
      newtemp1 = temperature + 273.15;
      cout << "The temperature in Celsius : " << temperature << endl;
      cout << "The temperature in Kelvin : " << newtemp1 << endl;
    }
    else if (option == 2 && option2 == 2)
    {
      newtemp1 =(temperature - 32)* 5/9;
      cout << "The temperature in Farenheit : " << temperature << endl;
      cout << "The temperature in Celcius : " << newtemp1 << endl;
    }
    else if (option == 2 && option2 == 3)
    {
      newtemp1 =(temperature - 32) * 5/9;
      newtemp2 = newtemp1 + 273.15;
      cout << "The temperature in Farenheit : " << temperature << endl;
      cout << "The temperature in Kelvin : " << newtemp2 << endl; 
    }
      else if (option == 3 && option2 == 2)
    {
      newtemp1 = temperature - 273.15;
      cout << "The temperature in Kelvin : " << temperature << endl;
      cout << "The temperature in Celcius : " << newtemp1 << endl;
    }
    else if (option == 3 && option2 == 1)
    {
      newtemp1 = temperature - 273.15;
      newtemp2 = (newtemp1 * 9/5) + 32;
      cout << "The temperature in Kelvin : " << temperature << endl;
      cout << "The temperature in Farenheit : " << newtemp2 << endl;
    }
    else 
    {
      std::cout << "\n' Is an invalid option  - please try again.";
      
      return 0;
    }
}
  
