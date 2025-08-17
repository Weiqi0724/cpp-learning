#include <iostream>
using namespace std;
#include <climits>

int userVal;
int SmallestVal=INT_MAX;
int FindSmallestVal(){
   
   cout<<"Please enter a number";
    while(true){
        cin>>userVal;
        if(userVal>0){
            break;
        }
        if(userVal<SmallestVal){
            SmallestVal=userVal;
        }
    }
   
   
   
    return SmallestVal;
   }



int main() {
    int minVal;

    minVal = FindSmallestVal();

    cout << minVal << endl;
    return 0;
}

