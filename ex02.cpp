#include<iostream>

using namespace std;

class mathematical{
	
	public:
		
		
		
		void setter(){
			
			int x=10;
			int b;
			int a;
			
			b = 2(x-3);
			a = 4x-1;
			
		}
		
		void getter(){
			cout<<"Ans : "<<b<<a;
		}
};

main(){
	mathematical obj;
	
	obj.getter();
}
