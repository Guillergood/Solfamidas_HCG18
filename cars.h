#ifndef _CARS_
#define _CARS_
#include "point.h"
#include "car.h"
#include "rides.h"
#include "ride.h"
#include <utility>

class Cars {
    public:
        std::vector<Car> cars;
        Rides rides;

        Cars(int numberCars, Rides &theRides){
            cars.resize(numberCars);
            rides = theRides;
        }


        point GetCarPosition(int carIndex){
            return cars[carIndex].GetPosition();
        }

        bool Update(){
            std::pair <Ride, bool> thePair;
            for (int i = 0; i < cars.size(); i++){
                thePair.second = false;
                if(cars[i].GetBusy() == false){
                    //Setting new destination to the car
                    thePair = rides.Travel_Search(cars[i].GetPosition());
                    cars[i].SetRide(thePair.first);
                }


                cars[i].Update();

            }
            return thePair.second;
        }

        void Print(){
            for(int i = 0; i < cars.size(); i++){
                cout << i << " ";
                for(int j = 0; j < cars[i].travels.size(); j++){
                    cout << cars[i].travels[j] << " ";
                }
                cout << endl;
            }
        }




};

#endif
