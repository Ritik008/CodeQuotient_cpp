#include<iostream>

using namespace std;

class Bill
{
  protected: int item_price, qty, n_2000,n_500, n_100, n_50, n_10,bill,bal,remain;
};

class Cash : public Bill
{
 public: void get_cash()
 {
 	// Complete the input function, dont change the name.
    cin>>item_price>>qty>>n_2000>>n_500>>n_100>>n_50>>n_10;
    bill=item_price*qty;
    bal=(n_2000*2000)+(n_500*500)+(n_100*100)+(n_50*50)+(n_10*10);
    if(bal<bill)
    {
    	remain=bill-bal;
    } else if(bal>=bill)
    {
    	remain=2;
    }
 }

 public: void display()
 {
 	// Complete the display function, dont change the name.
    if(remain==2)
    {
    cout<<"Clear";
    } else {
    cout<<"Need to pay: "<<remain;
    }
 }

};
