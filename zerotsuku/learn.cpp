#include<iostream>
//if use int type include size
#include<cstdint>

int main(){
    std::cout << "Hello, World" <<std::endl;
    int a= 5;
    std::cout << a << std::endl;

    //===type===
    //hibbiten rewrite and ditermin when excute
    const int b = 2;
    //make fix number and ditermin when compaile
    constexpr int c = 10;
    //gues the type
    auto d =12;
    //T or F
    bool ok = true;
    //character
    char x = 'a'; //if i use "", this makes error
    short s_t =1.2;
    long l_g =2.2;
    //do not use "-" and use large number
    unsigned int laaargeABS = 40000000000000;
    //include cstdint
    std::int32_t ssss = 5;

    //===pointer
    int point_x = 5;
    int* p = &point_x; //reference pointer_x, int* -> pointer type that get int type variable
    int* p_null = nullptr; //this is "null pointer" and not get some reference pointer yet.
    int y_pointer = *p; //get variable that reference pointer "p"
    const int* p_a =&a; //this is Ok
    //then this is bad. *p = 345; //cannot make change the value referanced the pointer
    *p = 3; //this is ok.
    int* const p_cons = &point_x;
    //then this is bad p = nullptr
    
    return 0;
}