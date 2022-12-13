/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on October 28, 2021, 8:48 PM
 */

#include <cstdlib>
#include "ProfileManagement.h"
#include "Profile.h"
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ProfileManagement * proMan = new ProfileManagement();
    
    string name, gender, occupation;
    int login, age, password, choice1, answer1;
    
    login = 0;
    while(login != 3){
        cout<<"\n1. Create new account";
        cout<<"\n2. Login existing account";
        cout<<"\n3. Exit";
        cout<<"\n";
        cin>>login;
        switch(login){
        
            case 1:
            {
                cout<<"\n";                
                cout<< "Enter your name:";
                cin>>name;
                
                cout<< "Enter your gender:";
                cin>>gender;
                
                cout<< "Enter your age:";
                cin>>age;
            
                cout<< "Enter your occupation:";
                cin>>occupation;
            
                cout<< "Create your password:";
                cin>>password;
    
                Profile *pro = new Profile(name, gender, age, occupation, password);
                proMan->addProfile(pro); 
            
            break;
            }
            case 2:
            {
                proMan->displayAcccounts();
                
                cout<< "\nWhich Account to Login in?";
                cin>>choice1;
                cout<< "\nPassword: ";
                cin>>answer1;
                if(proMan->checkPasscode(choice1, answer1) == true){
                    cout<<"\nMenu:";
                    cout<<"1. Edit Personal Information:";
                    cout<<"2. Income Tracker:";
                    cout<<"3. Outcome Tracker:";
                    cout<<"4. Edit Personal Information:";
                    
                    
                    
                    
                    
                }else{
                    cout<<" \nWrong pass code";
                }              
            break;
            }
        }
    }
    
    system("pause");
    
    return 0;
}

