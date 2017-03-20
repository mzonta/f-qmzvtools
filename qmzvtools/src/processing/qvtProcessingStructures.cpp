// Processing
#include "qvtProcessingStructures.h"

const char* cycleTypeString(CycleType ct)
{
    switch (ct) {
        case BATCH: return "BATCH"; break;
        case CONTINUOUS: return "CONTINUOUS"; break;
    }
};
