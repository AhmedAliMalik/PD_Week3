#include <iostream>
using namespace std;

main(){

float icount, pcount;
float chance;
int final;

cout<<"Enter Imposter Count: ";
cin>>icount;

cout<<"Enter Player Count: ";
cin>>pcount;

chance=(icount/pcount);
final=chance*100.0;


cout<<"Chance of being an imposter: "<<(final)<<"%";


}