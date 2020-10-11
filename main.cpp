
#include <iostream>
#include <stdlib.h>//srand and rand 
using namespace std;

//Struct for Number data members value and quantity
struct Number
{
    int value;
    int quantity;
};

//function called find mode
int findMode( int size, int arrayList[] )
{
    Number mode = {0,0};
    int valueQuantities[size];
    for ( int p = 0; p < size; p++)
    {
        
        valueQuantities[ arrayList[p] ] += 1;
        cout<<" arrayList[p] "<< arrayList[p]<<endl;
        cout<<"Value = "<<arrayList[p]<<" Quantity = "<<valueQuantities[ arrayList[p] ]<<endl;
        if ( mode.quantity < valueQuantities[ arrayList[p] ] )
        {
            mode.quantity = valueQuantities[ arrayList[p] ];
            mode.value = arrayList[p];
        }
    }
    return mode.value;
}

int main()
{

    //get n a size for the lost from user
    cout<<"Enter a list size: "<<endl;
    int n;
    cin>>n;
    int list[n];
    //create randomized list with value less than n
    srand(time(0));
    for ( int i = 0; i < n; i++)
    {
        list[i] = rand() % n;
        cout<<list[i]<<endl;
    }
    //callfind mode
    cout<<"Mode = "<<findMode( n, list );
    return 0;
}
