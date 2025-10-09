// Input = " make compile run var="numbers" 


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

  int n = argc - 1;
  int *a = new int[n]; 
  int *p_temp = a;
  for (int i = 0; i < n; i++) {
    *p_temp = atoi(argv[i + 1]); 
    p_temp++; 
  }

  cout << "Original: ";
  for (int i = 0; i < n; i++) {
    cout << setw(4) << a[i];
  }
  cout << endl;

  int *pa = a;
  int *pb = a + n - 1;
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++;
    pb--;
  }

  cout << "Reversed: ";
  for (int i = 0; i < n; i++) {
    cout << setw(4) << a[i];
  }
  cout << endl;

  delete[] a;

  return 0;
}
/*int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
pa = &a[0]; //pa =a;
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = &a[0];  
pb = &a[SIZE-1];
for (i=0; i<SIZE/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa=&a[0];
pb-=SIZE/2;
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;


return 0;
}
*/