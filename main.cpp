/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: william
 *
 * Created on October 13, 2019, 2:16 PM
 */

#include <cstdlib>
#include "iostream"
#include <string>
#include <sstream>

#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {
    

    
   string line;
   while (cin>>line)
   {
       stringstream lines(line);
       string s;
       vector<string> strs;
       while(getline(lines,s,',')){
           strs.push_back(s);
       }
       
           string res=strs.at(0)+" ";          
           
           float totalenroll;
           totalenroll=stoi(strs.at(1));
        //  cout<<"totalenroll: "<<totalenroll<<endl;

           float fullload;
           fullload=stoi(strs.at(2));
       //    cout<<"fullload: "<<fullload<<endl;

           float min;
           min=stoi(strs.at(3));
        //   cout<<"min: "<<min<<endl;

           float max;
           max=stoi(strs.at(4));
         //  cout<<"max: "<<max<<endl;
           
           //bao liuxiaoshu
           stringstream ss;
           int minper,maxper;                  
           maxper=round(max/totalenroll);
         //  cout<<"minper: "<<minper<<endl;
         //  cout<<"maxper: "<<maxper<<endl;

           int minfullloat,maxfullload;
           minfullloat=round(min/(totalenroll/fullload));
           maxfullload=round(max/(totalenroll/fullload));
         //  cout<<"minfullloat: "<<minfullloat<<endl;
          // cout<<"maxfullload: "<<maxfullload<<endl;
           
           string resend;
           resend=res+"Fees per Unit: $" + to_string(minper)+"-$"+to_string(maxper)+" full Time: $"+to_string(minfullloat)+"-$"+to_string(maxfullload);
           //res=res+resend;
           cout<<resend<<endl;

       
     if(getchar()=='\n') continue;
            
    }
    return 0;
}

