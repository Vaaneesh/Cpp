#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}
int main(){
   int n1 = 0, n2 = 0;
   cout<<"enter n1: ";
   cin>>n1;
   cout<<"enter n2: ";
   cin>>n2;

   swap(&n1, &n2);
   
   cout<<"After swapping, n1="<<n1<<" and n2="<<n2<<"";
   
   return 0;
}