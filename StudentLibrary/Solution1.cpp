#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	double Nouvelletemperature;
	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS)
	{
		Nouvelletemperature = _value - 273.15;
	}

	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT)
	{
			Nouvelletemperature = (_value - 273.15) *9.0 / 5.0 + 32.0;
	}
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN)
	{
		Nouvelletemperature = _value + 273.15;
	}

	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT)
	{
		Nouvelletemperature = (_value - 9.0 / 5.0) + 32.0 ;
	}

	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS)
	{
		Nouvelletemperature = _value - 273.15;
	}

	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN)
	{
		Nouvelletemperature = (_value - 32.0) * 5.0 / 9.0 + 273.15;
	}
	return Nouvelletemperature;
}

#endif