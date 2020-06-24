#include "../include/Diary.h"
#include<iostream>

Diary::Diary(const std::string& filename) : messages (nullptr), messages_size(0)
{
    messages_capacity = 10;
    messages = new Message[messages_capacity];
}

void Diary::add(const std::string& message)
{

    // adcionando 10 mensagens 
    for (size_t i = 0; i < messages_capacity; i++)
    {
        messages[messages_size].content = message;
        std::cout<<messages[messages_size].content << " " << i <<std::endl;
        messages_size++;
    }
    
}

void Diary::write()
{
    // gravar as mensagens no disco
}
