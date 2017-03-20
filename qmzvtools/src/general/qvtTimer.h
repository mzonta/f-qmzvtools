#ifndef QVTTIMER_H
#define QVTTIMER_H

// C++
#include <chrono>

typedef std::chrono::high_resolution_clock hiRC;
typedef std::chrono::milliseconds msC;
typedef std::chrono::microseconds usC;

class qvtTimer
{
public:
    qvtTimer();
    void resetTimer();
    msC elapsedTime_msC();
    int elapsedTime();

private:
    hiRC::time_point t_start;
};

#endif // QVTTIMER_H
