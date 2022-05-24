+#include <iostream>
#include<array>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a;
	
	while(a--){
	    cin>>b;
	    int c[b];
	    for(int i=0;i<b;i++){
	        cin>>c[i];
	    }
	    sort(c.begin(),c.end());
	    for(int i=0;i<b;i++){
	        cout<<c[i];
	    }
	    
	    
	}
	return 0;
}
