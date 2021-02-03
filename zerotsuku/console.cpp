#include<iostream>
int main(){
    //IF
    int x =5;
    if(x==5){
        std::cout << "5" << std::endl;
    }else if(x==10){
        std::cout << "逃げろ" << std::endl;
    }
    else{
        std::cout << "this is not 5" << std::endl;
    }

    //switch
    // ONLY USE when the typs of x == int, enum, class(can inference int or enum)
    switch (x)
    {
    case 0:
        //　x==0
        break; //if do not write, use fallsuru-
    case 1:
    case 2:
        // x ==1 or x ==2
        break; 
    default:
        //else
        break;
    }
    //while
    bool done = false;
    while (!done)
    {
        x += x -3;
        if (x%5==0){
            done = true;
        }
    }
    //Do While
    //最初の1回は無条件で do { ... } 内の処理を実行し、 2回目以降は while () に渡された条件が true である限り do { ... } 内の処理を実行し続けます。
    do{
        x += x -3;
        if (x%5==0){
            done =true;
        };
    }while (done);
    
    //For
    for (int i=0; i<10; i++){
        std::cout << i << std::endl;
    }
    
}