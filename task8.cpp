#include <iostream>
using namespace std;

main(){

float veg_price, fruit_price;
float kgf, kgv, Rps;

cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>veg_price;

cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit_price;

cout<<"Enter total kilograms of vegetables: ";
cin>>kgv;

cout<<"Enter total kilograms of fruits: ";
cin>>kgf;

Rps=(veg_price*kgv)/1.94+(fruit_price*kgf)/1.94;

cout<<"Total earnings in Rupees (Rps): "<<Rps;

}