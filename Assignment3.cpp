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
     Release_year=Release_year_rec;
    marker_of_car= marker_of_car_rec;
    car_speed=car_speed_rec;
   }
  display(marker_of_car_rec)
  {
    marker_of_car=marker_of_car_rec;
    cout<<"marker_of_car"<<marker_of_car<<"\n";
  }
  display(Release_year_rec)
  {
    Release_year=Release_year_rec
      cout<<"release_year"<<Release_year<<"\n";
  }
  display(car_speed_rec)
  {
    car_speed=car_speed_rec;
    cout<<"car_speed"<<car_speed<<"\n"
  }
  diplay()
  {
    cout<<"marker_of_car"<<marker_of_car<<"\n";
    cout<<"release_year"<<Release_year<<"\n";
    cout<<"car_speed"<<car_speed<<"\n"
  }
};

main()
{
 car Honda();
 honda.display(); 
   
}
