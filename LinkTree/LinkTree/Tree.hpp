//
//  Tree.hpp
//  LinkTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp
#include <stdio.h>
#include "Node.hpp"

class Tree{
public:
    Tree();
    ~Tree();
    Node *SearchNode(int nodeIndex);
    bool AddNode(int nodeIndex,int direction,Node *pNode);
    bool DeteleNode(int nodeIndex,Node *pNode);
    void PreorderTraversal();
    void InorderTraversal();
    void PostorderTraversal();
private:
    Node *m_pRoot;
    
};

#endif /* Tree_hpp */
