#include <iostream>
using namespace std;

main(){


float cost, area, size, cost_per_pound, cost_per_sqft;

cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;

cout<<"Enter the cost of the bag: $";
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;

cost_per_pound=cost/size;
cost_per_sqft=cost/area;


cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<cost_per_sqft;



}