#include <iostream>
using namespace std;
int main() {
  int inum=0;

  cout << "Informe a quantidade de numeros de entrada: \n ";
  cin >> inum;
  int nums[inum];
  
  for (int i=0; i<inum; i++){
    cout << "digite o "<<i+1 << "º numero: \n";
    cin >> nums[i];
  }

}