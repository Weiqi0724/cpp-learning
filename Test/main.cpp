#include <iostream>
#include <cmath>
using namespace std;

int AskForPositiveNum(){
    int userNum;
    userNum=0;
    
    while(userNum<=0){
        cout<<"Please enter the positive number: "<<endl;
        cin>>userNum;
        if(userNum<=0){
            cout<<"Invalied number";
        }
        
    }
    return userNum;
}
    
int FindGCD(int ValA, int ValB){
    while(ValB!=0){
        int temp=ValA;
        ValB=ValA%ValB;
        ValA=temp;
    }
    return ValA;
}

int LCM(int ValA, int ValB){
    int TestResult;
    TestResult=abs(ValA*ValB)/FindGCD( ValA,ValB);
    return TestResult;
    
    
}

    
int main(){
    int UserNumA;
    int UserNumB;
    int Result;
    cout<<"Put in the first user number"<<endl;
    UserNumA=AskForPositiveNum();
    cout<<"Put in the second user number"<<endl;
    UserNumB=AskForPositiveNum();
    Result=LCM(UserNumA, UserNumB);
    cout<<"Least-common multiple between "<<UserNumA<<" and "
    <<UserNumB<<" is "<<Result;
    
    return 0;
}
