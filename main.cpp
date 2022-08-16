#include <iostream>
#include <cmath>
using namespace std;
int main()
{
while(1){
   cout<<"Program to calculate the area of"<<endl;
   cout<<"a)Circle"<<endl;
   cout<<"b)Rectangle"<<endl;
   cout<<"c)Square"<<endl;
   cout<<"d)Triangle"<<endl;
   cout<<"Which option do you want (a/b/c/d)?"<<endl;

   char ch;
   cin>>ch;

   if(ch=='a'){
    cout<<"Radius = ? ";
    int radius;
    cin>>radius;
    double r = 3.1416*(radius*radius);
    cout<<"Area of circle is : "<<r<<endl;
   }
   else if(ch=='b'){
    int len,wid;
    cout<<"Length = ? ";
    cin>>len;
    cout<<"Width = ? ";
    cin>>wid;
    int ra = len*wid;
    cout<<"Area of Rectangle is : "<<ra<<endl;
   }
   else if(ch=='c'){
    int side;
    cout<<"Length of a side = ? ";
    cin>>side;
    int as = (side*side);
    cout<<"Area of Square is : "<<as<<endl;
   }
   else if(ch=='d'){
    double tside1,tside2,ang;
    cout<<"Length of two adjoining sides ? "<<endl;
    cout<<"Enter 1st side = ";
    cin>>tside1;
    cout<<"Enter 2nd side = ";
    cin>>tside2;
    cout<<"Angle between them = ";
    cin>>ang;
    double at = (0.5)*(tside1*tside2)*(sin(ang));
    cout<<"Area of Triangle is : "<<at<<endl;
  }
  else{
    cout<<"Please Enter a correct option"<<endl;
  }
}
    return 0;
}
