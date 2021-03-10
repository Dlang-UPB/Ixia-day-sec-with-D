import std.stdio;


class Car
{
    int id;
    this(int id)
    {
        this.id = id;
    }
}

class Sedan : Car
{
    this(int id)
    {
        super(id);
    }
}

class Hatchback : Car
{
    this(int id)
    {
        super(id);
    }
}

class Dealership
{
    this(int parkingLot) {
        curr = 0;
        numCars = parkingLot;
        cars = new Car[numCars];
    }

    void receiveCar(Car car) {
        cars[curr++] = car;
    }

    Car sellCar() {
        Car car = cars[curr];
        cars[curr] = null;
        curr--;

        return car;
    }

    void testDrive(int idx) {
        writefln("Testing car %s\n", cars[idx].id);
    }

private:
    int numCars;
    int curr;
    Car[] cars;
};

enum CarType
{
    Sedan,
    Hatchback
};

int main()
{
    const int numCars = 10;
    auto dealership = new Dealership(numCars);

    for (int i = 0; i < numCars; ++i)
    {
        //makeCar(dealership, i % 2 == 0 ? CarType::Sedan : CarType::Hatchback, i);
        Car car;
        if (i % 2 == 0) {
            car = new Sedan(i);
        } else {
            car = new Hatchback(i);
        }
        dealership.receiveCar(car);
    }

    for (int i = 0; i < numCars; ++i)
        dealership.testDrive(i);

    return 0;
}
