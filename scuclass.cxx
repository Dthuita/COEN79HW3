
#include <iomanip>
#include <iostream>

using namespace std;
#include "scuclass.h"

namespace coen79_hw3{
    scuclass::scuclass(string className){  
        arr_id = 0; 
        this->className = className;
    } 
    scuclass::scuclass(){
        //empty constructor??
        
    } 

    void scuclass::addStudent(student &s){
        
        if(arr_id >= 30){
            cout << "class is full !! " << endl;
            return;
        }   

        students[arr_id] = s;
        arr_id++;
    }
    void scuclass::erase(int delete_id){
        for(int i=0; i < arr_id; i++){
            //deletes student by id
            if(students[i].getID() == delete_id){
                //shifts students 
                for (int fromIndex = i + 1, toIndex = i; fromIndex < arr_id; fromIndex++, toIndex++){
                    students[toIndex] = students[fromIndex];
                }
                arr_id--;
            }

        }
    }
    void scuclass::list(void){
        for(int i=0; i < arr_id; i++){
            cout << students[i] << endl << endl;
        }
    }

    std::ostream& operator<<(std::ostream& os, scuclass& c){
        cout << "Class Name: " << c.className << endl;

        c.list();
    }
}
