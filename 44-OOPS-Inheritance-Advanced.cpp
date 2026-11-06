#include <iostream>
#include <iomanip>
using namespace std;


class nust{
    string Aura;
    public:
    int rank;
    int campus;
    string location;


    void getRank(int r , int c , string loc);
    string getAura(void);
    void setAura(string a1);
    void setRank(void);

    ~nust(){
        cout<<"Destructor called for nust with rank: "<<rank<<" and campus: "<<campus<<" and location: "<<location<<endl;
    }
};

string nust :: getAura(void){
    return Aura;
}

void nust:: setAura(string a1){
    Aura = a1;
}

void nust::getRank(int r , int c , string loc){
    rank = r;
    campus = c;
    location = loc;
    
}

void nust::setRank(void){
    cout<<"The Rank of NUST is: "<<rank<<endl;
    cout<<"The Campus of NUST are : "<<campus<<endl;
    cout<<"The Location of Nust is : "<<location<<endl;
    cout<<"The Aura of nust is : "<<Aura<<endl;
}


class UW : public nust{
    public:
    string Aura;
    void getRank(int r1 , int c1 , string locs , string Ar);
    void setRank(void);

    ~UW(){
        cout<<"Destructor called for UW with rank: "<<rank<<" and campus: "<<campus<<" and location: "<<location<<endl;
    }
};

void UW::getRank(int r1 , int c1 , string locs , string Ar ){
    rank = r1;
    campus = c1;
    location = locs;
    Aura = Ar;
}

void UW::setRank(void){
    cout<<"The Rank of UW is: "<<rank<<endl;
    cout<<"The Campus of UW are: "<<campus<<endl;
    cout<<"The Location of UW is: "<<location<<endl;
    cout<<"The Aura of UW is: "<<Aura<<endl;
}
int main() {
    nust n1;
    n1.getRank(2, 3, "Islamabad");
    n1.getAura();
    n1.setAura("1000++");
    n1.setRank();

    
    cout<<endl;
    UW u1;
    u1.getRank(12 , 4 , "Taxila" , "∞♾");
    u1.setRank();

    return 0;
}