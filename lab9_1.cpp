#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  
  
  if(rank == 'S'){
    cout << "You have received Super Ultra Rare Unit!!!\n";
  }if(rank == 'A' or rank == 'S'){
    cout << "You have received 5 gems.\n";
  }if(rank == 'B' or rank == 'A' or rank == 'S'){
    cout << "You have received 1 gems.\n";
  }if(rank == 'C' or rank == 'B' or rank == 'A' or rank == 'S'){
    cout << "You have received 2000 coins.\n";
  }if(rank == 'D' or rank == 'C' or rank == 'B' or rank == 'A' or rank == 'S'){
    cout << "You have received very KAK items.\n";
  }
  return 0;
}
