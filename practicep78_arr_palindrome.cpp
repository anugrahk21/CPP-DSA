#include <iostream>
using namespace std;

//function to check if elements of the array are palindrome or not
//and
//function to check if sum of elements of the array are palindrome or not

bool isPalindrome(int n){
    int temp=n; //to store the original number as n will be 0 after the loop.
    int rev=0;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp){
        return true;
    }
    else{
        return false;
    };
};

bool isAllPalindrome(int arr[],int n){
    for(int i=0;i<n;++i){
        if(isPalindrome(arr[i])==false){
            return false;
        }
    }
    return true;
}

bool isSumPalindrome(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;++i){
        sum=sum+arr[i];
        return isPalindrome(sum);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //using isPalindrome function
    bool flag=true;
    for(int i=0;i<n;++i){
        if(isPalindrome(arr[i])==false){
            cout<<"All elements of the array are not palindrome"<<endl;
            flag=false;
            break;
        };
    };
    if(flag){
        cout<<"All elements of the array are palindrome"<<endl;
    }
    //or
    //using isAllPalindrome function
    if(isAllPalindrome(arr,n)){
        cout<<"All elements of the array are palindrome"<<endl;
    }
    else{
        cout<<"All elements of the array are not palindrome"<<endl;
    };

    if(isSumPalindrome(arr,n)){
        cout<<"Sum of elements of the array is palindrome"<<endl;
    }
    else{
        cout<<"Sum of elements of the array is not palindrome"<<endl;
    }
}