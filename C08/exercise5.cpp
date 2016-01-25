/*Create a const whose value is determined at runtime by
reading the time when the program starts (youll have to
use the <ctime> standard header). Later in the program,
try to read a second value of the time into your const and
see what happens.
*/
#include <iostream>
#include <ctime>


int main()
{
time_t tmp;
const time_t timep =time (& tmp);
//const char curr_time[200]=ctime(&timep); //It do not compile
char* curr_time=ctime(&timep);
// time_t time(time_t *t);
printf("\n curr_time=%s %x \n",curr_time,curr_time);

sleep(7);
curr_time=ctime(&timep);//error: assignment of read-only variable ‘timep’
timep =time (& tmp);
printf("\n curr_time=%s %x \n",curr_time,curr_time);
}
