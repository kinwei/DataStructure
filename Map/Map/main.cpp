//
//  main.cpp
//  Map
//
//  Created by kinwei on 16/10/5.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#include <iostream>
#include "Map.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    Map *map = new Map(8);
    Node *pNodeA = new Node('A');
    Node *pNodeB = new Node('B');
    Node *pNodeC = new Node('C');
    Node *pNodeD = new Node('D');
    Node *pNodeE = new Node('E');
    Node *pNodeF = new Node('F');
    Node *pNodeG = new Node('G');
    Node *pNodeH = new Node('H');
    
    map -> addNode(pNodeA);
    map -> addNode(pNodeB);
    map -> addNode(pNodeC);
    map -> addNode(pNodeD);
    map -> addNode(pNodeE);
    map -> addNode(pNodeF);
    map -> addNode(pNodeG);
    map -> addNode(pNodeH);
    
     map -> setValueToMatrixForUndirectedGraph(0, 1);
     map -> setValueToMatrixForUndirectedGraph(0, 3);
     map -> setValueToMatrixForUndirectedGraph(1, 2);
     map -> setValueToMatrixForUndirectedGraph(1, 5);
     map -> setValueToMatrixForUndirectedGraph(3, 6);
     map -> setValueToMatrixForUndirectedGraph(3, 7);
     map -> setValueToMatrixForUndirectedGraph(6, 7);
     map -> setValueToMatrixForUndirectedGraph(2, 4);
     map -> setValueToMatrixForUndirectedGraph(4, 5);
    
    
    map -> printMatrix();
    
    return 0;
}
