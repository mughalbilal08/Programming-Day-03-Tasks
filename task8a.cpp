#include <iostream>
using namespace std;
main(){
float vegetablePerKg;
float fruitPerKg;
int totalKgofvegetable;
int totalKgofFruits;
float earning;
float earninginpk;
cout << "Enter Price for vegetables per kg: ";
cin>> vegetablePerKg;
cout << "Enter Price for fruits per kg: ";
cin>> fruitPerKg;
cout<< "Enter total kilogram of vegetables: ";
cin>> totalKgofvegetable;
cout<< "Enter total kilograms of Fruits: ";
cin>> totalKgofFruits;
earning= (fruitPerKg * totalKgofFruits)+(vegetablePerKg * totalKgofvegetable);
earninginpk= earning/1.94;
cout<< "Earning of Harvest In Rps: "<< earninginpk;

}