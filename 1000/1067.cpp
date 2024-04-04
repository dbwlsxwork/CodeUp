#include <iostream>
using namespace std;

void checkEven(int n){
  if(n%2==0)
    cout << "even" << endl;
  else
    cout << "odd" << endl;
}

int main(){
  int n;
  cin >> n;
  if(n>0){
    cout << "plus" << endl;
    checkEven(n);
  }
  else{
    cout << "minus" << endl;
    checkEven(n);
  }
  return 0;
}  
