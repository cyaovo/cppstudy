#include <iostream>
#include <stdlib.h>   
#include <time.h> 
#include "bs.h"    
 
using namespace std;

const int N=10;

void creat(int a[], int n)            
{  int i; 
   srand(time(NULL));               
   for (i=0; i<N;i++)
     a[i]=rand()%100;     
}


int main()
{  int a[N],i,n;
   cin>>n;
   creat(a,n);
   
   cout<<'\n';  
   for (i=0; i<n;i++)     
     cout<<a[i]<<" ";
    cout<<'\n';
   bubbleSort(a,n);
   for (i=0; i<n;i++)     
     cout<<a[i]<<" ";
   cout<<'\n';
    system("pause");
    
   
   return 0;
}