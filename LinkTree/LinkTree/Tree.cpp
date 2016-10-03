//
//  Tree.cpp
//  LinkTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include "Tree.hpp"

Tree::Tree(){
    m_pRoot = new Node();
}
Node *Tree::SearchNode(int nodeIndex){
    return m_pRoot -> SearchNode(nodeIndex);
}

bool Tree::AddNode(int nodeIndex, int direction, Node *pNode){
    Node *temp = SearchNode(nodeIndex);
    if (temp == NULL) {
        return false;
    }
    
    Node *node = new Node();
    if (node == NULL) {
        return false;
    }
    node->data = pNode -> data;
    node -> index = pNode -> index;
    node->pParent = temp;
    
    if (direction == 0) {
        temp -> pLChild = node;
    }
    if (direction == 1) {
        temp -> pRChild = node;
    }
    
    return true;
    
}

bool Tree::DeteleNode(int nodeIndex,Node *pNode){
    Node *temp = SearchNode(nodeIndex);
    if (temp == NULL) {
        return false;
    }
    
    if (pNode != NULL) {
        pNode->data = temp->data;
    }
    temp -> DeteleNode();
    return true;
}

Tree::~Tree(){
    m_pRoot->DeteleNode();
}

void Tree::PreorderTraversal(){
    m_pRoot -> PreorderTraversal();
}

void Tree::InorderTraversal(){
    m_pRoot->InorderTraversal();
}
void Tree::PostorderTraversal(){
    m_pRoot->PostorderTraversal();
}
