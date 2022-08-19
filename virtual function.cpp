#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int curr_id_pf=1, curr_id_st=1;

class Person{
    public:
        string name;
        int age;
        virtual void getdata(){};
        virtual void putdata(){};
};


class Professor : public Person{
    public:
        int publications;
        void getdata()
        {
            cin>>name;
            cin>>age;
            cin>>publications;
        }
        
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<publications<<" "<<curr_id_pf<<endl;
            curr_id_pf++;
        }
};


class Student : public Person{ 
      public:
        int sum_of_marks=0;
        int marks[6];
        void getdata()
        {
            cin>>name;
            cin>>age;
            for(int i=0;i<6;i++)
            {
                cin>>marks[i];
                sum_of_marks+=marks[i];
            }
        }
        
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<sum_of_marks<<" "<<curr_id_st<<endl;
            curr_id_st++;
        }
};
int main(){
