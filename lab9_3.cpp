/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        int height;
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){
            character = "Chopper";
        }else if(height < 180){
            character = "Usopp";
        }else{
            long value;
            cout << "Enter your bounty: ";
            cin >> value;
            if(value > 1100000000){
                character = "Zoro";
            }else{
                character = "Sanji";
            }
        }
    } else{
        if(age < 61){
            long value;
            cout << "Enter your bounty: ";
            cin >> value;
            if(value > 500000000){
                character = "Jinbe";
            }else{
                character = "Franky";
            }
        }else{
            character = "Brook"; 
        }
    }
    cout << "Your character = "<< character;
}