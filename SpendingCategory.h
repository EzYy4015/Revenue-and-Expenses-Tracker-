/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SpendingCategory.h
 * Author: User
 *
 * Created on October 28, 2021, 9:01 PM
 */

#ifndef SPENDINGCATEGORY_H
#define SPENDINGCATEGORY_H
#include "Category.h"
#include <vector>
#include <iostream>
using namespace std;

class SpendingCategory:public Category {
public:
    SpendingCategory();
    SpendingCategory(string name, string month, int value);
    void warning();
    SpendingCategory(const SpendingCategory& orig);
    virtual ~SpendingCategory();
private:
    int spendValue;
};

#endif /* SPENDINGCATEGORY_H */

