/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Profile.cpp
 * Author: User
 * 
 * Created on October 28, 2021, 8:49 PM
 */

#include "Profile.h"

Profile::Profile() {
}

Profile::Profile(const Profile& orig) {
}

Profile::~Profile() {
}

void Profile::setName(string value){
    name = value;
}
void Profile::setName(string value){
    gender = value;
}
void Profile::setName(int value){
    age = value;
}
void Profile::setName(string value){
    occupation = value;
}
int Profile::getPasscode(){
    return passcode;
}

//void Profile::addTracCategory(Tracker* std){
    //_trackers.push_back(std);
//}

//void Profile::deleteTracCategory(int num){
    //_trackers.erase(_trackers.begin()+(num-1));
//}

//void Profile::editInTracCategory(string cname, int cvalue, string cmonth){
    //for(int i=0; i<_trackers.size(); i++){
        
    //}
//}

//void Profile::editExTracCategory(string cname, int cvalue, string cmonth, int maxvalue){
    //for(int i=0; i<_trackers.size(); i++){
        
    //}
//}


//void Profile::InSearchnDisplay(string cname, string cmonth){
    //for(int i=0; i<_trackers.size(); i++){
        
    //}
//}

//void Profile::ExSearchnDisplay(string cname, string cmonth){
    //for(int i=0; i<_trackers.size(); i++){
        
    //}
//}

void Profile::displayAccountDetails(){
    cout<<"\n";
    cout<<"\nName: "<<name;
    cout<<"\nGender: "<<gender;
    cout<<"\nAge: "<<age;
    cout<<"\nOccupation: "<<occupation;
}