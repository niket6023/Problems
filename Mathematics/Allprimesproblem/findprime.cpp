#include <bits/stdc++.h>

using namespace std;

string basicprime(int n){

    int i=2;
	while(i<=n-1){
		if(n%i==0){
			return "Not prime";
		}
        i++;
	}
	return "prime";
}

string basicnby2(int n){
	int i=2;
	while(i<=n/2){
		if(n%i==0){
			return "Not prime";
		}
        i++;
	}
	return "prime";
}

string optiprime(int n){
 int i=2;
	while(i*i<=n){
		if(n%i==0){
			return "Not prime";
		}
        i++;
	}
	return "prime";
}
vector<int> printprime(int n){

	vector<int> ans;
	int currentno=2;
    while(currentno<=n){
	int j=2;
	while(j*j<=currentno)
	{
      if(currentno%j==0){
      	break;
      }
      j++;
	}
	if(j*j>currentno){
		ans.push_back(currentno);
	}
    currentno++;
    }
    return ans;
}
int main(){
	int a=12;
	int b=11;
	int c=87;
	cout<<basicprime(87)<<endl;
	cout<<basicnby2(87)<<endl;
	cout<<basicprime(87);

    vector<int> v= printprime(14);

    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<endl;
    }
	return 0;
}
