#include <iostream>
#include <math.h>

using namespace std;
typedef double (*uf)(double, double, int &);
double y(double x, double eps, int &k) {
    return 1/(1-x);
}
double s(double x, double eps, int &k) {
    double a,c,sum; sum=a=c=x;
    k=1;
    sum = 0;
    while (fabs(c)>eps) {
        c = pow(2, k-1)*pow(x, pow(2, k-1)-1) / ( 1+pow(x, pow(2, k-1)));
        //a *= c;
        sum +=c; k++;
    }
    return sum;
    
}

void tabl(double a, double b, float h, double eps, uf fun) {
    int k=0;
    
    double sum;
    for (double x=a; x<b+h/2; x+=h) {
        x = round(x*10)/10;
        
        sum=fun(x,eps,k);
        cout <<"        " << x << "        " << sum << "              "<< k << endl;
    }
}


int main()
{
    cout << "        " <<"x"<< "        " <<"y(x)"<< "                     " << "k" << endl;
    tabl(-0.3,0.4,0.1,0.0001,y);
    cout << endl<<endl<<endl;
    cout << "        " <<"x"<< "        "<<"s(x)"<<"                      "<< "k" <<endl ;
     tabl(-0.3,0.4,0.1,0.0001,s);
    return 0;
}
 

