/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SpendingCategory.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 9:01 PM
 */

#include "SpendingCategory.h"

SpendingCategory::SpendingCategory() {
}

SpendingCategory::SpendingCategory(const SpendingCategory& orig) {
}

SpendingCategory::~SpendingCategory() {
}

SpendingCategory::SpendingCategory(string name, string month, int value):Category(name,month){
    spendValue = value;
}

SpendingCategory::warning(){
    
}