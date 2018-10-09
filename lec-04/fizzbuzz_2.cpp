//fizzbuzz.cpp
#include <iostream>
#include <cstdlib>

using namespace std;
//allows referring to specific modules in the standard namespace
int main(int argc, char* argv[]){
    //cout<<"Number of arguments to the program: "<< argc<<endl;    
    if(argc != 2){
        cerr<<"Usage :"<<argv[0]<<" number"<<endl;
        exit(1);
    }

    int num = atoi(argv[1]);

//    cout<<"Num:"<<num<<endl;
    if(num%15 == 0){
        cout<<"Fizzbuzz"<<endl;
    }else if(num%3 ==0){
        cout<<"Fizz"<<endl;
    }else if(num%5 ==0){
        cout<<"Buzz"<<endl;
    }else{
        cout<<num<<endl;
    }
    
    return 0;
}
