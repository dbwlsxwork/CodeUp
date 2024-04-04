#include <iostream>
using namespace std;

void checkEven(int n){
  if(n%2==0)
    cout << "even" << endl;
  else
    cout << "odd" << endl;
}

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  checkEven(a);
  checkEven(b);
  checkEven(c);
  return 0;
}
