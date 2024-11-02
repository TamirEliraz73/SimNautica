//
// Created by Tamir Eliraz on 11/2/2024.
//

#include "Structure.h"

namespace Sim {
    const Geography::Vector2f &Structure::getLocation() const {
        return location;
    }

    float Structure::getAmount() const {
        return amount;
    }

    Structure &Structure::setAmount(float newAmount) {
        this->amount = newAmount;
        return *this;
    }
} // Sim