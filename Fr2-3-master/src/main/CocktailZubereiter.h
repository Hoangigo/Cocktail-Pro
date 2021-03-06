//@(#) CocktailZubereiter.h

#ifndef COCKTAILZUBEREITER_H_H
#define COCKTAILZUBEREITER_H_H



#include "Recipe.h"
#include "RecipeBook.h"
#include "DeviceVerwalter.h"

/**
 * Bereitet den Cocktail nach den Rezeptschritten zu.
 *  
 */
class CocktailZubereiter {
public:
    CocktailZubereiter(DeviceVerwalter * dv);
    bool cocktailZubereiten(Recipe * rzpt);

private:
    DeviceVerwalter * myDeviceVerwalter;


};

#endif
