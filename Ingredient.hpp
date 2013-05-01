#ifndef INGREDIENT_HPP
#define INGREDIENT_HPP

#include <string>

// ------------------------------------------------------------------------------------------------
// Ingredient | Represents an ingredient for baking
// ------------------------------------------------------------------------------------------------
class Ingredient
{
public:
	//Constructor
	Ingredient(std::string aName);

	//Explicit name retrieval
	std::string getName() const;

	//Implicit name retrieval
	operator std::string() const;

	//Comparing ingredients
	bool operator==(const Ingredient &rhs) const;

private:
	std::string iName;
};

#endif