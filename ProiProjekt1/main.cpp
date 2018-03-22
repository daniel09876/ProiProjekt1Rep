#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
  string name,surname,pseudonym;
  cout<<" Write name:"<<endl;
  cin>>name;
  reverse(name.begin(),name.end());
  cout<<" Write surname:"<<endl;
  cin>>surname;
  reverse(surname.begin(),surname.end());
  cout<<" Write pseudonym:"<<endl;
  cin>>pseudonym;
  reverse(pseudonym.begin(),pseudonym.end());
  cout<<" Output:\n"<<name<<" "<<surname<<" \""<<pseudonym<<"\""<<endl;
  
  return 0;
} 
