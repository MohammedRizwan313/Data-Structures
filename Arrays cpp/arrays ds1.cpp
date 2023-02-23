#include <iostream>
using namespace std;
int array[100],position,element;
int n=0;

void create();
void display();
void insert();
void del();


int main()
{
    int choice;
    while(1)
    {
        cout<<"___Welcome to implementation of list data structure using arraya___";
        cout<<"\n 1.Create an array";
        cout<<"\n 2.Display the array";
        cout<<"\n 3.Enter the element in array";
        cout<<"\n 4.Delete the element in array";
        cout<<"\n 5.exit ";
        cout<<"\n ENTER YOUR CHOICE::";
        cin>>choice;
    switch(choice)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        del();
        break;
        case 5:
        exit(1);
        break;
        default:
        cout<<"Please enter valied choice of instruction";
    }
    }
    return 0;
}

void create()
{
    int i;
    cout<<"Enter no of elements";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
}

void display()
{
    int i;
    if(n==0)
    {
        cout<<"Sorry the array is empty";
    }
    else
    {
        cout<<"Elements are";
        for(i=0;i<n;i++)
        {
            cout<<array[i];
        }
    }
}
void insert()
{
    int i=0;
    cout<<"Enter the position of insertion";
    cin>>position;
    if(position>n)
    {
        cout<<"position out of Boundary";
        return;
    }
    else
    {
        cout<<"Enter the element";
        cin>>element;
        for(i=n;i>=position;i--)
        {
            array[i+1]=array[i];
        }
    }
    array[position]=element;
    n=n+1;
    display();
}
void del()
{
    int i=0;
    if(n<=0)
    {
        cout<<"The list is empty";
        return;
    }
    else
    {
        cout<<"Enter the position to delete";
        cin>>position;
        for(i=position;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
        n=n-1;
        display();
    }
}











