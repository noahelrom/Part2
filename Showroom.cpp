#include <iostream>

#include "Showroom.h"

Showroom::Showroom(std::string name, std::size_t capacity) {
    _ShowroomName = name;
    _MaxVehicles = capacity;
}

std::vector<Vehicle> Showroom::GetVehicleList() {
    return _vehicles;
}

void Showroom::AddVehicle(Vehicle v) {
    if (_vehicles.size() >= _MaxVehicles) {
        std::cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << std::endl;
        return;
    }
    _vehicles.push_back(v);
}

void Showroom::ShowInventory() {
    if (_vehicles.empty()) {
        std::cout << _ShowroomName << " is empty!" << std::endl;
        return;
    }

    std::cout << "Vehicles in " << _ShowroomName << std::endl;
    for (std::size_t i = 0; i < _vehicles.size(); ++i) {
        _vehicles.at(i).Display();
    }
}

// Calculates the total value of all vehicles in the showroom
float Showroom::GetInventoryValue() {
    if (_vehicles.empty()) {
        return 0.0;
    }

    float totalValue = 0.0;
    for (std::size_t i = 0; i < _vehicles.size(); ++i) {
        totalValue += _vehicles.at(i).GetPrice();
    }
    return totalValue;
}