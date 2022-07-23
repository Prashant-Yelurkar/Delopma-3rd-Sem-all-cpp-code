#include<iostream>
using namespace std;
int main()
{
  int p,d,e,f,j,i,k;
  int a[50][50], b[50][50], c[50][50];
  cout<<endl<<"Enter how many row you want  of first matrix: ";
  cin>>p;
  cout<<endl<<"Enter how many colums you want  of first matrix: ";
  cin>>d;
  cout<<endl<<"Enter how many row you want  of second matrix: ";
  cin>>e;
  cout<<endl<<"Enter how many colums you want  of second matrix: ";
  cin>>f;
  while((p!=f) && (d!=e))
  {
    cout<<"Wrong size of matrix enter same size of matrix :"<<endl<<endl;
    cout<<endl<<"Enter how many row you want of first matrix: ";
    cin>>p;
    cout<<endl<<"Enter how many colums you want of first matrix: ";
    cin>>d;
    cout<<endl<<"Enter how many row you want of second matrix: ";
    cin>>e;
    cout<<endl<<"Enter how many colums you want of second matrix: ";
    cin>>f;
  }
  cout<<endl<<"Enter value of first matrix :"<<endl;
  for (i=0;i<p;i++)
  {
    for(j=0;j<d;j++)
    {
      cout<<"Enter a"<<"["<<i+1<<"]"<<"["<<j+1<<"] : ";
      cin>>a[i][j];
    }
  }
  cout<<endl<<"Enter value of second matrix :"<<endl;
  for (i=0;i<e;i++)
  {
    for(j=0;j<f;j++)
    {
      cout<<"Enter b"<<"["<<i+1<<"]"<<"["<<j+1<<"] : ";
      cin>>b[i][j];
    }
  }
  for(i=0;i<p;i++)    
  {    
      for(j=0;j<d;j++)    
      {    
        c[i][j]=0;    
        for(k=0;k<d;k++)    
        {    
          c[i][j]+=a[i][k]*b[k][j];    
        }    
      }    
  } 
  cout<<endl<<"After multiplication of both array :"<<endl;
  for (i=0;i<p;i++)
  {
    for(j=0;j<d;j++)
    {
      cout<<a[i][j]<<"   ";
    }
    cout<<"    *    ";
    for(j=0;j<e;j++)
    {
      cout<<b[i][j]<<"   ";
    }
    cout<<"    =    ";
    for(j=0;j<d;j++)
    {
      cout<<c[i][j]<<"   ";
    }
    cout<<endl;
  }
  return 0;
}
