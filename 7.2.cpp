#include <iostream>
#include <cmath>

using namespace std;
int main() {

int m,n,x,y;

cout<<"please enter your number:\n";

cin>>m;
cout<<"devided to?\n";
cin>>n;
if (m==n) {

   cout<<"your y is 1 and your x is 0";
}
y=0;
x=0;
while (m>=n) {

    m=m-n;
    y++;
}
cout<<x<<"  ";
cout<<y;

}