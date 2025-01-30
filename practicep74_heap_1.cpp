// This program demonstrates the insertion, deletion, sorting and display of a heap.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Heap

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} //or use std::swap(a,b);

//Insertion
void insertMinHeap(int heap[],int &size,int data){
    heap[size]=data;
    size++;

    int i=size-1;
    while(i!=0 && heap[(i-1)/2]>heap[i]){
        swap(&heap[(i-1)/2],&heap[i]); //if parent is greater than child, swap
        i=(i-1)/2;
    }
};

//Insertion for Max Heap
//if parent/root node(a node) = i
//left child = 2*i+1
//right child = 2*i+2
//parent = (i-1)/2

void insertMaxHeap(int heap[],int &size,int data){
    heap[size]=data;
    size++;

    int i=size-1; //last element
    while(i!=0 && heap[(i-1)/2]<heap[i]){ //if parent is less than child, swap
        swap(&heap[(i-1)/2],&heap[i]);
        i=(i-1)/2; //move to the next upper level parent
    }
};

//Heapify for max heap
//Ensure heap property is maintained among a single node and its children
void maxHeapfy(int heap[],int size,int i){
    int largest=i; //parent node is the largest
    int l=2*i+1; //left child
    int r=2*i+2; //right child

    if(l<size && heap[l]>heap[largest]){
        largest=l;
    }
    if(r<size && heap[r]>heap[largest]){
        largest=r;
    }
    if(largest!=i){ //if the largest index is not the parent index then swap as the parent should be the largest
        swap(heap[i],heap[largest]);
        maxHeapfy(heap,size,largest);
    }
};

//Heapify for min heap
//Ensure heap property is maintained among a single node and its children
void minHeapfy(int heap[],int size,int i){
    int smallest=i; //parent node is the smallest
    int l=2*i+1;
    int r=2*i+2;

    if(l<size && heap[l]<heap[smallest]){
        smallest=l;
    }
    if(r<size && heap[r]<heap[smallest]){
        smallest=r;
    }
    if(smallest!=i){
        swap(heap[i],heap[smallest]);
        minHeapfy(heap,size,smallest);
    }
};

//Build max heap
//Same as heapify but here we are doing it for all the nodes
void buildMaxHeap(int heap[],int size){
    for(int i=size/2-1;i>=0;i--){ //here i=size/2-1 is the last parent node
        maxHeapfy(heap,size,i);
    }
};

//Build min heap
//Same as heapify but here we are doing it for all the nodes
void buildMinHeap(int heap[],int size){
    for(int i=size/2-1;i>=0;i--){
        minHeapfy(heap,size,i);
    }
};

//Delete max heap
void deleteMaxHeap(int heap[],int &size){
    heap[0]=heap[size-1];
    size--;
    maxHeapfy(heap,size,0); //making sure the heap property is maintained
};

//Delete min heap
void deleteMinHeap(int heap[],int &size){
    heap[0]=heap[size-1];
    size--;
    minHeapfy(heap,size,0);
};

//Sort max heap
void sortMaxHeap(int heap[],int size){
    buildMaxHeap(heap,size);
    for(int i=size-1;i>=0;i--){
        swap(&heap[0],&heap[i]);
        maxHeapfy(heap,i,0);
    }
};

//Sort min heap
void sortMinHeap(int heap[],int size){
    buildMinHeap(heap,size);
    for(int i=size-1;i>=0;i--){
        swap(&heap[0],&heap[i]);
        minHeapfy(heap,i,0);
    }
};

//Display
void display(int heap[],int size){
    for(int i=0;i<size;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
};

int main(){
    int length;
    int size=0;
    char htype[3];
    cout<<"Enter the type of heap: ";
    cin>>htype;
    cout<<"Enter the size of the heap: ";
    cin>>length;
    int choice;
    int heap[100]; // Declare heap outside the switch statement with a fixed size
    while(true){
        cout<<"1-insert, 2-delete, 3-sort, 4-display, 5-exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1: // Insert
            if(strcmp(htype,"Min")==0){
                for(int i=0;i<length;i++){
                    int data;
                    cout<<"Enter the data: ";
                    cin>>data;
                    insertMinHeap(heap,size,data);
                };
                cout<<"Min Heap: ";
                display(heap,size);
            }
            else if(strcmp(htype,"Max")==0){
                for(int i=0;i<length;i++){
                    int data;
                    cout<<"Enter the data: ";
                    cin>>data;
                    insertMaxHeap(heap,size,data);
                };
                cout<<"Max Heap: ";
                display(heap,size);
            };
            break;

            case 2: // Delete
            if(strcmp(htype,"Min")==0){
                deleteMinHeap(heap,size);
                cout<<"Min Heap: ";
                display(heap,size);
            }
            else if(strcmp(htype,"Max")==0){
                deleteMaxHeap(heap,size);
                cout<<"Max Heap: ";
                display(heap,size);
            };
            break;

            case 3: // Sort
            if(strcmp(htype,"Min")==0){
                sortMinHeap(heap,size);
                cout<<"Min Heap: ";
                display(heap,size);
            }
            else if(strcmp(htype,"Max")==0){
                sortMaxHeap(heap,size);
                cout<<"Max Heap: ";
                display(heap,size);
            };
            break;

            case 4: // Display
            if(strcmp(htype,"Min")==0){
                cout<<"Min Heap: ";
                display(heap,size);
            }
            else if(strcmp(htype,"Max")==0){
                cout<<"Max Heap: ";
                display(heap,size);
            };
            break;

            case 5:
            return 0;

        }

    }
}