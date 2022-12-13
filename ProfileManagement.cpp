/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProfileManagement.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 8:49 PM
 */

#include "ProfileManagement.h"
#include <string>
#include <vector>
#include <iostream>

ProfileManagement::ProfileManagement() {
}

ProfileManagement::ProfileManagement(const ProfileManagement& orig) {
}

ProfileManagement::~ProfileManagement() {
}

void ProfileManagement::addProfile(Profile* std){
    _profiles.push_back(std);
}

//void ProfileManagement::editPersonalInfo(int num, string newname, string newgender, int newage, string newoccupation){
    
   // _profiles.at(num-1)->setName(newname);
    //_profiles.at(num-1)->setGender(newgender);
    //_profiles.at(num-1)->setAge(newage);
    //_profiles.at(num-1)->setOccupation(newoccupation);
    
//}

void ProfileManagement::displayAcccounts(){
    for(int i=0; i<_profiles.size(); i++){
        _profiles.at(i)->displayAccountDetails();
    }
}

bool ProfileManagement::checkPasscode(int num, int passcode){
    int answer = _profiles.at(num-1)->getPasscode();
    if(passcode == answer){
        return true;
    }else{
        return false;
    }
}
