//
//  LinkList.cpp
//  LinkList
//
//  Created by kinwei on 16/9/21.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include "LinkList.h"
#include <iostream>
using namespace std;



LinkList::LinkList()
{
    m_pList = new Node;
    m_pList -> data = 0;
    m_pList -> next = NULL;
    m_iLength = 0;
}

bool LinkList::ListEmpty(){
    if (m_iLength == 0) {
        return true;
    }else{
        return false;
    }
}

void LinkList::ClearList(){
    Node *currentNode = m_pList -> next;
    
    while (currentNode != NULL) {
        Node  *temp = currentNode -> next;
        delete currentNode;
        currentNode = temp;
    }
    m_pList -> next = NULL;
}

LinkList::~LinkList(){
    ClearList();
    delete m_pList;
    m_pList = NULL;
}

bool LinkList::ListInsertHead(Node *pNode){
    Node *temp = m_pList -> next;
    Node *newNode = new Node;
    
    if(newNode == NULL){
        return false;
    }
    
    newNode->data = pNode -> data;
    m_pList -> next = newNode;
    newNode -> next = temp;
    m_iLength++;
    return true;
}

bool LinkList::ListInsertTail(Node *pNode){
    Node *currentNode = m_pList;
    while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
    }
    
    Node *newNode = new Node;
    if (newNode == NULL) {
        return false;
    }
    newNode -> data = pNode -> data;
    newNode -> next = NULL;
    currentNode->next = newNode;
    m_iLength++;
    return true;
}

bool LinkList::ListInsert(int i, Node *pNode){
    if(i < 0 || i > m_iLength){
        return false;
    }
    Node *currentNode = m_pList;
    for (int k; k < i; k++) {
        currentNode = currentNode -> next;
    }
    Node *newNode = new Node;
    if (newNode == NULL) {
        return false;
    }
    newNode -> data = pNode -> data;
    newNode->next = currentNode -> next;
    currentNode -> next = newNode;
    return true;
}

bool LinkList::ListDelete(int i, Node *pNode){
    if(i < 0 || i > m_iLength){
        return false;
    }
    Node *currentNode = m_pList;
    Node *currentNodeBefore = m_pList;
    
    for (int k=0; k<=i; k++) {
        currentNodeBefore = currentNode;
        currentNode = currentNode -> next;
    }
    currentNodeBefore -> next = currentNode -> next;
    pNode -> data = currentNode -> data;
    delete currentNode;
    currentNode = NULL;
    m_iLength--;
    return true;
}

bool LinkList::GetElem(int i, Node *pNode){
    if(i < 0 || i > m_iLength){
        return false;
    }
    Node *currentNode = m_pList;
    for(int k = 0; k <= i; k++){
        currentNode = currentNode -> next;
    }
    pNode -> data = currentNode -> data;
    return true;
}

int LinkList::LocateElem(Node *pNode){
    Node *currentNode = m_pList;
    int count = 0;
    while (currentNode->next != NULL) {
        currentNode = currentNode -> next;
        if (currentNode->data == pNode->data) {
            return count;
        }
        count++;
    }
    return -1;
}

bool LinkList::PriorElem(Node *pCurrentNode, Node *pPreNode){
    Node *currentNode = m_pList;
    Node *temp = NULL;
    while (currentNode -> next != NULL) {
        temp = currentNode;
        currentNode = currentNode -> next;
        if (currentNode ->data == pCurrentNode -> data) {
            if (temp == m_pList) {
                return false;
            }
            pPreNode -> data = temp -> data;
            return true;
        }
        
    }
    return false;
}

bool LinkList::NextElem(Node *pCurrentNode, Node *pNextNode){
    Node *currentNode = m_pList;
    while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
        if (currentNode -> data == pNextNode -> data) {
            if (currentNode -> next == NULL) {
                return false;
            }
            pNextNode -> data = currentNode ->next -> data;
            return true;
        }
    }
    return false;
}

void LinkList::ListTraverse(){
    Node *currentNode = m_pList;
    while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
        currentNode -> printNode();
    }
}



