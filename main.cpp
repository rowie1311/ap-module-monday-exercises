#include <iostream>
#include <string>
using namespace std;

int main() 
{
  
  	std::cout << "\nWelcome to Primer 2:\nNumber guessing game" << endl;

  {
	 int num, guess, tries = 0, difficulty;

   cout << "Please select a level of difficulty (1, 2 or 3): ";
   cin >> difficulty;
    while(1)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter an integer"<<endl;
        cin >> difficulty;
      }
      if(!cin.fail()) 
        {
          break;
        }
    }
	
  if (difficulty == 1) 
  {
  srand(time(0)); 
	num = rand() % 10 + 1; 
	cout << "Guess My Number Game\n\n";
  do
	{
		cout << "Enter a guess between 1 and 10 : ";
		cin >> guess;
    
      while(1)
      {
        if(cin.fail())
        {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"Please enter an integer"<<endl;
         tries++; 
         cin >> guess;
        }
        if(!cin.fail()) 
        {
         break;
        }
      }
    
    tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else 
    {
      switch(tries) 
      {
        case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      }
    }
	} 
 
  while (guess != num);
    return 0;
  }


  else if (difficulty == 2)
  {
  srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Guess My Number Game\n\n";
  do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;

    while(1)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter an integer"<<endl;
        tries++; 
        cin >> guess;
      }
      if(!cin.fail()) 
      {
        break;
      }
    }
		tries++;

		if (guess > num) 
    {
			cout << "Too high!\n\n";
    }
		else if (guess < num) 
    {
			cout << "Too low!\n\n";
    }
		else 
    {
		  switch(tries) 
      {
        case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      }
    }
	} 
    while (guess != num);
      return 0;
  }


  else if (difficulty == 3)
  {
    srand(time(0)); 
	  num = rand() % 1000 + 1; 
	  cout << "Guess My Number Game\n\n";
  do
	 {
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
      while(1)
      {
        if(cin.fail())
        {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"Please enter an integer"<<endl;
         tries++; 
         cin >> guess;
        }
       if(!cin.fail()) 
       {
          break;
       }
      }

		tries++;

		if (guess > num)
    {
			cout << "Too high!\n\n";
    }
		else if (guess < num)
    {
			cout << "Too low!\n\n";
    }
		else 
    {
      switch(tries) 
      {
      case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      }
    }

	 }  while (guess != num);
       return 0;
  }

  else 
    {
    
      std::cout << "\n Invalid Option  - Please Try Again.";
      
      return 0;
    }
  }
}
