//
//  LinkList.hpp
//  LinkList
//
//  Created by kinwei on 16/9/21.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>
#include "Node.h"

class LinkList{
public:
    LinkList();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i, Node *pNode);
    int LocateElem(Node *pNode);
    bool PriorElem(Node *currentElem, Node *preElem);
    bool NextElem(Node *currentElem, Node *nextElem);
    void ListTraverse();
    bool ListInsertHead(Node *pNode);
    bool ListInsertTail(Node *pNode);
    bool ListInsert(int i, Node *pNode);
    bool ListDelete(int i, Node *pNode);
    ~LinkList();
private:
    Node *m_pList;
    int m_iLength;
};
#endif /* LinkList_hpp */
