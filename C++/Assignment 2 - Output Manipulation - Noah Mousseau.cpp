/*==========================================================

 Title:       Assignment2 - Output Manipulation
 Course:      CSC 1100
 Author:      <First & Last Name>
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //write your code here and include comments to explain your solution
  cout<<"ten"; //prints "ten" to the console
  cout<<setw(18)<<"fourfour"<<endl; //prints "four four" to the console after 10 spaces and ends the line
  cout<<setfill('-')<<setw(80); //assigns a space to be filled by 80 dashes if left empty
  cout<<"-"<<endl; //fills the last space in the previous 80 and ends the line
  return 0;
}


