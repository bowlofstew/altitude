#include <iostream>
#include "constants.hpp"
#include "formulas.hpp"

int main (int argc, char *argv[]) {
    auto pressure = altitude::formulas::PressureAtAltitude(8848);
    auto pressureO2 = altitude::formulas::PressureOfGas(
            altitude::constants::percents::OXYGEN_COMPOSITION,
            (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE));
    auto concentrationO2 = altitude::formulas::ConcentrationOfGas(
            pressureO2,
            altitude::constants::temperatures::celsius::EVEREST_IN_SUMMER
    );
    std::cout << pressure << std::endl;
}