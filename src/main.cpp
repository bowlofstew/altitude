#include <iostream>
#include "constants.hpp"
#include "formulas.hpp"

int main (int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: "
                  << argv[0] << " {altitude in meters} {temperature in Celsius}"
                  << std::endl;
        return 1;
    }
    auto altitudeInMeters = atoi(argv[1]);
    auto temperature = static_cast<double>(atoi(argv[2]));
    auto pressure = altitude::formulas::PressureAtAltitude(altitudeInMeters);
    auto concentrationNitrogen = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::NITROGEN_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationOxygen = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::OXYGEN_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationArgon = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::ARGON_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationCO2 = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::CARBON_DIOXIDE_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationNeon = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::NEON_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationHelium = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::HELIUM_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    auto concentrationMethane = altitude::formulas::ConcentrationOfGas(
            altitude::formulas::PressureOfGas(
                    altitude::constants::percents::METHANE_COMPOSITION,
                    (pressure/altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE)),
            temperature
    );
    std::cout << "Nitrogen concentration is: "      << concentrationNitrogen    << " mol/m3" << std::endl;
    std::cout << "Oxygen concentration is: "        << concentrationOxygen      << " mol/m3" << std::endl;
    std::cout << "Argon concentration is: "         << concentrationArgon       << " mol/m3" << std::endl;
    std::cout << "Carbon Dioxide concentration is: "<< concentrationCO2         << " mol/m3" << std::endl;
    std::cout << "Neon concentration is: "          << concentrationNeon        << " mol/m3" << std::endl;
    std::cout << "Helium concentration is: "        << concentrationHelium      << " mol/m3" << std::endl;
    std::cout << "Methane concentration is: "       << concentrationMethane     << " mol/m3" << std::endl;
}