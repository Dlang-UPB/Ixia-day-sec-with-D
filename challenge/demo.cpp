#include <iostream>

class Car
{
public:
    int id;
    Car() {}
    Car(int id): id(id) {}
    virtual ~Car() {}
};

class Sedan: public Car
{
public:
    Sedan(int id): Car(id) {}
};

class Hatchback: public Car
{
public:
    Hatchback(int id): Car(id) {}
};

class Dealership
{
public:

    Dealership(int parkingLot) {
        curr = 0;
        numCars = parkingLot;
        cars = new Car*[numCars];
    }

    void receiveCar(Car* car) {
        cars[curr++] = car;
    }

    Car* sellCar() {
        Car* car = cars[curr];
        cars[curr] = nullptr;
        curr--;

        return car;
    }

    void testDrive(int idx) {
        std::cout << "Testing car" << cars[idx]->id << "\n";
    }

private:
    int numCars;
    int curr;
    Car** cars;
};


enum class CarType
{
    Sedan,
    Hatchback
};

void makeCar(Dealership& dealership, CarType carType, int carId)
{
    Car car;
    if (carType == CarType::Sedan) {
        car = Sedan(carId);
    } else if (carType == CarType::Hatchback) {
        car = Hatchback(carId);
    }
    dealership.receiveCar(&car);
}

int main(void)
{
    const int numCars = 10;
    Dealership dealership(numCars);

    for (int i = 0; i < numCars; ++i)
    {
        //makeCar(dealership, i % 2 == 0 ? CarType::Sedan : CarType::Hatchback, i);
        Car car;
        if (i % 2 == 0) {
            car = Sedan(i);
        } else {
            car = Hatchback(i);
        }
        dealership.receiveCar(&car);
    }

    for (int i = 0; i < numCars; ++i)
        dealership.testDrive(i);

    return 0;
}
