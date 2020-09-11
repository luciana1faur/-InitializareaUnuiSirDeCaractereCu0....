#include <iostream>
using namespace std;

//Creaţi un program care iniţializează cu 0 valorile elementelor unui şir de valori a declarat astfel: int a[20];

int main(){

  int i, a[20];

  for (int i = 0; i < 20; i++) {
       a[i] = i + 1;   
  }
  for (int i = 0; i < 20; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

//a[0] = 1, a[1] = 2, a[2] = 3 ..., a[19] = 20.
 // a[0] = 101, a[1] = 102, a[2] = 103 ..., a[19] = 120.
 // a[0] = 19, a[1] = 18, a[2] = 17, ... a[19] = 0.