#include <iostream>
using namespace std;

main(){

int sum, num1, num2, num3, num4, dig4, dig3, dig2, dig1;


cout<<"Enter a 4-digit number: ";
cin>>num1;

dig4=num1%10;

num2=num1/10;
dig3=num2%10;

num3=num2/10;
dig2=num3%10;

num4=num3/10;
dig1=num4%10;

sum=dig1+dig2+dig3+dig4;

cout<<"Sum of the individual digits: "<<sum;


}