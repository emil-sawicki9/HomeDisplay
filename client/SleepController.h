#ifndef SLEEPCONTROLLER_H
#define SLEEPCONTROLLER_H

#include <cstdint>

class SleepController 
{
public:
    SleepController();

    void sleep(int16_t secs);

private:
    int mStartTime;
};

#endif //SLEEPCONTROLLER_H