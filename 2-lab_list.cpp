#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;
//Jamshidbek Axlidinov 315-21;
//Dasturlash Lab 2;
int main(){
	list <int> l;
	int n, a,b;
	cout << "n= ";
	cin >> n;
	cout << "Nechidan kichik bo'lsin ";
	cin >> b;
	for (int i = 1; i <= n; i++){
		a = rand() % 100;
		l.push_back(a);
	} 
	cout<<"\nHamma elementlar\n";
        for(auto d:l){
            cout<<d<< " ";
        }
    cout<<"\n\n"<<b<<" dan kichik elementlar\n";
   int soni = 0;
    for(auto d:l){
        if(d<=b){
        soni++;
        cout<<d<< " ";
        }
    }
    if(soni==0){
        cout<<"Mavjud emas";
    }
    cout<<"\n\n";
    
    main();
}
