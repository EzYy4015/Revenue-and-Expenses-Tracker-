/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpensesTracker.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 8:59 PM
 */

#include "ExpensesTracker.h"

ExpensesTracker::ExpensesTracker() {
}

ExpensesTracker::ExpensesTracker(const ExpensesTracker& orig) {
}

ExpensesTracker::~ExpensesTracker() {
}

void ExpensesTracker::addCategory(Category* std){
    
}

void ExpensesTracker::editCategory(string cname, string cmonth, int cvalue){
    
}

void ExpensesTracker::message(){
    
}

ExpensesTracker::ExpensesTracker(string tname, string tmonth, int tvalue, int tmax):Tracker(tname, tmonth){
    exCatValue = tvalue;
    maxAmmount = tmax;
}
