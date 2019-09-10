#ifndef CELAPSEDTIMER_H
#define CELAPSEDTIMER_H

#include <iostream>
#include <chrono>
#include <ctime>

/*
 * chrono is possible with nono/ms/sec
 * c++11 or higher
*/

class CElapsedTimer
{
public:
    CElapsedTimer();
    virtual ~CElapsedTimer();

    void TimerStart();
    void TimerEnd();
    void ElapsedTimeNS();
    void ElapsedTimeMS();
    void print(char time);

private:
    std::chrono::high_resolution_clock::time_point m_t1,m_t2;
    std::chrono::duration<double> m_elapsedms;
    std::chrono::nanoseconds m_elapsedns;

};

#endif // CELAPSEDTIMER_H
