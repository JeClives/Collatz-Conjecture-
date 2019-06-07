#include <iostream>
using namespace std;
void collatz(int n){
cout << "Your Input is "<<n<<endl<<endl;
 do{
    if(n%2==0)
    {
      cout<<n<<"/2 = "<<n/2<<endl;
      n=n/2;
    }
    else
    {
      cout<<n<<"*3+1 = "<<(n*3+1)<<endl;
      n=(n*3+1);
    }
   }
   while(n!=1);
   cout<<"1*3+1 = 4"<<endl<<"4/2 = 2"<<endl<<"2/2 = 1"<<endl;
   cout<<endl<<"And it goes on and on and on!!";
                   }

int main() {
int N=17;
cin>>N;
collatz(N);
    return 0;
}
