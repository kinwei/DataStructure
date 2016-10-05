//
//  Map.hpp
//  Map
//
//  Created by kinwei on 16/10/5.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include <stdio.h>
#include "Node.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Map{
public:
    Map(int capacity);
    ~Map();
    bool addNode(Node *pNode);
    void resetNode();
    bool setValueToMatrixForDirectedGraph(int row,int col, int val=1);//为有向图设置邻接矩阵
    bool setValueToMatrixForUndirectedGraph(int row,int col, int val=1);//为无向图设置邻接矩阵
    
    void printMatrix();
    
    void depthFirstTraverse(int nodeIndex);
    void breadthFirstTraverse(int nodeIndex);
    
private:
    bool getValueFromMatrix(int row,int col,int &val);
    void breadthFirstTraverseImpl(vector<int> preVc);
    
private:
    int m_iCapacity;//图中最多可以容纳的节点数
    int m_iNodeCount;//已经添加的节点的个数
    Node *m_pNodeArray;//用来存放顶点的数组
    int *m_pMatrix;//用来存放邻接矩阵
    
};

#endif /* Map_hpp */
