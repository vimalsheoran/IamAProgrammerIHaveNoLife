#include <iostream>

using namespace std;

int main(){

  int grade;
  cout << " Enter the Grade " << endl;
  cin >> grade;

  if(grade >= 95){
    cout << "Outstanding" << endl;
  }
  else if(grade < 95 && grade >= 80){
    cout << "Excellent" << endl;
  }
  else if(grade < 80 && grade >= 70){
    cout << "Good" << endl;
  }
  else if(grade < 70 && grade >= 55){
    cout << "Satisfactory" << endl;
  }
  else if(grade < 55 && grade >= 40){
    cout << "Poor" << endl;
  }
  else{
    cout << "Fail" << endl;
  }
    
}
