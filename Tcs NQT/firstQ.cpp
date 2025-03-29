#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter a String";
    string input;
    getline(cin,input);

    // 1 check if input is empty;
    if(input.empty()){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    // 2 Calculate frequenciesn and track first accurrence indicate;
    unorder_map<char,int>frequency;
    unorder_map<char, int>firstIndex;

    for(int i=0; i<(int).input.size(); i++)
    {
        char c=input[i];
        frequency[c]++;
        if(firstIndex.find(c)==firstIndex.end())
        {
            firstIndex[c]=i;
        }
    }

    // 3 find the first non repeating character;
    char firstNonRepeating='\0';
    bool hashNonRepeating=false;
    for(int i=0; i<(int).input.size(); i++){
        char c=input[i];
        if(frequency[c]==1){
            hashNonRepeating=true;
            break;
        }
    }

    // 4 find the most repeated character (earliest if there's a tie);
    int maxfreq=0;
    for(auto &kv:frequency){
        maxfreq=max(maxfreq,kv.second);
    }
    
    char mostRepeated='\0';
    int ealiestIndexForMaxFreq=input.size();
    for(auto &kv:frequency){
        char c =kv.first;
        int freq=kv.second;
        if(freq==maxfreq){
            int idx=firstIndex[c];
            if(idx<ealiestIndexForMaxFreq){
                ealiestIndexForMaxFreq=idx;
                mostRepeated=c;
            }
        }
    }

    // 5 find the first repeating charater (if needed)
    char firstRepeating='\0';
    bool hashReating = false;
    for(int i=0; i<(int)input.size(); i++)
    {
        
    }
}