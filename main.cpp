#include <iostream>
using namespace std;
int main (){
	string passanger_name;
	int distance_travelled;
	int fare;
	const int fare_30kmandabove=80;
	const int fare_bw15kmto30km=60;
	const int fare_lessthen15km=40;
	int discountprice;
	cout<<"welcome to ride booking company : "<<passanger_name<<endl;
	cout<<"enter your name"<<endl;
	cin>>passanger_name;
	cout<<"how much is the distance : "<<endl;
	cin>>distance_travelled;
	int totalcost;
	
	if(distance_travelled>30){
		totalcost=fare_30kmandabove*distance_travelled;
		cout<<"you trvelled "<<distance_travelled<<"km per km price is rs :"<<fare_30kmandabove<<endl;
		cout<<"your total cost is "<<totalcost<<"rs :"<<endl;
	}else if (distance_travelled>15){
		totalcost=fare_bw15kmto30km*distance_travelled;
		cout<<"you trvelled "<<distance_travelled<<"km per km price is rs :"<<fare_bw15kmto30km<<endl;
		cout<<"your total cost is "<<totalcost<<"rs :"<<endl;
	}else if (distance_travelled<=15){
		totalcost=fare_lessthen15km*distance_travelled;

		cout<<"you trvelled "<<distance_travelled<<"km per km price is rs :"<<fare_lessthen15km<<endl;
		cout<<"your total cost is "<<totalcost<<"rs :"<<endl;
	} if (totalcost>2000){
		fare=totalcost-(totalcost*10/100);
		cout<<"you get 10% discount"<<endl;
		cout<<"you get "<< (totalcost*10/100)<<" RS off"<<endl;
	}else{
		fare=totalcost;
	}
cout<<"your fare is :" <<fare<<endl;

return 0;

}
