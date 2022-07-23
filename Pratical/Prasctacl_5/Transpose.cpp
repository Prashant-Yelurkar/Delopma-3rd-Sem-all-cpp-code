#include<iostream>
using namespace std;
int main()
{
  int p,d,j,i;
  int a[50][50],transpose[50][50];
  cout<<endl<<"Enter how many row you want : ";
  cin>>p;
  cout<<endl<<"Enter how many colums you want : ";
  cin>>d;
  cout<<endl<<"Enter value of matrix :"<<endl;
  for (i=0;i<p;i++)
  {
    for(j=0;j<d;j++)
    {
      cout<<"Enter a"<<"["<<i+1<<"]"<<"["<<j+1<<"] : ";
      cin>>a[i][j];
    }
  }
  cout<<endl<<"Before Transpose array :"<<endl<<endl;
  for (i=0;i<p;i++)
  {
    for(j=0;j<d;j++)
    {
      cout<<a[i][j]<<"   ";
    }
    cout<<endl;
  }
   for (int i = 0; i < p; ++i)
    {
      for (int j = 0; j < d; ++j) 
      {
        transpose[j][i] = a[i][j];
      }
    }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < d; ++i)
   {
      for (int j = 0; j < p; ++j) 
      {
        cout << "  " <<transpose[i][j] << "  " ;
        if (j == p - 1)
          cout << endl << endl; 
      }
   } 
} 
