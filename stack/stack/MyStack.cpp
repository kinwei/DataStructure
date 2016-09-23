//
//  MyStack.cpp
//  stack
//
//  Created by kinwei on 16/9/23.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include "MyStack.hpp"
#include <iostream>
using namespace std;

MyStack::MyStack(int size){
    m_iSize = size;
    m_pBuffer = new char(m_iSize);
    m_iTop = 0;
}

MyStack::~MyStack(){
    delete []m_pBuffer;
    
}

bool MyStack::stackEmpty(){
    if (m_iTop == 0) {
        return true;
    }
    return false;
}

bool MyStack::stackFull(){
    if (m_iTop >= m_iSize) {
        return true;
    }
    return false;
}

void MyStack::clearStack(){
    m_iTop = 0;
}

int MyStack::stackLength(){
    return m_iTop;
}

bool MyStack::push(char elem){
    if (!stackFull()) {
        m_pBuffer[m_iTop] = elem;
        m_iTop++;
        return true;
    }
    return false;
}

bool MyStack::pop(char &elem){
    if (stackEmpty()) {
        return false;
    }
    m_iTop--;
    elem = m_pBuffer[m_iTop];
    return true;
}

void MyStack::stackTraverse(bool isFromBottom){
    if(isFromBottom){
        for (int i=0; i < stackLength(); i++) {
            cout <<m_pBuffer[i]<<endl;
            }
    }else{
        for (int i=stackLength(); i >= 0; i--) {
            cout <<m_pBuffer[i]<<endl;
        }

    }
}


