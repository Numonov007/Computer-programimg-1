/*A*/
/*
#include<iostream>
using namespace std;
int main(){
int a=7/2;
float b=7/2.0;
double c=7%3*1.5;
int d='A'+2;
int h='a'-'A';
bool e= true+true;
double f=5/2*3.0;
double g=3.0*5/2;
cout<< a<<endl;
cout<< b<<endl;
cout<< c<<endl;
cout<<d <<endl;
cout<<h <<endl;
cout<<e <<endl;
cout<<f <<endl;
cout<< g<<endl;
    return 0;
}
*/
/*B*/
/*
#include<iostream>
using namespace std;
int main(){
int i = 3.99;
double d = 7 / 2;
 double e = static_cast<double>(7) / 2;
 double f = static_cast<double>(7 / 2);
 int r = static_cast<int>(2.7 + 0.5);
 int n = -3.7;
 char c = 66;
 int k = 'z' - 'a' + 1;
 bool b = -5;
 cout << i << " " << d << " " << e << " " << f << endl; // line 1
 cout << r << " " << n << " " << c << " " << k << " " << b << endl; // line 2
   return 0;
}
   */
/*C*/
/*
#include<iostream>
using namespace std;
int main(){

 int a=4;
 int b=9;
 int c=0;
 char ch='m';
 if ("copy paste conditions from lab" ){
 cout << "true"<< endl; // line 2
}
else {
    cout<<"false"<<endl;
}


    return 0;
}
1. 1 (true)  5. 0 (false)
2. 0(false)  6. 0 (false)
3. 1 (true)  7. 1 (true)
4. 1 (true)  8. 1 (true)
*/
/*D*/
/*
1. x >= 1 && x <= 100            5.a != b && b != c && a != c
2. ch >= 'A' && ch <= 'Z'        6.a + b > c && a + c > b && b + c > a
3. n % 2 == 0 && n % 10 != 0     7.!(score >= 0 && score <= 100)
4. age < 18 || age > 60          8.1. h >= 0 && h < 24 && m >= 0 && m < 60
*/
/*E*/
/*
#include <iostream>
using namespace std;
int main(){
// just copy paste tests
    return 0;
}
 1. big     2. really big  3. nonzero,x=0   4.warm  5. c
    done
*/
/*F*/
/* 
a) it should be: if (n % 2 !== 0) { cout << "odd"; } else { cout << "even"; }
b) double avg = static_cast<double>(sum) / 3;
c) they forget {} while using else and if
d) they should use && not ||
*/
/*G*/
/*
1. T                               4. T
2. F int stores only decimal part. 5. F  it should be ==
3. F it will be 3                  6. T
*/
/*H*/
/*
1. b.   4. a  
2. a    5. c
3. a.   6. a
*/
/*I*/
/*
#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    int score1, score2, score3;

cout << "Enter three scores (0-100): "<<endl;
cin >> score1 >> score2 >> score3;
int sum = score1 + score2 + score3;
double exact_average = static_cast<double>(sum) / 3.0;
int rounded_average = static_cast<int>(exact_average + 0.5);
double percentage = (static_cast<double>(sum) / 300.0) * 100.0;
int wrong_average = sum / 3;
cout << "--- Results ---"<<endl;
cout << "Sum: " << setw(25) <<sum << endl;
cout << "Exact average: " << setw(19)<< exact_average << endl;
cout << "Rounded average: " << setw(12)<< rounded_average << endl;
cout << "Percentage of max (300):   "<< percentage << "%"<<endl;
cout << "Wrong average (sum / 3): " << setw(4)<< wrong_average <<endl;

    return 0;
}
    */