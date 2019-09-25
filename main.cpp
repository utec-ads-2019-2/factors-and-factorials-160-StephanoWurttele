#include <iostream>
#include <map>
#include <cmath>
using namespace std;


void primeFactors(int n, map<int,int> &numeros){  
    while (n % 2 == 0)  
    {  
        numeros[2]++;
        n = n/2;  
    }  

    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            numeros[i]++;
            n = n/i;  
        }  
    }  
    if (n > 2){
        numeros[n]++;
    }
}  





int main(){
	int a;
	while(cin>>a){
		if(a==0)
			continue;
	map<int,int> numeros;
		for(int owo=1;owo<a+1;owo++){
            primeFactors(owo,numeros);
        }
	if(a==100)
		cout<<a<<"! =";
	else if(a<10){
        	cout<<"  "<<a<<"! =" ;
	}
	else{
        	cout<<" "<<a<<"! =" ;
	}
        int temp=0;
        for (auto it=numeros.begin();it!=numeros.end();it++){
            if (temp/15>=1 && temp%15==0){
                cout<<endl<<"      ";
		temp=0;
            }
            if (it->second<10){
                cout<<"  "<<it->second;
            }else{
                cout<<" "<<it->second;
            }
            temp++;
        }
	cout<<endl;
    }
}
