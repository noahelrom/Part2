// Classes Lab, Part 2: Showroom
// Save this file as main.cpp next to your Vehicle and Showroom files.
// Build:  g++ -std=c++20 -Wall -Wextra -Werror main.cpp Vehicle.cpp Showroom.cpp -o part2
// Run it, then type a test number (1-5) and press Enter.
#include "Vehicle.h"
#include "Showroom.h"
#include <iostream>
#include <iomanip>

int main()
{
    // Initialize some data. It's hard-coded here, but this data could come from a file, database, etc
    Vehicle vehicles[] =
    {
        Vehicle("Ford", "Mustang", 1973, 9500, 113000),
        Vehicle("Mazda", "CX-5", 2017, 24150, 5900),
        Vehicle("Dodge", "Charger", 2016, 18955, 9018),
        Vehicle("Tesla", "Model S", 2018, 74500, 31),
        Vehicle("Toyota", "Prius", 2015, 17819, 22987),
        Vehicle("Nissan", "Leaf", 2016, 12999, 16889),
        Vehicle("Chevrolet", "Volt", 2015, 16994, 12558),
    };

    // Set the precision for showing prices with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    int testNum;
    std::cin >> testNum;

    if (testNum == 1)
    {
        Showroom testShowroom;
        testShowroom.ShowInventory();
    }
    else if (testNum == 2)
    {
        Showroom one("Small Showroom", 2);
        one.AddVehicle(vehicles[3]);
        one.AddVehicle(vehicles[5]);

        one.ShowInventory();
    }
    else if (testNum == 3)
    {
        Showroom one("Full Showroom", 2);
        one.AddVehicle(vehicles[0]);
        one.AddVehicle(vehicles[3]);

        // Should get an error message here
        one.AddVehicle(vehicles[5]);

        one.ShowInventory();
    }
    else if (testNum == 4)
    {
        Showroom one("Price Test", 3);
        one.AddVehicle(vehicles[2]);
        one.AddVehicle(vehicles[4]);
        one.AddVehicle(vehicles[6]);

        std::cout << "Total value: $" << one.GetInventoryValue() << std::endl;
    }
    else if (testNum == 5)
    {
        Showroom one("Room 1", 3);
        one.AddVehicle(vehicles[1]);
        one.AddVehicle(vehicles[3]);
        one.AddVehicle(vehicles[5]);

        std::cout << "Total value: $" << one.GetInventoryValue() << std::endl;

        Showroom two("Room 2", 6);
        two.AddVehicle(vehicles[6]);
        two.AddVehicle(vehicles[5]);
        two.AddVehicle(vehicles[4]);
        two.AddVehicle(vehicles[3]);
        two.AddVehicle(vehicles[2]);
        two.AddVehicle(vehicles[1]);

        std::cout << "Total value: $" << two.GetInventoryValue() << std::endl;
    }

    return 0;
}
