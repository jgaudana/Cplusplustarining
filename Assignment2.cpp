#include<iostream>
using namespace std;
#include <string>

class car
{
public :
	int Release_year;
	int car_speed;
	string marker_of_car;
    
    car(int Release_year_rec,string marker_of_car_rec, int car_speed_rec=0)
    {
    cout << "Constructor is called:\n ";  
    
    Release_year=Release_year_rec;
    marker_of_car= marker_of_car_rec;
    car_speed=car_speed_rec;
    
    }
    ~car()
    {
    cout << "Destructor is called:\n ";
    }
};


main()
{
car martin(1999,"volvo");
cout<<martin.Release_year <<'\n';

cout<<martin.marker_of_car <<'\n';
cout<<martin.car_speed<< '\n';

}
