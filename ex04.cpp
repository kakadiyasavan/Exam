#include<iostream>

using namespace std;

class house{
	
	public:
		
		void kitchen(){
			cout<<"House"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"kitchen"<<endl;
			cout<<"Dining table "<<endl<<endl<<endl;
		}
		
		void bedroom(){
			cout<<"House"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"Bedroom"<<endl;
			cout<<"Bathroom "<<endl<<endl<<endl;
		}
		
		void backyard(){
			cout<<"House"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"Backyard"<<endl;
			cout<<"Garage "<<endl<<endl<<endl;
		}
};

main(){
	house obj;
	
	obj.kitchen();
	obj.bedroom();
	obj.backyard();
}
