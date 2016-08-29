#include <iostream>
#include <cstdlib>

using namespace std;

class Location{
  int latitude,longitude;
public:
  Location();
  Location(int,int);
  Location operator+(Location);
};

Location::Location(){
    latitude = longitude = 0;
}

Location::Location(int lat,int lon){
  latitude = lat;
  longitude = lon;
}

Location Location::operator+(Location obj){
  Location returnObject;
  returnObject.latitude = latitude + obj.latitude;
  returnObject.longitude = longitude + obj.longitude;
  return returnObject;
}



int main(int argc, char const *argv[]) {
  Location l1(10,20),l2(20,40);
  Location l3 = l1 + l2;
  std::cout << l3 << std::endl;
  return 0;
}
