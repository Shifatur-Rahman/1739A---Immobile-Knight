#include <iostream>
using namespace std;
int main(){

int t, n, m;
cin>>t;

while(t--){
	cin>>n>>m;

	if(n<=2 && m<=2){
		cout<<n<<" "<<m<<endl;
	}

	else if((n>=2 && n<4) && (m>=2 && m<4)){
		cout<<2<<" "<<2<<endl;
	}

	else{
		cout<<n<<" "<<m<<endl;
	}

}


}
