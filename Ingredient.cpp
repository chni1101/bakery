#include "Ingredient.hpp"

// ------------------------------------------------------------------------------------------------
// Constructor
// ------------------------------------------------------------------------------------------------
Ingredient::Ingredient(std::string aName) : iName(aName)
{
	//Nothing to do here
}

// ------------------------------------------------------------------------------------------------
// Retrieves the name of the ingredient
// ------------------------------------------------------------------------------------------------
std::string Ingredient::getName() const
{
	return iName;
}

// ------------------------------------------------------------------------------------------------
// Implicit conversion to std::string
// ------------------------------------------------------------------------------------------------
Ingredient::operator std::string() const
{
	return iName;
}

// ------------------------------------------------------------------------------------------------
// Comparison operator overload
// ------------------------------------------------------------------------------------------------
bool Ingredient::operator==(const Ingredient &rhs) const
{
	return iName == rhs.iName;
}
