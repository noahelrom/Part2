#pragma once
#include "Vehicle.h"
#include <vector>

class Showroom {

    private:

        std::string _name;
        std::vector<Vehicle> _vehicles;
        std::size_t _MaxVehicles;

    public:

        Showroom(std::string name = "Unnamed Showroom", std::size_t capacity = 0);

        std::vector<Vehicle> GetVehicleList();

        void AddVehicle(Vehicle v);
        void ShowInventory();
        float GetInventoryValue();
};