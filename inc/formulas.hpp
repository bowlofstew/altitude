#ifndef __FORMULAS__
#define __FORMULAS__

#include <math.h>

namespace altitude {
    namespace formulas {
        /**
         * This computation provides the pressure in Pascal at a given
         * altitude which is passed in meters.
         *
         * @param altitude in meters
         * @return air pressure in Pascal
         */
        double PressureAtAltitude(double altitude) {
            return altitude::constants::pressures::pascal::STANDARD_ATMOSPHERE * pow((1 - 2.25577 * pow(10.0, -5.0) * altitude), 5.25588);
        }

        /**
         * @param compositionOfGase Composition of the gas that you are computing the pressure of in the
         * atmosphere.
         * @param totalPressure The total pressure of the atmosphere
         * @return The pressure of the requested gas.
         */
        double PressureOfGas(double compositionOfGase, double totalPressure) {
            return compositionOfGase * totalPressure * 1000;
        }

        /**
         * Converts Celsius to Kelvin
         * @param celsius
         * @return
         */
        double ConvertCelsiusToKelvin(double celsius) {
            return celsius + 273.15;
        }

        /**
         * Return the concentration of a specific gas.
         * @param pressureOfGas The pressure of the gas to be computed
         * @param celsius The temperature of the gas in Celsius
         * @return The concentration of that gas
         */
        double ConcentrationOfGas(double pressureOfGas, double celsius) {
            auto kelvin = ConvertCelsiusToKelvin(celsius);
            return pressureOfGas/(8.314 * kelvin);
        }
    };
};

#endif //__FORMULAS__