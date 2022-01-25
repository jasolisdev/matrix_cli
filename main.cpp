#include <iostream>
#include <limits>
#include <string>
using namespace std;

void contProgram();
void mainMenu();

int main()
{
  const string USERNAME = "test";
  const string PASSWORD = "test";
  string username, password;

  do{
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;

    if (username != USERNAME || password != PASSWORD)
    {
        cout << "Username or Password is incorrect";
        cout << '\n' << '\n';
    }
    else if (username == USERNAME && password == PASSWORD)
    {
        break;
    }

  } while (username != USERNAME || password != PASSWORD);

  int number = 0;

  while (number != 2)
  {
    contProgram();
    cin >> number;

    if (cin.fail() == 1)
    {
      cout << "\nInvalid Input\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      number = 0;
      continue;
    }
    else if (number == 1)
    {
      cout << "\nProgram Terminated.\n\n";
      return 0;
    }
    else if (number == 2)
    {
      break;
    }
    else
    {
      cout << "\nInvalid Input\n";
      cin.clear();
      number = 0;
      continue;
    }

    contProgram();
    cin >> number;
  }

  cout << "\nEntering the Matrix...\n\n";

  int size = 0;

  while (size != 4)
  {
    mainMenu();
    cin >> size;

    if (cin.fail() == 1)
    {
      cout << "\nInvalid Input\n\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      size = 0;
      continue;
    }
    if (size == 1)
    {
      cout << "\nUploading AI into the web\n\n";
      continue;
    }
    else if (size == 2)
    {
      cout << "\nSending Ketchup Packets to clog the Net\n\n";
      continue;
    }
    else if (size == 3)
    {
      cout << "\nOrder 66 in full effect\n\n";
      continue;
    }
    else if (size == 4)
    {
      cout << "\nProgram Terminated.\n";
      return 0;
    }
    else
    {
      cout << "\nInvalid Input\n\n";
      cin.clear();
      size = 0;
      continue;
    }
  }

  cout << "\nProgram Terminated.\n";
  return 0;
}

void contProgram()
{
  cout << "\nChoose Wisely.\n";
  cout << "1) Blue Pill\n"
       << "2) Red Pill\n";
}

void mainMenu()
{
  cout << "The Matrix Terminal\n";
  cout << "1) Hack the Gibson\n"
       << "2) Terminate the Net\n"
       << "3) Execute Order 66\n"
       << "4) Exit\n\n";
}
