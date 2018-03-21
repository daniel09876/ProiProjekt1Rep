#include <iostream>

using namespace std;

string ChangingVowels(string str) {
  int strlen = str.length();
  for (int i=0; i<strlen;i++) {
    if(str[i] == 'a'||str[i] == 'e'||str[i] == 'y'||str[i] == 'o'||
        str[i] == 'u'||str[i] == 'i'||str[i] == 'A'||str[i] == 'E'||
        str[i] == 'Y'||str[i] == 'O'||str[i] == 'U'||str[i] == 'I') str[i] = 'z';
  }
  return str;
}

int main ()
{
  string name,surname,pseudonym;
  cout<<" Write name:"<<endl;
  cin>>name;
  cout<<" Write surname:"<<endl;
  cin>>surname;
  cout<<" Write pseudonym:"<<endl;
  cin>>pseudonym;
  cout<<" Output:\n"<<ChangingVowels(name)<<" \""<<ChangingVowels(pseudonym)<<"\" "
    <<ChangingVowels(surname)<<endl;
  
  return 0;
} 
