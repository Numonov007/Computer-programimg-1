
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
