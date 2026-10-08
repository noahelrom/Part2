#include <iostream>

#include "Vehicle.h"

Vehicle::Vehicle() {
    _make = "COP3504C";
    _model = "Rust Bucket";
    _year = 1900;
    _price = 0.0;
    _mileage = 0;
}

Vehicle::Vehicle(std::string make, std::string model, int year, int price, int mileage) {
    _make = make;
    _model = model;
    _year = year;
    _price = price;
    _mileage = mileage;
}

void Vehicle::Display() {
    std::cout << _year << " " << _make << " " << _model << " " << _price << " " << _mileage << std::endl;
}

std::string Vehicle::GetYearMakeModel() {
    // YMM = Year, Make, then Model
    std::string stringYMM = std::to_string(_year) + " " + _make + " " + _model;
    return stringYMM;
}

float Vehicle::GetPrice() {
    return _price;
}