#include "Showroom.h"
#include <iostream>

Showroom::Showroom(std::string name, std::size_t capacity) {
    _name = name;
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
        std::cout << _name << " is empty!" << std::endl;
        return;
    }

    std::cout << "Vehicles in " << _name << std::endl;
    for (std::size_t i = 0; i < _vehicles.size(); ++i) {
        _vehicles.at(i).Display();
    }
}

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