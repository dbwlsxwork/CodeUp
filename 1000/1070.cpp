#include <iostream>
using namespace std;

void checkSeason(int n){
  switch(n){
  case 12:
  case 1:
  case 2:
    cout << "winter";
    break;
  case 3:
  case 4:
  case 5:
    cout << "spring";
    break;
  case 6:
  case 7:
  case 8:
    cout << "summer";
    break;
  default:
    cout << "fall";
  }
}

int main(){
  int n;
  cin >> n;
  checkSeason(n);
  return 0;
}
