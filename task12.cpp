#include <iostream>
using namespace std;

main(){

int sqmt, height, width, area, final;

cout<<"Number of square meters you can paint: ";
cin>>sqmt;

cout<<"Width of the single wall (in meters): ";
cin>>width;

cout<<"Height of the single wall (in meters): ";
cin>>height;

area=height*width;

final=sqmt/area;

cout<<"Number of walls you can paint: "<<final;
}
