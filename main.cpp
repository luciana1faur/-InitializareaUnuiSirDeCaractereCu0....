#include <iostream>
using namespace std;

//Creaţi un program care iniţializează cu 0 valorile elementelor unui şir de valori a declarat astfel: int a[20];

int main(){

  int i, a[20];

  for (int i = 0; i < 20; i++) {
       a[i] = 0;   
  }
  for (int i = 0; i < 20; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
