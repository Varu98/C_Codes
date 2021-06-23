#include <stdio.h>
struct car
{
    char engine[50]; //{"800 ac marurti" ,"cr4 turbo indica" ,"kappa 1.2L i20"}
    char fuelType[10];
    int fuel_tank_capacity;
    int seat_type;
    float mileage;
};

int main()
{
    printf("\nStructure practise\n\n");

    struct car car1 =
        {
            "DDis 190 engine",
            "petrol",
            37,
            5,
            19.5};

    struct car car2 = {"Kappa 1.2L engine", "petrol", 22, 8, 14.5};

    // printf("%s car1 \n", car1.engine);
    // printf("%s car2 \n\n", car2.engine);

    for (int i = 0; i < 2; i++)
    {
        printf("%s engine\n %s fuel type\n %d fuel tank capacity\n %d seat type\n %f mileage \n\n", car1.engine, car1.fuelType, car1.fuel_tank_capacity, car1.seat_type, car1.mileage);
    }

    return 0;
}

//  car   //Engine     FuelType    fuel_tank_capacity     seat_type

//  car1

//  car2