/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RevenueCategory.h
 * Author: User
 *
 * Created on October 28, 2021, 9:01 PM
 */

#ifndef REVENUECATEGORY_H
#define REVENUECATEGORY_H
#include "Category.h"
#include <vector>
#include <iostream>
using namespace std;

class RevenueCategory:public Category {
public:
    RevenueCategory();
    RevenueCategory(string name, string month, int value);
    RevenueCategory(const RevenueCategory& orig);
    virtual ~RevenueCategory();
private:
    int revValue;
};

#endif /* REVENUECATEGORY_H */

