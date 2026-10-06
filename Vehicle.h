#pragma once
#include <string>

class Vehicle {

    std::string _make;
    std::string _model;
    int _year;
    float _price;
    int _mileage;

    public:

    Vehicle();
    Vehicle(std::string make, std::string model, int year, int price, int mileage);

    void Display();

    std::string GetYearMakeModel();

    float GetPrice();
};