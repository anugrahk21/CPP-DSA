#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//max heap

void maxheapify(int heap[],int s,int i){
    int largest=i;
    int leftIndex=2*i+1;
    int rightIndex=2*i+2;
    if(rightIndex<s && heap[rightIndex]>heap[largest]){
        largest=rightIndex;
    };
    if(leftIndex<s && heap[leftIndex]>heap[largest]){
        largest=leftIndex;
    };
    if(largest!=i){
        swap(heap[i],heap[largest]);
        maxheapify(heap,s,largest);
    }
};

void buildmaxheap(int heap[],int s){
    for(int i=s/2-1;i>=0;--i){
        maxheapify(heap,s,i);
    }
};

void sortmaxheap(int heap[],int s){
    buildmaxheap(heap,s);
    for(int i=s-1;i>=0;--i){
        swap(heap[0],heap[i]);
        maxheapify(heap,i,0);
    }
}

void deletemaxheap(int heap[],int &s){
    heap[0]=heap[s-1];
    s--;
    maxheapify(heap,s,0);
};

void displaymaxheap(int heap[],int s){
    for(int i=0;i<s;++i){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
};

int main(){
    int size;
    cin>>size;
    int heap[size];
    for(int i=0;i<size;++i){
        cin>>heap[i];
    };

    buildmaxheap(heap,size);
    displaymaxheap(heap,size);
    deletemaxheap(heap,size);
    displaymaxheap(heap,size);
    sortmaxheap(heap,size);
    displaymaxheap(heap,size);
}