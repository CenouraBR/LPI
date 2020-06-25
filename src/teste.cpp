#include <iostream>
#include<sstream>
#include<string>

#include "../include/Diary.h"
#include "../include/Timer.h"




int main(int argc, char* argv[])
{

    Diary men("Mensagem.mp");
    for (size_t i = 0; i < 10; i++)
    {
        men.add("Mensagem");
        std::cout << "# "<< men.messages[i].date.day << "/" <<men.messages[i].date.month << "/" <<
        men.messages[i].date.year<< std::endl;
        std::cout << "- "<< men.messages[i].time.hour << ":" <<men.messages[i].time.minute << ":" <<
        men.messages[i].time.second << " "<< men.messages[i].content << " " << i << std::endl;

    }
    
    return 0;

}