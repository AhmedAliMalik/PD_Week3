#include <iostream>
using namespace std;

main(){

int minutes;
int seconds;
int fps;
int final;

cout<<"Number of Minutes: ";
cin>>minutes;

seconds=minutes*60;

cout<<"Frames per Second: ";
cin>>fps;

final=fps*seconds;

cout<<"Total Number of Frames: "<<final;



}