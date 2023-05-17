#include <iostream>
#include <iomanip>
#include <cstring>
#define SIZE 100
using namespace std;

int main(){
  /*int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  */
 /* 
  int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;
   int b=6;
  
}
*/
/*Example Array*/
/*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	

 the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) 
}
*/

char *pa, *pb, i, temp;
char a[SIZE];
  
    cout<<"Input string: ";
    cin>>a;
    int n = strlen(a);
    pa = &a[0]; 
    cout<<"Original: ";
    for (i=0; i<n-1; i++ ,pa++)
    {
      cout<<setw(3)<<*pa;
    }
  cout<<setw(3)<<*pa<<endl;

pa=&a[0]; pb = &a[n - 1];
  cout << "Reverse: ";
  pb = &a[n - 1];
    for ( i = 0; i < n / 2; i++) {
      temp = *pa;
      *pa = *pb;
      *pb = temp;
      pa++; pb--;
    }
pa = &a[0];
  for ( i = 0; i < n-1; i++, pa++) {
    cout <<setw(3)<< *pa;
  }
cout<<setw(3)<<*pa << endl;
}