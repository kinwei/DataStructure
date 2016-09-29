//
//  Tree.hpp
//  ArrayTree
//
//  Created by kinwei on 16/9/29.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>

class Tree{
public:
    Tree(int size,int *pRoot);
    ~Tree();
    int *SearchNode(int nodeIndex);
    bool AddNode(int nodeIndex,int direction, int *pNode);
    bool DeleteNode(int nodeIndex,int *pNode);
    void TreeTraverse();
private:
    int *m_pTree;
    int m_Size;
};

#endif /* Tree_hpp */
