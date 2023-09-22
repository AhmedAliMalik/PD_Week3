#include <iostream>
using namespace std;

main(){

string name;
float adult_price, child_price, adult_total, child_total, amount, charity, charity_amount, remaining;


cout<<"Enter the movie name: ";
cin>>name;

cout<<"Enter the adult ticket price: $";
cin>>adult_price;

cout<<"Enter the child ticket price: $";
cin>>child_price;

cout<<"Enter the number of adult tickets sold: ";
cin>>adult_total;

cout<<"Enter the number of child tickets sold: ";
cin>>child_total;

cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;

amount=(adult_price*adult_total)+(child_price*child_total);
charity_amount= amount*charity/100;
remaining=amount-charity_amount;

cout<<endl;
cout<<"Movie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
cout<<"Donation to charity ("<<charity<<"%): $"<<charity_amount<<endl;
cout<<"Remaining amount after donation: $"<<remaining;



}