#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    

public:
    int counter;
    void initcounter(void) { counter = 0; }
    void setprice();
    void displayprice();
};
void shop ::setprice(void)
{
    cout << "Enter Id for your item " << endl;
    cin >> itemId[counter];
    cout << "Enter price for your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int k;
    cout<<"Enter the number"<<endl;
    cin>>k;
    shop dukaan;
    dukaan.initcounter();
    //dukaan.setprice();
    // dukaan.setprice();
    // dukaan.setprice();

    
    for (int i = 0; i < k; i++)
    {
        dukaan.setprice();
    }
    
    
    // int i=0;
    // while(i<k){
    //     dukaan.setprice();
    //     i++;
    // }
    dukaan.displayprice();
    return 0;
}