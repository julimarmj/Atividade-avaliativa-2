#include <iostream>
using namespace std;

void  min_max(int inum, int *pnums[], int *pmin, int *pmax){

}

int main() {
  int inum=0, *pmin, *pmax=0;

  cout << "Informe a quantidade de numeros de entrada: \n ";
  cin >> inum;
  int nums[inum], *pnums[inum];

  for (int i=0; i<inum; i++){
    cout << "digite o "<<i+1 << "º numero: \n";
    cin >> nums[i];
    pnums[i] = &nums[i];
  }
min_max(inum, pnums, pmin, pmax);
}