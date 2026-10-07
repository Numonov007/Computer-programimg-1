/*B1*/
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"input number between 1 and 150"<<endl;
cin>>n;

if(n%2==1){
    int a=n*2;
    cout<<a<<endl;  }

else{
    cout<<n<<endl;
}
    return 0;
}
*/
/*B2*/
/*
#include <iostream>
using namespace std;

int main() {
    long long num;

    cout << "input integer number " << endl;
    cin >> num;

     // int d1 = num % 10;            
     // int d2 = (num / 10) % 10;     
     // int d3 = (num / 100) % 10;    
     // int d4 = (num / 1000) % 10;   
     // int d5 = (num / 10000) % 10;  
     // int d6 = (num / 100000) % 10; 
   
    
    //  if (d1 == 0) {
      //    cout << "false";} 
    //  else if (d1 == 0 && d2 == 0) {
        //  cout << "false";} 
     // else if (d1 == 0 && d2 == 0 && d3 == 0) {
        //  cout << "false";}
     // else if (d1 == 0 && d2 == 0 && d3 == 0 && d4 == 0) {
        //  cout << "false";}
    //  else if (d1 == 0 && d2 == 0 && d3 == 0 && d4 == 0 && d5 == 0) {
       //   cout << "false";} 
     // else if (d1 == 0 && d2 == 0 && d3 == 0 && d4 == 0 && d5 == 0 && d6 == 0) { 
         // cout << "false";} 
      //else {
        //  cout << "true";} 
     if(num==0||num%10 !=0){
        cout<<"true";
     } else{
        cout<<"false";                // after finishing this long code then my mind is worked.But it was late. So i didn't delete
     }

    return 0;
} */
/*B3*/
/*
#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"input integer"<<endl;
 cin>>n;
  if (n == 1) {
        cout << 0 << endl;
    } 
    else if (n % 2 == 0) {
        cout << n / 2 << endl; 
    } 
    else {
        cout << n << endl;     
    }

    return 0;
}
*/
/*B3*/
/*
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"input number between 1 and 100"<<endl;
cin>>x;
int x1=x/100;
int x2=(x/10)%10;
int x3=x%10;
int sum=x1+x2+x3;
if (sum%x==0){
    cout<<sum;
}else{
    cout<<"-1";
}
    return 0;
}
    */
