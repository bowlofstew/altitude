#ifndef __CONSTANTS__
#define __CONSTANTS__

namespace altitude {
    namespace constants {
        namespace percents {
            constexpr double NITROGEN_COMPOSITION           = 78.084;
            constexpr double OXYGEN_COMPOSITION             = 20.946;
            constexpr double ARGON_COMPOSITION              = 0.9349;
            constexpr double CARBON_DIOXIDE_COMPOSITION     = 0.04;
            constexpr double NEON_COMPOSITION               = 0.001818;
            constexpr double HELIUM_COMPOSITION             = 0.000524;
            constexpr double METHANE_COMPOSITION            = 0.000179;
        };
        namespace temperatures {
            namespace celsius {
                constexpr signed int EVEREST_IN_SUMMER      = -19;
                constexpr signed int EVEREST_IN_WINTER      = -36;
            };
        }
        namespace pressures {
            namespace pascal {
                constexpr unsigned int STANDARD_ATMOSPHERE  = 101325;
            };
        };
    };
};

#endif //__CONSTANTS__