#include<iostream>
#include<string>
using namespace std;

struct Record{
    string id;
    string in_time;
    string out_time;
}record, early, late;

int main() {
    int M;
    cin>>M;
    early.in_time = "23:59:59";
    late.out_time = "00:00:00";
    for(int i=0; i<M; i++) {
        cin>>record.id>>record.in_time>>record.out_time;
        if(record.in_time<=early.in_time)early=record;
        if(record.out_time>=late.out_time)late=record;
    }
    printf("%s %s\n", early.id.c_str(), late.id.c_str());
    return 0;
}
