/*1*/
/*
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int score=0;
int i=1;

while (i < n) {
        score += abs(s[i] - s[i-1]);
        i++; 
    }
    
cout<<score<<endl;

    return 0;
}
    */
    /*2*/
/*
#include <iostream>
using namespace std;
int main(){
long long num;
cin>>num;
long long test=num;
int count=0;
while (test>0){
 int digit=test%10;
 if (num%digit==0){
    count++;
 }
 test/=10;
}
cout<<count;

        return 0;
} */
 /*3*/
 /*
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i = 0;
int odd=0;
bool found=false;
    while (true) {
        if (count == n) {
            break;
        }
        
        int x;
        cin >> x;
        count++;
        
       
        if (x % 2 != 0) {
            odd++;
            if (odd == 3) {
                found = true;
            }
        } else {
            odd = 0; 
        }
    }
    
   
    if (found) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }



    return 0;
 }
    */
/*4*/
/*
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int half1=0;
int half2=0;

int i=0;
while(i<n){
    char c=s[i];

    bool check=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
  if (check){
    if (i<n/2){
    half1++;
  } else {
    half2;
  }}
  i++;

}
 
if (half1==half2){
    cout<<"true";
} else {
    cout<<"false";
}
 return 0;
}
*/
/*5*/
/*
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 2 << endl;
        return 0;
    }
     int ways1 = 1; 
    int ways2 = 2;
    int current = 0;
    
    int step = 3;
    while (step <= n) {
        current = ways2 + ways1; 
        
      
        ways1 = ways2;
        ways1 = current;
        
        step++;
    }

    cout << current << endl;
 return 0; }
*/
/*6*/
/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    
    bool up = true;
    bool down = true; 

    int num;
    cin >> num;
    
    int count = 1;
    while (count < n) {
        int current;
        cin >> current;
        
        
        if (current < num) {
            up = false;
        }
        
        if (current > num) {
            down = false;
        }
        
        num = current; 
        count++;
    }
    
    if (down || up) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
*/
/*7*/
/*
#include <iostream>
using namespace std;
int main (){
    long long n;
    cin >> n;
    
    int max_dist = 0;
    int last_position = -1; 
    int current_position = 0; 
    
    while (n > 0) {
       
        if (n % 2 == 1) {
            if (last_position != -1) {
             
                int dist = current_position - last_position;
                if (dist > max_dist) {
                    max_dist = dist;
                }
            }
            
            last_position = current_position;
        }
        
        n /= 2; 
        current_position++;
    }
    
    cout << max_dist << endl;
    
    return 0;
}
*/
/*8*/
/*

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    bool found = false;
    int k = 0;
    
    
    while (k <= num) {
     
        int temp = k;
        int reverse_k = 0;
        while (temp > 0) {
            reverse_k = reverse_k * 10 + (temp % 10);
            temp /= 10;
        }
        
        if (k + reverse_k == num) {
            found = true;
            break; 
        }
        
        k++;
    }
    
    if (found) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main (){



    return 0;
}
