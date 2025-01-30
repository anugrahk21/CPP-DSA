#include <iostream>
using namespace std;

class apple{
    int napple;
    public:
    int numberoffruits(){
        cout<<"Enter apple number: ";
        cin>>napple;
        return napple;
    };
};

class banana{
    int nbanana;
    public:
    int numberoffruits(){
        cout<<"Enter banana number: ";
        cin>>nbanana;
        return nbanana;
    };
};

class fruits:public apple,public banana{

    public:
    int tn;
    fruits(){
        tn=apple::numberoffruits()+banana::numberoffruits();
        dispaly();
    }
    void dispaly(){
        cout<<"Total number of fruits: "<<tn<<endl;
    };
    //or
    // void totalnumberoffruits(){
    //     cout<<"Total number of fruits: "<<apple::numberoffruits()+banana::numberoffruits()<<endl;
    // }
    
};
int main(){
    fruits f;
    //f.totalnumberoffruits()
    return 0;
}