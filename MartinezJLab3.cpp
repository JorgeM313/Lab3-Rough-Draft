//Jorge Martinez
//CPSC 121 Lab 3
//09/26/18
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void Rec_fun()
{
  cout << "Would you like to enter a word to print out or a numerical width? \n";
  cout << "Please enter either 'W' for word or 'w' for width for your input.\n ";
  getline(cin, width_choice);
  if (width_choice == W)
  {
    cout << "What is the word you would like to use? "
    getline(cin,word);
  }
  else if (width_choice == 'w')
  {
    cout << "Select the width of the rectangle: \n";
    cin >> width;
  }
  cout << "Please enter the height of the rectangle: \n";
  cin >> height;
  {
    do {
      cout << word << endl;
    } while(height = 0, height--,);
  }
  word_rect = word * height
  width_rect = width * height
}
int main()
{
  int shape_choice = 0;
  string width_choice = 0;
  string word = 0;
  double width = 0;
  double height = 0;
  double rect = 0;
  cout << "Select the shape that you would like to work with: \n";
  cout << "1. Rectangle\n";
  cout << "2. Triangle\n";
  if (shape_choice == 1)
  {

  }

  return 0;
}
