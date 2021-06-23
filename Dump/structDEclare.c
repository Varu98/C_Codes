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

    struct car c1 =
        {
            .fuel_tank_capacity = 35,
            .engine = "1.4 CR4 turbocharger"};

    printf("%s engine\n %d fuel_tank\n\n", c1.engine, c1.fuel_tank_capacity);
    return 0;
}