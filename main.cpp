#include <iostream>

#include <iomanip>
#include <ctime>
using namespace std;


void Sort(int* mas, int k) 
{
 int temp = 0; 
 bool exit = false; 
 
 while (!exit) 
 {
  exit = true;
  for (int i= 0; i < (k - 1); i++)
    if (mas[i] > mas[i + 1]) 
    {
    
     temp = mas[i];
     mas[i] = mas[i+1];
     mas[i+1] = temp;
     exit = false; 
    }
    
 }
}

 int main()
 {
   int a[10],b[10],c[20];
   int i,j;
   
   for(i=0;i<10;i++) 
    {
      cin>>a[i];
      cin>>b[i];
    }
    
    for(i=0;i<10;i++)
      c[i]=a[i];
      for(i=10;i<20;i++) 
      {c[i]=b[j];
      j++;
      
      }
   
   Sort(c,20); 
 
    for (int i = 0; i < 20; i++)
    {
        cout << setw(2) <<c[i] << "  "; 
    }
   return 0;
 }
