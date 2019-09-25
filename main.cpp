#include <iostream>
#include <map>
#include <cmath>
using namespace std;


void primeFactors(int n, map<int,int> &numeros){  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        numeros[2]++;
        n = n/2;  
    }  

    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            numeros[i]++;
            cout << i << " ";  
            n = n/i;  
        }  
    }  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2){
        cout << n << " ";  
        numeros[n]++;
    }
}  





int main(){
	int a;
	map<int,int> numeros;
	while(cin>>a){
		for(int owo=1;owo<a+1;owo++){
            cout<<"Primes of "<<owo<<endl;
            primeFactors(owo,numeros);
            cout<<endl<<endl;
        }
        cout<<endl;
        cout<<a<<"! = " ;
        int temp=0;
        for (auto it=numeros.begin();it!=numeros.end();it++){
            if (temp/15>=1 && temp%15==0){
                cout<<endl<<"      ";
            }
            if (it->first<10){
                cout<<"  "<<it->second;
            }else{
                cout<<" "<<it->first;
            }
            temp++;
        }
    }
}
