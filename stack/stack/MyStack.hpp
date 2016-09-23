//
//  MyStack.hpp
//  stack
//
//  Created by kinwei on 16/9/23.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef MyStack_hpp
#define MyStack_hpp

#include <stdio.h>

class MyStack{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse(bool isFromBottom);
    
private:
    char *m_pBuffer;
    int m_iSize;
    int m_iTop;
};

#endif /* MyStack_hpp */
