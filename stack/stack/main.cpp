//
//  main.cpp
//  stack
//
//  Created by kinwei on 16/9/23.
//  Copyright © 2016年 kinwei. All rights reserved.
//


#include <iostream>
#include "MyStack.hpp"
int main(int argc, const char * argv[]) {
    MyStack *pStack = new MyStack(5);
    
    pStack -> push('h');
    pStack -> push('e');
    pStack -> push('l');
    pStack -> push('l');
     pStack -> push('o');
    
    pStack -> stackTraverse(true);
   
    char elem = 0;
    pStack -> pop(elem);
    std::cout <<"pop后：" <<std::endl;
    pStack -> stackTraverse(false);
    
    delete pStack;
        return 0;
}
