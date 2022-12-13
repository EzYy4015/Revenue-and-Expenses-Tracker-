/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IncomeTracker.h
 * Author: User
 *
 * Created on October 28, 2021, 8:52 PM
 */

#ifndef INCOMETRACKER_H
#define INCOMETRACKER_H
#include "Tracker.h"
#include <vector>
#include <iostream>
using namespace std;

class IncomeTracker:public Tracker{
public:
    IncomeTracker();
    IncomeTracker(string tname, string tmonth, int tvalue );
    void addCategory(Category* std);
    void editCategory(string cname, string cmonth, int cvalue);
    IncomeTracker(const IncomeTracker& orig);
    virtual ~IncomeTracker();
private:
    int inCatValue;
};

#endif /* INCOMETRACKER_H */

