#include "qvtTimer.h"

qvtTimer::qvtTimer()
{       
    resetTimer();
}

void qvtTimer::resetTimer()
{
    t_start = hiRC::now();
}

msC qvtTimer::elapsedTime_msC()
{
    return std::chrono::duration_cast<msC>(hiRC::now() - t_start);
}

int qvtTimer::elapsedTime()
{
    msC elpTime;
    elpTime = std::chrono::duration_cast<msC>(hiRC::now() - t_start);
    return elpTime.count();
}


