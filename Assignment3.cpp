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
   
   void display(string marker_of_car_rec)
  {
    marker_of_car=marker_of_car_rec;
    cout<<"marker_of_car:"<<marker_of_car<<"\n";
  }
   void display(int Release_year_rec, int car_speed_rec)
  {
    Release_year=Release_year_rec;
    car_speed=car_speed_rec;
      cout<<"release_year:"<<Release_year<<"\n";
      cout<<"car_speed:"<<car_speed<<"\n";
  }

   void display()
  {
    cout<<"marker_of_car:"<<marker_of_car<<"\n";
    cout<<"release_year:"<<Release_year<<"\n";
    cout<<"car_speed:"<<car_speed<<"\n";
  }
};

main()
{
 car Honda(1999,"honda");
 Honda.display();
 cout<<"after overload function"<<"\n";
 Honda.display("Honda motor company");
 Honda.display(2012,60);
 Honda.display();
 }
