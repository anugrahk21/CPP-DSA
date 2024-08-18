// A grand trade fair event organized by the Confederation of National Large-Scale Industry saw varying attendance over three days.



// On the first day, x people attended. On the second day, the number doubled to 2x. Due to heavy rains on the third day, attendance dropped to half of the first day's number, x/2.



// Given the total attendance for the first three days, find the number of people who attended each day: days 1, 2, and 3.

// Input format :
// The input consists of an integer N, corresponding to the total number of people.

// Output format :
// The first line displays the number of attendees on day 1 as an integer value.

// The second line displays the number of attendees on day 2 as an integer value.

// The third line displays the number of attendees on day 3 as an integer value.

#include <iostream>
using namespace std;

int main(){
    int k;
    float x;
    cin>>k;
    x=(k/(2+1+0.5)); //made an expression for finding the value of x.
    cout<<"Number of attendees on day 1: "<<x<<endl;
    cout<<"Number of attendees on day 2: "<<2*x<<endl;
    cout<<"Number of attendees on day 3: "<<0.5*x<<endl;
}