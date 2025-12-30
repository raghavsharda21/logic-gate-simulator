// Logic Gate Simulator
// This program simulates basic digital logic gates by taking binary inputs (0 or 1) and displaying the corresponding output.
#include <iostream>
using namespace std;
void AndGate () // Function for AND Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
  if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of AND Gate = " << (x&&y)<< endl;
return;
}
void OrGate () // Function for OR Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
   if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of OR Gate = " << (x||y)<< endl;
return;
}
void NotGate () // Function for NOT Gate
{
  int x;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
   if (x != 1 && x !=0)
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of NOT Gate = " << (!x)<< endl;
return;
}
void NandGate () // Function for NAND Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
   if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of NAND Gate = " << (!(x&&y))<< endl;
return;
}
void NorGate () // Function for NOR Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
   if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of NOR Gate = " << (!(x||y))<< endl;
return;
}
void XorGate () // Function for XOR Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
   if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of XOR Gate = " << (x^y)<< endl;
return;
}
void XnorGate () // Function for XNOR Gate
{
  int x,y;
  cout << "Enter a number (0 or 1): ";
  cin >> x;
  cout << "Enter the second number (0 or 1) : ";
  cin >> y;
   if ((x != 1 && x !=0)|| (y != 1 && y !=0))
  {
    cout << "Invalid input . Please enter 0 or 1 only.";
    return ;
  }
  cout << " Output of XNOR Gate = " << (!(x^y))<< endl;
return;
}
int main ()
{
  int Gate ;
  // All available Logic Gates
cout << "Logic Gate Simulator" << endl;
cout << "1> AND Gate " << endl ;
cout << "2> OR Gate " << endl ;
cout << "3> NOT Gate " << endl ;
cout << "4> NAND Gate " << endl ;
cout << "5> NOR Gate " << endl ;
cout << "6> XOR Gate " << endl ;
cout << "7> XNOR Gate " << endl ;
cout << "Select a Logic Gate : ";
cin >> Gate ;

switch (Gate)
{
case 1 : AndGate(); break;
case 2 : OrGate(); break;
case 3 : NotGate(); break;
case 4 : NandGate(); break;
case 5 : NorGate(); break;
case 6 : XorGate(); break;
case 7 : XnorGate(); break;
default : cout << "Invalid input." << endl;
}
return 0;
} 
