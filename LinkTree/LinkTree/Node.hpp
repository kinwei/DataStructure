//
//  Node.hpp
//  LinkTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node{
   
    
public:
     Node();
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;
    Node *SearchNode(int nodeIndex);
    void DeteleNode();
    void PreorderTraversal();
    void InorderTraversal();
    void PostorderTraversal();
};

#endif /* Node_hpp */
