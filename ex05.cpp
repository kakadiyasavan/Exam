#include<iostream>

using namespace std;

class Design{
	
	public: 
	
	void sum(){
		
		int a;
		int b;
		int c;
		int d;
		
		cout<<"1(+) 2(-) 3(*) 4(/) 5(%) Enter Number : ";
		cin>>a;
		
		cout<<endl<<endl;
		
		cout<<"Enter number one value : ";
		cin>>b;
		
		cout<<endl<<endl;
		
		cout<<"Enter number two value : ";
		cin>>c;
		
		cout<<endl<<endl;
		
			switch(a){
				case 1:
					d=b+c;
					cout<<"value : "<<d;
					break;
					
				case 2:
					d=b-c;
					cout<<"value : "<<d;
					break;
					
				case 3:
					d=b*c;
					cout<<"value : "<<d;
					break;
					
				case 4:
					d=b/c;
					cout<<"value : "<<d;
					break;
					
				case 5:
					d=b%c;
					cout<<"value : "<<d;
					break;
					
				default:
					cout<<"Invalid NUmber ";
					break;
			}
	}
};

main(){
	Design obj;
	
	obj.sum();
}
