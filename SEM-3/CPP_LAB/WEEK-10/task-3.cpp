#include<iostream>
using namespace std;

class Conversion {
    public:
        double val;
        virtual void convert(){};
};

class FtoC : public Conversion {
    public:
        FtoC(){
            cout<<"Enter Temperature in F: ";cin>>val;
        }
        void convert() {
            // C = (F - 32) * (5/9).
            val = (val-32)*(5/9);
            cout<<"Temperature in C: "<<val<<endl;
        }
};

class Mtok : public Conversion {
    public:
        Mtok(){
            cout<<"Enter Meters: ";cin>>val;
        }
        void convert() {
            // M/1000
            val = val/1000;
            cout<<"Meters in Km: "<<val<<endl;
        }
};

class HtoS : public Conversion {
    public:
        HtoS(){
            cout<<"Enter Hours: ";cin>>val;
        }
        void convert() {
            // H*3600
            val = val*3600;
            cout<<"Hours in Sec: "<<val<<endl;
        }
};

int main() {
    Conversion *con;
    FtoC ftc;
    Mtok mtk;
    HtoS hts;

    con = &ftc;
    con->convert();
    con = &mtk;
    con->convert();
    con = &hts;
    con->convert();
    return 0;
}
