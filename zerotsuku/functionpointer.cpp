#include<iostream>

int Add(int x, int y){
    return x + y;
}

int main(){
    //this pointer "fp" = function pointer keeps function named Add's address 
    int (*fp)(int, int) = Add;
    //this is also OK => aout fp =Add;
    int result = fp(3,5);
    std::cout << result << std::endl;

    //ramuda
    // in eq of ramuda [] = capcha
    auto del = [](int a, int b) -> int {return a-b;};
    int res_del = del(4,6);
    std::cout << res_del << std::endl;
    int capcha = 20;
    auto copy = [capcha](int a, int b) ->int{return capcha+a*b;};
    auto refer = [&capcha](int a, int b){return capcha+a*b;};
    capcha = 0;
    int res_copy = copy(2,4);
    //<- 20+2*b
    int res_refer =refer(2,4);
    //<- 0+2*4

    return 0;
}