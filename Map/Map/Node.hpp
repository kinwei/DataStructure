//
//  Node.hpp
//  Map
//
//  Created by kinwei on 16/10/5.
//  Copyright © 2016年 kinwei. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node{
public:
    Node(char data = 0);
    char m_cData;
    bool m_bIsVisited;
};

#endif /* Node_hpp */
