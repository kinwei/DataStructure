//
//  Node.cpp
//  LinkTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Node.hpp"

Node::Node(){
    index = 0;
    data  = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
    
}

Node *Node::SearchNode(int nodeIndex){
    
    if (this->index == nodeIndex) {
        return this;
    }
    if(this->pLChild != NULL){
        if (this->pLChild->index == nodeIndex) {
            return this->pLChild;
        }
    }
    
    if(this->pRChild != NULL){
        if (this->pRChild->index == nodeIndex) {
            return this->pRChild;
        }
    }
    return NULL;
}

void Node::DeteleNode(){
    if (this->pLChild != NULL) {
        this->pLChild -> DeteleNode();
    }
    if (this->pRChild != NULL) {
        this->pRChild -> DeteleNode();
    }
    
    if (this->pParent != NULL) {
        if(this->pParent->pRChild == this){
            this->pParent->pRChild = NULL;
        }
        if(this->pParent->pLChild == this){
            this->pParent->pLChild = NULL;
        }
    }
    
}

void Node::PreorderTraversal(){
    cout<<this->index<<" "<<this->data << endl;
    if (this->pLChild != NULL) {
        this->pLChild->PreorderTraversal();
    }
    if (this->pRChild != NULL) {
        this->pRChild->PreorderTraversal();
    }
}

void Node::InorderTraversal(){
    
    if (this->pLChild != NULL) {
        this->pLChild->InorderTraversal();
    }
    cout<<this->index<<" "<<this->data << endl;
    if (this->pRChild != NULL) {
        this->pRChild->InorderTraversal();
    }

}

void Node::PostorderTraversal(){
    if (this->pLChild != NULL) {
        this->pLChild->PostorderTraversal();
    }
    
    if (this->pRChild != NULL) {
        this->pRChild->PostorderTraversal();
    }
    
    cout<<this->index<<" "<<this->data << endl;
}
