#pragma once

#include <vector>

#include "Vehicle.h"

class Showroom {
public:

    Showroom(std::string name = "Unnamed Showroom", std::size_t capacity = 0);

    std::vector<Vehicle> GetVehicleList();

    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();

private:

    std::string _ShowroomName;
    std::vector<Vehicle> _vehicles;
    std::size_t _MaxVehicles;
};