//
// Created by Tamir Eliraz on 11/2/2024.
//

#ifndef CPP_FARM_H
#define CPP_FARM_H

#include "Structure.h"

namespace Sim {

    class Farm : public Structure {
        private:
            float rate;

        public:
            explicit Farm(std::string name) : Structure(std::move(name), 12.0F) { }

            ~Farm() = default;

            void update() override;

            void withdraw() override;
    };

} // Sim

#endif //CPP_FARM_H
