/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IncomeTracker.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 8:52 PM
 */

#include "IncomeTracker.h"


IncomeTracker::IncomeTracker() {
}

IncomeTracker::IncomeTracker(const IncomeTracker& orig) {
}

IncomeTracker::~IncomeTracker() {
}

void IncomeTracker::addCategory(Category* std){
    
}

void IncomeTracker::editCategory(string cname, string cmonth, int cvalue){
    
}

IncomeTracker::IncomeTracker(string cname, string cmonth, int cvalue):Tracker(cname, cmonth) {
    inCatValue = cvalue;
}