/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RevenueCategory.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 9:01 PM
 */

#include "RevenueCategory.h"

RevenueCategory::RevenueCategory() {
}

RevenueCategory::RevenueCategory(const RevenueCategory& orig) {
}

RevenueCategory::~RevenueCategory() {
}

RevenueCategory::RevenueCategory(string name, string month, int value):Category(name,month){
    revValue = value;
}
