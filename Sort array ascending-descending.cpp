#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter your array number : ";
    cin>>n;
    int number[n];
    cout<<"Enter your array value : ";
    for( i = 0 ; i<n ; i++)
    {
        cin>>number[i];
    }
    for(i = 0; i<n; i++)
    {

        for(j =i+1; j<n; j++)
        {
            if(number[i]<number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

    }
    cout<<"Descending order is : ";
    for(int k =0 ; k<n ; k++)
    {
        cout<<" "<<number[k];

    }


    getch();
}
