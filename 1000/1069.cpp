#include <iostream>
using namespace std;

void checkGrade1(char c){
  if(c=='A') cout << "best!!!";
  else if(c=='B') cout << "good!!";
  else if(c=='C') cout << "run!";
  else if (c=='D') cout << "slowly~";
  else cout << "what?";
}

void checkGrade2(char c){
  switch(c){
  case 'A':
    cout << "best!!!";
    break;
  case 'B':
    cout << "good!!";
    break;
  case 'C':
    cout << "run!";
    break;
  case 'D':
    cout << "slowly~";
    break;
  default:
    cout << "what?';
  }
}

int main(){
  char c;
  cin >> c;
  checkGrade1(c);
  checkGrade2(c);
  return 0;
}
