#include <iostream>
using namespace std;
int main ()
{
  char day[10];
  int x;
  int w;
  double p;
  cout << "Enter the Day - " << endl;
  cin >> day;
  cout << "Enter the number of weeks -" << endl;
  cin >> w;
  cout << "Enter the kind of year - " << endl;
  cout << "                         " << endl;
  cout << " 1 - for LEAP YEAR" << endl;
  cout << " 2 - for NON LEAP YEAR" << endl;
  cin >> x;
  cout << "                         " << endl;

  if (w == 52)
    {
      switch (x)
	{
	case 1:
	  {
	    p = 5 / 7.0;
	    break;
	  }
	case 2:
	  {
	    p = 6 / 7.0;
	    break;
	  }
	default:
	  {
	    cout << " Wrong Input" << endl;
	    return 0;
	  }
	}
    }

  else if (w == 53)
    {
      switch (x)
	{
	case 1:
	  {
	    p = 2 / 7.0;
	    break;
	  }
	case 2:
	  {
	    p = 1 / 7.0;
	    break;
	  }
	default:
	  {
	    cout << " Wrong Input" << endl;
	    return 0;
	  }
	}
    }
  else
    {
      cout << " Wrong Input " << endl;
      return 0;
    }


  if (x == 1)
    {
      cout << " The Probablity of having " << w << " " << day << "s " <<
	"in a LEAP YEAR is " << p << endl;
    }
  else
    {
      cout << " The Probablity of having " << w << " " << day << "s " <<
	"in a NON-LEAP YEAR is " << p << endl;
    }
  return 0;
}