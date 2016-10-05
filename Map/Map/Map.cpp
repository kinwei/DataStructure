//
//  Map.cpp
//  Map
//
//  Created by kinwei on 16/10/5.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include "Map.hpp"

Map::Map(int capacity){
    m_iCapacity = capacity;
    m_iNodeCount = 0;
    m_pNodeArray = new Node(m_iCapacity);
    m_pMatrix = new int[m_iCapacity*m_iCapacity];
    for (int i=0; i<m_iCapacity*m_iCapacity; i++) {
        m_pMatrix[i] = 0;
    }
}

Map::~Map(){
    delete []m_pNodeArray;
    delete []m_pMatrix;
}

bool Map::addNode(Node *pNode){
    if (pNode == NULL) {
        return false;
    }
    m_pNodeArray[m_iNodeCount].m_cData = pNode -> m_cData;
    m_iNodeCount++;
    return true;
}

void Map::resetNode(){
    for (int i=0; i<m_iNodeCount; i++) {
        m_pNodeArray[i].m_bIsVisited = false;
    }
}

bool Map::setValueToMatrixForDirectedGraph(int row, int col,int val){
    if (row <0|| row >= m_iCapacity) {
        return false;
    }
    if (col <0|| col >= m_iCapacity) {
        return false;
    }
    m_pMatrix[row*m_iCapacity + col] = val;
    return true;
}

bool Map::setValueToMatrixForUndirectedGraph(int row, int col,int val){
    if (row <0|| row >= m_iCapacity) {
        return false;
    }
    if (col <0|| col >= m_iCapacity) {
        return false;
    }
    m_pMatrix[row*m_iCapacity + col] = val;
    m_pMatrix[col*m_iCapacity + row] = val;
    return true;

}

bool Map::getValueFromMatrix(int row, int col, int &val){
    if (row <0|| row >= m_iCapacity) {
        return false;
    }
    if (col <0|| col >= m_iCapacity) {
        return false;
    }
    val =  m_pMatrix[row*m_iCapacity + col];
    return true;
}

void Map::printMatrix(){
    for (int i=0; i<m_iCapacity; i++) {
        for (int k=0; k<m_iCapacity; k++) {
           cout<<m_pMatrix[i * m_iCapacity + k]<<" ";
            
        }
        cout<<endl;
    }
}

void Map:: depthFirstTraverse(int nodeIndex){
    int value = 0;
    cout<<m_pNodeArray[nodeIndex].m_cData<<" ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    
    for (int i=0; i<m_iCapacity; i++) {
        getValueFromMatrix(nodeIndex, i, value);
        
        if (value != 0) {
            if (m_pNodeArray[i].m_bIsVisited) {
                continue;
            }else{
                depthFirstTraverse(i);
            }
        }else{
            continue;
        }
    }
    
}