#include <iostream>
using namespace std;
int main(void){
    int c,a,b,num1,num2;
    double d,num1d,num2d;
    double sum,minu,mul,dev;
    bool loop=true;
    while(loop)
    {
    	cout<<"First number is Int then type 1 else type 0"<<endl;
   		cin>> a;
   		cout<<"input numb1=";
   		if(a==1){cin>>num1;}
   		else cin>>num1d;
   		cout<<"Second number is Int then type 1 else type 0"<<endl;
   		cin>> b;
   		cout<<"input numb2=";
   		if(b==1){cin>>num2;}
   		else cin>>num2d;
   		if(a==true && b==true){
   		    sum= num1+num2;
   		    mul= num1*num2;
   		    minu= num1-num2;
   		    dev= num1/num2;
   		}
   		else if(a!=true && b==true){
   		    sum= num1d+num2;
   		    mul= num1d*num2;
   		    minu= num1d-num2;
   		    dev= num1d/num2;
   		}
   		else if(a==true && b!=true){
   		    sum= num1+num2d;
   		    mul= num1*num2d;
   		    minu= num1-num2d;
   		    dev= num1/num2d;
   		}
   		else{
   		    sum= num1d+num2d;
   		    mul= num1d*num2d;
   		    minu= num1d-num2d;
   		    dev= num1d/num2d;
   		}
   		cout<<"num1+num2="<<sum<<endl;
   		cout<<"num1-num2="<<minu<<endl;
   		cout<<"num1*num2="<<mul<<endl;
   		cout<<"num1/num2="<<dev<<endl;
   		cout<<"Countinue type 1 else type 0"<<endl;
   		cin>> c;
   		if (c==0)
   		{
   			loop=false;
   		}
   	}
    
}
