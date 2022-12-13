/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpensesTracker.h
 * Author: User
 *
 * Created on October 28, 2021, 8:59 PM
 */

#ifndef EXPENSESTRACKER_H
#define EXPENSESTRACKER_H
#include "Tracker.h"
#include <vector>
#include <iostream>
using namespace std;

class ExpensesTracker:public Tracker{
public:
    ExpensesTracker();
    ExpensesTracker(string tname, string tmonth, int tvalue, int tmax);
    void addCategory(Category* std);
    void editCategory(string cname, string cmonth, int cvalue);
    void message();
    ExpensesTracker(const ExpensesTracker& orig);
    virtual ~ExpensesTracker();
private:
    int exCatValue;
    int maxAmmount;
};

#endif /* EXPENSESTRACKER_H */

