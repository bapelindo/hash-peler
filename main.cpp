#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main(){

  string i;
  int k[3];
  int ptr;
  int *kptr = &ptr;
  string kunci[2]{"W","E"};
  string X[3];
  string engkrip;
  string to[3]{"D","W","E"};
  char set[2];


  cout << "masukkan integer!: " << endl;
  cin >> k[0];//1
  cin >> k[1];//2
  cin >> k[2];//3

  k[0] = 293 + k[1];
  k[1] = 294 + k[2];
  k[2] = 295 + k[0];
  kunci[2] = k[0] * k[2];
  kunci[1] = k[1] * k[2];

  cout  << k[0] << k[2] << k[1] << kunci[2]<< kunci[1] << endl;
      system("pause");
  cout << "masukkan string!: " << endl;
  cin >> X[0];
  cin >> X[1];
  cin >> X[2];





  cout << "result: " << endl;
  cout << set << X[2] << kunci[2] << X[1] <<  rand() << endl;


}
