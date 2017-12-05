/* 
* Stopwatch.h
*
* Created: 08/10/2017 16:33:17
* Author: SoftwareEngineer
*/


#ifndef __STOPWATCH_H__
#define __STOPWATCH_H__



class Stopwatch
{
//variables
public:
static long msSinceTimerStart;
long GetMs();
void Reset();
protected:
private :
long startMs;
//functions
public:
	Stopwatch();
	~Stopwatch();
	Stopwatch( const Stopwatch &c );
protected:
private:
	Stopwatch& operator=( const Stopwatch &c );
    static void Tick();
}; //Stopwatch

#endif //__STOPWATCH_H__
