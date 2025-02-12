#include <iostream>
#include <unistd.h>
int main() {
    std::cout << "Hello, World! 2" << std::endl;
    int x = 0;
    while(true){
    sleep(1);
       std::cout << x << std::endl;
    x+=1;
    if(x==100)break;
    }

    return 0;
}