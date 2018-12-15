#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x,y,f,a,s;
    int k;
    cout << "Введите x = ";
    cin >> x;
    cout << endl;
    cout << "Введите y = ";
    cin >> y;
    cout << endl;
    cout<<"Выберите:1-sh(x),2-x^2,3–exp(x)  : ";
    cin>>k;
    cout << endl;
    switch(k)
    {
        case 1: f=sinh(x);
            
        case 2: f=pow(x,2);
            
        case 3: f=exp(x);
        
            
        default: cout << "Функция не выбрана! "<<endl;
            
            return 1;
    }
    a = x/y;
    if (a<0) {
        s = pow((pow(f,2)+y),3);
    }
   else
       if (a>0) {
        s = (log(fabs(f/y))) + x/y;
    }else {
        s = pow(fabs(sin(y)),1.0/3);
    }
    cout << "Ответ : "<< s<< endl;
}
        
  
