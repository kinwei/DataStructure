//
//  Tree.cpp
//  ArrayTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Tree.hpp"

Tree::Tree(int size,int *pRoot){
    m_Size = size;
    m_pTree = new int[m_Size];
    for (int i=0; i < size; i++) {
        m_pTree[i] = 0;
    }
    m_pTree[0] = *pRoot;
}

Tree::~Tree(){
    delete []m_pTree;
    m_pTree = NULL;
}

int *Tree::SearchNode(int nodeIndex){
    if (nodeIndex <0 || nodeIndex >= m_Size) {
        return NULL;
    }
    if (m_pTree[nodeIndex] ==0) {
        return NULL;
    }
    return &m_pTree[nodeIndex];
}

bool Tree::AddNode(int nodeIndex, int direction, int *pNode){
    if (nodeIndex <0 || nodeIndex >= m_Size) {
        return false;
    }
    if (m_pTree[nodeIndex] ==0) {
        return false;
    }
    if (direction ==0) {
        if (nodeIndex*2 + 1 >= m_Size) {
            return false;
        }
        if (m_pTree[nodeIndex*2 + 1] !=0) {
            return false;
        }
        m_pTree[nodeIndex*2 + 1] = *pNode;
    }
    if (direction == 1) {
        if (nodeIndex*2 + 2 >= m_Size) {
            return false;
        }
        if (m_pTree[nodeIndex*2 + 2] !=0) {
            return false;
        }
        m_pTree[nodeIndex*2 + 2] = *pNode;
    }
    return true;
}

bool Tree::DeleteNode(int nodeIndex, int *pNode){
    if (nodeIndex <0 || nodeIndex >= m_Size) {
        return false;
    }
    if (m_pTree[nodeIndex] ==0) {
        return false;
    }
    *pNode = m_pTree[nodeIndex];
    m_pTree[nodeIndex] = 0;
    return true;
}

void Tree::TreeTraverse(){
    for (int i=0; i < m_Size; i++) {
        cout <<"m_pTrr["<<i<<"]:"<<m_pTree[i]<<endl;
    }
}

