#include<iostream>
using namespace std;
class Animal{
	private:
	int height, weight;
	public:
	int leg, years, sleeps;
	void setD(int h,int w,int l, int y, int s);
	void getD(){
		cout<<"The value of height is "<<height<<endl;
		cout<<"The value of weight is "<<weight<<endl;
		cout<<"The value of leg is "<<leg<<endl;
		cout<<"The value of years is "<<years<<endl;
		cout<<"The value of sleeps is "<<sleeps<<endl;
	}
};
void Animal :: setD(int h, int w,int l, int y, int s){
	height = h;
	weight = w;
	leg = l;
	years = y;
	sleeps = s;
}
int main(){
	Animal koala;
	Animal giraffe;
	koala.setD(4,60,4,100,12);
	giraffe.setD(8,50,4,80,6);
	koala.getD();
	giraffe.getD();
	
	return 0;
}
