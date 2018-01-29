//
//  Controller.hpp
//  VectorSTL
//
//  Created by Vawdrey, Derek on 1/29/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <vector>
#include <string>

class Controller{
public:
    Controller();
    void start();
private:
    std::vector<int> intVector;
    std::vector<std::string> stringVector;
    
};

#endif /* Controller_hpp */
