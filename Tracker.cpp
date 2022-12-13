/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tracker.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 8:51 PM
 */

#include "Tracker.h"

Tracker::Tracker() {
}

Tracker::Tracker(const Tracker& orig) {
}

Tracker::~Tracker() {
}

Tracker::Tracker(string cname, string cmonth) {
    categoryName = cname;
    categoryMonth = cmonth;
 
}