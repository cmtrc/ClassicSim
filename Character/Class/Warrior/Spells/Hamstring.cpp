
#include "Hamstring.h"

#include <iostream>

int Hamstring::spell_effect(const int resource_level) const {
    // TODO: Roll special hit attack table and deal damage based on outcome.
    // TODO: Apply Flurry buff if critical.
    // TODO: Apply Overpower if dodge.
    std::cout << engine->get_current_priority() <<
                 ": Casting Hamstring at " << resource_level << " rage.\n";

    return resource_level;
}