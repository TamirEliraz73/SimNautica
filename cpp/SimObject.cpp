//
// Created by Tamir Eliraz on 11/1/2024.
//

#include "SimObject.h"
#include <utility>

Sim::SimObject::SimObject(std::string name) : name(std::move(name)) { }

const std::string &Sim::SimObject::getName() const {
    return name;
}

Sim::SimObject::~SimObject() = default;