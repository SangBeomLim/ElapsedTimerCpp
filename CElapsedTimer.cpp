#include "CElapsedTimer.h"

CElapsedTimer::CElapsedTimer()
{
    std::cout << "elapsed time class start!" << std::endl;
}

CElapsedTimer::~CElapsedTimer()
{
    std::cout << "elapsed time class end!" << std::endl;
}

void CElapsedTimer::TimerStart()
{
    //start point
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    m_t1 = start_time;
}

void CElapsedTimer::TimerEnd()
{
    //finish point
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    m_t2 = end_time;
}

void CElapsedTimer::ElapsedTimeNS()
{
    //elapsed time
    m_elapsedns = m_t2 - m_t1;

}

void CElapsedTimer::ElapsedTimeMS()
{
    m_elapsedms = std::chrono::duration_cast<std::chrono::duration<double>>(m_t2- m_t1);
}

void CElapsedTimer::print(char time)
{
    //print out
    if(time == 'N')
    {
        std::cout << "It took " << m_elapsedns.count() << "ns" << std::endl;
    }
    else if (time == 'M')
    {
        std::cout << "It took " << m_elapsedms.count() << "ms" << std::endl;
    }

}
