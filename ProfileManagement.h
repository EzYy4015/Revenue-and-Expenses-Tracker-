/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProfileManagement.h
 * Author: User
 *
 * Created on October 28, 2021, 8:49 PM
 */

#ifndef PROFILEMANAGEMENT_H
#define PROFILEMANAGEMENT_H
#include <vector>
#include "Profile.h"
using namespace std;


class ProfileManagement {
public:
    ProfileManagement();
    void addProfile(Profile* std);
    void editPersonalInfo(int num, string newname, string newgender, int newage, string newoccupation);
    bool checkPasscode(int num, int passcode);
    void displayAcccounts();
    ProfileManagement(const ProfileManagement& orig);
    virtual ~ProfileManagement();
private:
    vector <Profile *> _profiles;
};

#endif /* PROFILEMANAGEMENT_H */

