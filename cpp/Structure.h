//
// Created by Tamir Eliraz on 11/2/2024.
//

#ifndef CPP_STRUCTURE_H
#define CPP_STRUCTURE_H

#include "SimObject.h"

namespace Sim {

    class Structure : public SimObject {
        private:
            /// <summary>
            /// The location of the simulation object in the 2D space.
            ///
            /// This vector is stored on the stack to optimize performance
            /// since it is frequently updated during simulations.
            /// Storing it on the stack reduces heap allocation overhead
            /// and allows for faster access and modifications.
            /// </summary>
            Geography::Vector2f location; // on Stack

        protected:
            explicit Structure(std::string name, float amount) : SimObject(std::move(name)), amount(amount) { }

            float amount;

        public:
            ~Structure() = default;

            [[nodiscard]] const Geography::Vector2f &getLocation() const override;

            void update() override { } // empty

            virtual void deposit() { } // empty

            virtual void withdraw() { } // empty

            [[nodiscard]] float getAmount() const;

            Structure &setAmount(float newAmount);

    };

} // Sim

#endif //CPP_STRUCTURE_H
