#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	int distanceAB, distanceBC, 
		fuelConsumptionAB, fuelConsumptionBC,
		cargoWeight, refuel, fuelRemains,fuelConsumption;
	const int fuelTankCapacity = 300;
	cout << "Please enter the cargo weight: \n";
	cin >> cargoWeight;
	if (cargoWeight >= 2000) {
		cout << "The plane won't take off.\n";
	}
	else {
		if (cargoWeight < 2000 && cargoWeight >= 1500) {
			fuelConsumption = 9;
		}
		else if (cargoWeight < 1500 && cargoWeight >= 1000) {
			fuelConsumption = 7;
		}
		else if (cargoWeight < 1000 && cargoWeight >= 500) {
			fuelConsumption = 4;
		}
		else {
			fuelConsumption = 1;
		}
		cout << "Please enter the distance from point A to point B: \n";
		cin >> distanceAB;
		fuelConsumptionAB = fuelConsumption * distanceAB;
		if (fuelConsumptionAB <= fuelTankCapacity) {
			fuelRemains = fuelTankCapacity - fuelConsumptionAB;
			cout << "Please enter the distance from point B to point C: \n";
			cin >> distanceBC;
			fuelConsumptionBC = fuelConsumption * distanceBC;
			if (fuelConsumptionBC <= fuelTankCapacity) {
				if (fuelConsumptionBC > fuelRemains) {
					refuel = fuelConsumptionBC - fuelRemains;
					cout << "You'll have to refuel at point B " << refuel << " litres.\n";
				}
				else
					cout << "You have enough fuel till the point C. There's no need to refuel.\n";
			}
			else
				cout << "The fuel tank is not big enough.\n";
		}
		else
			cout << "The fuel tank is not big enough.\n";
	}
	_getch();
}