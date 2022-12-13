/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Category.h
 * Author: User
 *
 * Created on October 28, 2021, 9:00 PM
 */

#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>
#include <iostream>
using namespace std;

class Category {
public:
    Category();
    Category( string name, string month );
    Category(const Category& orig);
    virtual ~Category();
private:
    string cateName;
    string cateMonth;
};

#endif /* CATEGORY_H */

