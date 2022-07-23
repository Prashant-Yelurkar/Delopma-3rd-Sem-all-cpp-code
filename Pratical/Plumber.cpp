#include<iostream>
#include<string.h>
using namespace std;
class worker
{
    private:
        char name [20];
        char skill[20];
    public:
        void accept()
        {
            cout<<endl<<"Enter name of worker : ";
            cin>>name;
            cout<<"Enter skill of worker : ";
            cin>>skill;
        }
        void display()
        {
            int a;
            a = strcmp(skill,"Plumber");
            if (a == 0)
            {
                cout<<endl<<"Worker having skill Plumber : "<<endl<<endl;
                cout<<"Worker name : "<<name;
            }
        }
};
int main ()
{
    int i;
    worker w[5];
    for (i=0;i<5;i++)
    {
        w[i].accept();
    }
    for (i=0;i<5;i++)
    {
        w[i].display();
    }
    return 0;

}
