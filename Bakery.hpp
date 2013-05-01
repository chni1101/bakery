#ifndef BAKERY_HPP
#define BAKERY_HPP

#include <string>

// ------------------------------------------------------------------------------------------------
// Forward-declaration
// ------------------------------------------------------------------------------------------------
class BakingRecipeManager;

// ------------------------------------------------------------------------------------------------
// Bakery | Makes tasty stuff
// ------------------------------------------------------------------------------------------------
class Bakery
{
public:
	//Executes the bakery program
	void run();

private:
	BakingRecipeManager *recipeManager;
	static const std::string FILE_INGREDIENTS;
};

#endif