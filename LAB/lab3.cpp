/*H*/
/* #include <iostream>
using namespace std; 

int main()
{
    
    string name;
    int age;
    float height;
    char group;
    bool full;
    
    cout<<"Name: "<< endl;
    cin >> name ;                             // or i can write as:
    cout<<"Age:  "<< endl;              // cin >> name>>age>>height>>group>>full;
    cin >>age ;   
    cout<<"Height: "<< endl;            // i did it because it will be easier to undesrtand for user    
    cin >> height ;
    cout<<"Group:  "<< endl;
    cin >>group ;
    cout<<"Full-time:  "<< endl;
    cin >> full;
    
    cout<<"---Student card--- "<< endl;
    cout<<"Name:          "<<name<< endl;
    cout<<"Age:           "<<age <<endl; 
    cout<<"Height:        "<<height <<endl;
    cout<<"Group:         "<<group <<endl;
    cout<<"Full-time:     "<<full <<endl;
    cout<<"Age in month:  "<<age * 12 <<endl;

    
    return 0;
} */ 
 
/*I*/
 /*
#include <iostream>
using namespace std;
  int main()
{
    
    int a;
    int b;
    cin>>a>>b;            
    cout<< "Sum:        "<<a+b<< endl;
    cout<< "Difference: "<<a-b << endl;
    cout<< "Product:    "<<a*b << endl;
    cout<< "Quotient:   "<<a/b << endl;
    cout<< "Remainder:  "<<a%b << endl;
    cout<< "Exact:      "<<float(a/b) << endl;
    
    return 0;
} */

 /*J*/
 /* 
 #include <iostream>
 using namespace std;
   int main ()
 {
    int a;
    cin>>a;
    cout <<"s= " << a/86400 <<" d " << (a%86400)/3600 <<" h "<<(a%3600)/60 <<" min " <<a%60 <<" s " << endl;

    return 0;
 }
*/
/*K*/
/*
#include <iostream>
using namespace std;
 int main()
 {
    int NOTEBOOK=8000;
    int PEN=2500;
    int CALC=95000;
    int VAT_PERCENT=12;
    int a;
    int b;
    int c;
    int d;
    cin>>a>>b>>c>>d;
    int T=(NOTEBOOK*a)+(PEN*b)+(CALC*c);
    int Total=((T*VAT_PERCENT)/100)+T;
    cout<<"Notebook    x "<<a <<" = "<< NOTEBOOK*a<< " sum "<< endl;
    cout<<"Pen         x "<<b <<" = " <<PEN*b << " sum "<<endl;
    cout<<"Calculator  x "<<c <<" = " <<CALC*c<< " sum " <<endl;
    cout<<"Subtotal:  "<<T << " sum " <<endl;
    cout<<"VAT 12%:   "<< (T*VAT_PERCENT)/100<< " sum "<<endl;
    cout<<"TOTAL:     "<< Total<< " sum "<<endl;
    cout<<"Paid:   "<<d<< " sum "<<endl;
    cout<<"Change: "<<d-Total<< " sum "<<endl;

    return 0;
 }
*/
/*L*/
/*1*/
/*
#include <iostream>
using namespace std;
 int main()
{
    int c;
    cin>> c;
    cout<<"Temperature= "<<((c*9)/5)+32 << endl; // just switch 5 and 9 since we should multiply to 9 not 5

    return 0;
}
    */
/*2*/
 /*   
#include <iostream>
using namespace std;
 int main()
 {
   int a;
   cin>>a;
   int b=a/1000;
   int c=a%(1000)/100;
   int d=(a%100)/10;
   int e=a%10;
   cout<< "Sum= "<<b+c+d+e<<endl;

    return 0;
 }
    */
/*3*/
/*
#include<iostream>
using namespace std;
 int main()
 {
     int a;
     cin>>a;
     cout<<a/100000<<"x100000, "<<(a%100000)/10000<<"x10000, "<<(a%10000)/1000<<"x1000 "<<" reminder "<<a%1000<<"som"<<endl;

    return 0;
 }
    */
