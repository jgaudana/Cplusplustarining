#include<iostream>
using namespace std;
#include <string>

class car
{
public :
	int Release_year;
	int car_speed;
	string customer;

	void get_value()
	{
	   cout << "enter relase yearof car:\n ";
       cin >> Release_year;
       cout << "enter car speed:\n "; 
       cin >> car_speed;
       cout << "enter marker of car:\n "; 
       cin >> customer; 
	}
	 
	 void acclerate()
	 { 
	  car_speed=car_speed+10;
	 }
	 void brake()
	 {
	  car_speed=car_speed-10;
	 }
};




main()
{
car martin;
martin.get_value();
int i=0;
for (i=0;i<5;i++)
{
martin.acclerate();
}
cout << martin.car_speed;
cout <<"\n";
for (i=0;i<5;i++)
{
martin.brake();
}
cout << martin.car_speed;

}
