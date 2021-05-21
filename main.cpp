#include <iostream>
using namespace std;

void  min_max(int inum, int *pnums[], int *pmin, int *pmax){

  for (int i=0; i<inum; i++){
    
    if (*pnums[i] > *pmax){
      *pmax = *pnums[i];
    }
    
    if (*pnums[i] < *pmin){
      *pmin = *pnums[i];
    }
  }
  
}

int main() {
  int inum=0, min=0, max=0;

  cout << "Informe a quantidade de numeros de entrada: \n ";
  cin >> inum;
  int nums[inum], *pnums[inum];

  for (int i=0; i<inum; i++){
    cout << "digite o "<<i+1 << "º numero: \n";
    cin >> nums[i];
    pnums[i] = &nums[i];
  }
min_max(inum, pnums, &min, &max);
cout << min<<endl;
cout << max<< endl;
}