/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tracker.h
 * Author: User
 *
 * Created on October 28, 2021, 8:51 PM
 */

#ifndef TRACKER_H
#define TRACKER_H
#include <vector>
#include "Category.h"
using namespace std;

class Tracker {
public:
    Tracker();
    Tracker(string cname, string cmonth);
    virtual void addCategory(Category* std)=0;
    virtual void editCategory(string cname, string cmonth)=0;
    Tracker(const Tracker& orig);
    virtual ~Tracker();
private:
    string categoryName;
    string categoryMonth;
    vector <Category *> _categories;
};

#endif /* TRACKER_H */

