#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

string convert_to_string(long long sum){
    stringstream ss;
    ss<<sum;
    string s;
    ss>>s;
    return s;
}

int check(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1' || s[i] == '2'){
            count++;
        }
    }
    return count;
}

void return_sum(long long a[], long long  n){
    int count = 0;
    long long max = a[0];
    for(int i =0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] == max){
            count++;
        }
    }
    cout<<max<<endl<<count<<endl;
}


int main(){
    int n; cin>>n;
    int m;cin>>m;
    vector<long long>topic;
    for(int i=0 ;i<n; i++){
        long long input;cin>>input;
        topic.push_back(input);
    }
    /*
    cout<<"Element inside topic array: ";
    for(int i=0; i<n; i++){
        cout<<topic[i]<<", ";
    }*/
    //cout<<endl;
    long long sum;
    string res;
    int count;
    long long max_topic[500]={0};
    long long  k = 0;
    long long  l = 0;
    for(int i=0 ;i<n; i++){
        for(int j=i+1; j<n; j++){
            //cout<<topic[i]<<"+"<<topic[j]<<endl;
            sum = topic[i] + topic[j];
            res = convert_to_string(sum);
            count = check(res);
            max_topic[l++] = count; 
        }
    }
    
    /*cout<<"Max topic: ";
    for(int i=0; i<10; i++){
        cout<<max_topic[i]<<" ";
    }*/
    /*cout<<endl;
    cout<<"Team: ";
    for(int i=0; i<10; i++){
        cout<<team[i]<<" ";
    }*/
    //cout<<endl;
    return_sum(max_topic,500);
    return 0;
}