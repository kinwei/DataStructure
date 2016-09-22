//
//  main.cpp
//  LinkList
//
//  Created by kinwei on 16/9/21.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include <iostream>
#include "LinkList.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Node node1;
    node1.data = 3;
    Node node2;
    node2.data = 4;
    Node node3;
    node3.data = 5;
    Node node4;
    node4.data = 6;
    Node node5;
    node5.data = 7;
    LinkList *pList = new LinkList();
    
     pList -> ListInsertHead(&node1);
     pList -> ListInsertHead(&node2);
     pList -> ListInsertHead(&node3);
     pList -> ListInsertHead(&node4);
     pList -> ListInsertHead(&node5);
    
    pList -> ListTraverse();
    
    delete pList;
    return 0;
}
