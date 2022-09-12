#include<iostream>

using namespace std;

class meena{
	
	public:
		
		int a;
		int b;
		
		void fun(){
			
			cout<<"Enter the Number : ";
		    cin>>a;
		    
		    cout<<endl;
		    
			b=a*a*a;
			cout<<"Cube : "<<b;
		}
};

main(){
	meena obj;
	
	obj.fun();
}
