#include <iostream>
using namespace std;

int multiplication (int x, int n){
    while(x<=n){
                for ( int v(1); v<=13;v++){
                   cout<<x<<"x"<<v<<"="<<x*v;
                   cout<<'\n';
                   }x++;
                  cout<<'\n';
                  }
}

int main ()
{
    int x;
    int n;
    cout<<"What timetable do you wish to print?  please impute below"<<endl;
    cout<<"From :";cin>>x;cout<<"To :";cin>>n;
    multiplication(x,n);

    return 0;
}
