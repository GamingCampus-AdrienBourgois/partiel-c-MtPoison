#pragma once

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"

enum class TemperatureUnits
{
	CELSIUS,
	FAHRENHEIT,
	KELVIN
};

class Solution1 // Temperature converter
{
public:
	static float ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to);
};


