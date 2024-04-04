#include <iostream>
using namespace std;

void checkGrade(int n){
  if(n>=90 && n <=100) cout << "A";
  else if(n>=70 && n<90) cout << "B";
  else if(n>=40 && n<70) cout << "C";
  else cout << "D";
}

int main(){
  unsigned int n;
  cin >> n;
  checkGrade(n);
  return 0;
}
