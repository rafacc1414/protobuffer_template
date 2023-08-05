#include <iostream>

#include "ufc.pb.h"
 
int main(int argc, char* argv[])
{
    fighter message;
    message.set_name("Petardo");
    message.set_style("bjj");
    message.set_age(12);

    std::cout << "created proto message with fighter:\n"
        << "name: " << message.name() << '\n'
        << "age: " << message.age() << '\n'
        << "style: " << message.style() << '\n';

    return 0;
}