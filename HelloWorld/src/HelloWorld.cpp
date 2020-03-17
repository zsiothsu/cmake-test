/********************************************
 *              header file                 *
 ********************************************/
#include "../inc/HelloWorld.h"

/********************************************
 *                function                  *
 ********************************************/
namespace HelloWorld
{
    void hello()
    {
        print("Hello World");
    }

    void print(std::string str)
    {
        std::cout << str << std::endl;
    }
}