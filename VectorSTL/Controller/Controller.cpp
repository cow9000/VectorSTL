//
//  Controller.cpp
//  VectorSTL
//
//  Created by Vawdrey, Derek on 1/29/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/Controller.hpp"
#include <iostream>

Controller::Controller(){
    intVector.push_back(2);
    intVector.push_back(3);
    
    stringVector.push_back("AWdihawodi");
    stringVector.push_back("2003ihohfshioxjkew");
}

void Controller::start(){
    for(std::vector<int>::iterator it = intVector.begin(); it < intVector.end(); it++){
        std::cout << *it << std::endl;
    }
    
    for(std::string lemonString : stringVector) std::cout << lemonString << std::endl;
}
