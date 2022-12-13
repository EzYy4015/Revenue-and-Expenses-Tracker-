/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Profile.h
 * Author: User
 *
 * Created on October 28, 2021, 8:49 PM
 */

#ifndef PROFILE_H
#define PROFILE_H
#include <string>
#include <vector>
#include "Tracker.h"
using namespace std;

class Profile {
public:
    Profile();
    Profile(string na, string ge, int ag, string oc, int pa);
    void setName(string pName);
    void setGender(string pGender);
    void setAge(int pAge);
    void setOccupation(string pOccupation);
    int getPasscode();
    //void addTracCategory(Tracker* std);
    //void deleteTracCategory(Tracker* std);
    //void editInTracCategory(string cname, int cvalue, string cmonth);
    //void editExTracCategory(string cname, int cvalue, string cmonth, int maxvalue);
    //void viewMonthlyVS(string month);
    //void InSearchnDisplay(string cname, string cmonth);
    //void ExSearchnDisplay(string cname, string cmonth);
    void displayAccountDetails();
    Profile(const Profile& orig);
    virtual ~Profile();
private:
    string name;
    string gender;
    int age;
    string occupation;
    int passcode;
    //vector <Tracker *> _trackers;
    //enum _months {January, February, March, April, May, June, July, August, September, October, November, December};
};

#endif /* PROFILE_H */

