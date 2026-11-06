/*Write and test the following function that removes an item from an array:
void remove(float a[], int& n, int i);
The function removes a[i] by shifting all the elements above that position are down and
decrementing n.*/
#include<iostream>
using namespace std;

void remove(float[], int&, int); //Function prototyping.

int main()
{
    int n; //n for element number.
    cout<<"Enter element no:";
    cin>>n;

    float a[n];

    cout<<"Enter elements:"<<endl;
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }

    int ini=3; //element no 4 er value remove korte chai.

    remove(a, n, ini);

    cout<<"After removing:"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }

    return 0;
}

void remove(float a[], int& n,int i)
{
    for(int k=i;k<n-1;k++)
    {
        a[k]=a[k+1];
    }

    n=n-1;
}