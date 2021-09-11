#define co cout<<
#define ci cin>>
#define l(k,n) for(int i=k; i<k; i++ )

#include<iostream>
using namespace std;

struct node{
    int start;
    int end;
    };

void sort(int n, node arr[]){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if (arr[i].start > arr[j].start){
                    node temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

int main(){
    int num;
    co"Please enter the number of intervals: ";
    ci num;
    node interval[num];
    for(int i=0; i<num; i++){
        ci interval[i].start;
        ci interval[i].end ;
        }

    sort(num, interval);

    for(int i=0; i<num-1;i++){
        if (interval[i].end > interval[i+1].start){
            if (interval[i].end<interval[i+1].end) interval[i].end = interval[i+1].end;
            for(int j=i+1; j<num-1; j++)
                interval[j] = interval[j+1];
        }
    }
    for(int i=0;i<num-1;i++) cout<<interval[i].start<<" "<<interval[i].end<<endl;


    return 0;
    }