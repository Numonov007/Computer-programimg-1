/*
#include <iostream>
using namespace std;
void evenOddBit(int n, int& even,int& odd){
    even=0;
    odd=0;
    int i=0;
    while (n>0){
     if (n%2==1){
        if (i%2==0){even++;}
        else{odd++;}
    }
     i++;
    n/=2;
    }
}
int main() 
{
  int n; 
  cin>>n;
  int even=0;
  int odd=0;
 if (n>=1 && n<=1000){
evenOddBit(n,even,odd);
 cout<<even<<" "<<odd;



 }
 else{
    cout<<"invalid";
 }
    return 0;
} *//*
#include <iostream>
using namespace std;
int digitSum(int x){
int s=0;
 while(x>0){
    s+=x%10;
    x/10;
 }
return s;
}
int countEven(int num){
int count=0;
 for(int i=1;i <= num; i++){
    if(digitSum(i)%2==0){count++;}}
return count;}
int main(){
int num;
cin >>num;
cout<<countEven(num);
return 0;
} *//*
  #include <iostream>
using namespace std;
int bitwiseComplement(int n){
    int i=0;
    int z=0;
   
    while (n>0){
    if(n%2==0){
        i++;
    }
    z+=n%2;
     n/=2;
    }
     int t=z+i;
     return t;}
int main(){
int n;
cin>>n;
cout<<bitwiseComplement(n);
return 0;
} *//*
#include <iostream>
using namespace std;
void sortTwo(int& a, int& b){
if(a>b){
    int c=a;
    a=b;
    b=c;
}
}
int minimumSum(int num){
int a=num%10;
int b=(num/10)%10;
int c=(num/100)%10;
int d=(num/1000);
 sortTwo(a,b);
 sortTwo(c,d);
 sortTwo(a,c);
 sortTwo(b,d);
 sortTwo(b,c);
int new1=a*10+c;
int new2=b*10+d;
return new1+new2 ;
}
int main(){
int num;
cin>>num;
if (num>=1000&&num<9999){


cout<<minimumSum(num);



}
else{cout<<"error";}
return 0;}*/ 
#include <iostream>
using namespace std;
void bitwiseComplement(int x,int& a,int& b){
 int t=x+1;
 int z=x+2;
    while (n>0){
    i
    }
    
    }
    
     }
int main(){
int n;
cin>>n;
int a=sqrt(n);
int b=sqrt(n)
bitwiseComplement(n,a,b);
cout<<a<<" "<<b;
return 0;
} *//*
