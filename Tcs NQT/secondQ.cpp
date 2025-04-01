

#include<iostream>
#include<vector>

using namespace std;
// Function to check if a number is prime
bool isPrime(int num){
    if(num<2) return false;
    for(int i=2; i*i<=num; i++)
    {
        if(num % i ==0) return false;
    }
    return true;
}

// Function to find the nth prime number;
int getNthPrime(int n){
    int count=0, num=1;
    while(count < n){
        num++;
        if(isPrime(num)) 
        count++;
    }
    return num;
}


int main(){
    int input1, input2;
    cin>>input1 >> input2;
    

    int prime1=getNthPrime(input1);
    int prime2=getNthPrime(input2);

    int result=(prime1*prime2)-1;

    cout<<result<<endl;
    return 0;
}