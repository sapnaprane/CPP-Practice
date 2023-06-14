#include <iostream>
using namespace std;

class gst
{
public : int price, st, qty, mrp, tot;
public : string item;

public  :  void set_price(int Price)
{
 price = Price;
}

public  :  void set_qty(int Qty)
{
 qty = Qty;
}

public  :  void set_st(int St)
{
 st = St;
}

public  :  void set_item(string Item)
{
 item = Item;
}

public :  int get_price()
{
  return price;
}

public :  int get_qty()
{
  return qty;
}

public :  int get_st()
{
  return st;
}

public :  string get_item()
{
  return item;
}

public  :  int get_tot()
{
  tot=price*qty;
  return tot;
}

public  :  int get_mrp()
{
  mrp=tot*st/100;
  return mrp;
}

public  :  int get_grtot()
{
  int grtot=tot+mrp;
  return tot;
}

};

int main()
{
  gst s;
  s.set_item("Television");
  s.set_price(62000);
  s.set_qty(2);
  s.set_st(5);
  
  cout<<"Item :"<<s.get_item()<<"\n";
  cout<<"Price :"<<s.get_price()<<"\n";
  cout<<"Qty :"<<s.get_qty()<<"\n";
  cout<<"Total :"<<s.get_tot()<<"\n";
  cout<<"GST :"<<s.get_mrp()<<" ("<<s.get_st()<<"%)\n";
  cout<<"Grand Total :"<<s.get_grtot()<<"\n";
  cout<<"--------------------------"<<"\n\n";
  
   
}



