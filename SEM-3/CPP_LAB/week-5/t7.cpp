// Temperature in degrees Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32
#include<iostream>
using namespace std;
class Celsius{
    private:
        float temperature;
    public:
        Celsius(float t) { temperature = t;}
        friend void convertToFahrenheit(Celsius&);
};

void convertToFahrenheit(Celsius& c){
    float f = (c.temperature * 9/5) + 32;
    cout<<"Temperature in Fahrenheit: "<<f<<endl;
}

int main() {
    float f;
    cout<<"Enter Temperature in Celsius: ";
    cin>>f;
    Celsius c(f);
    convertToFahrenheit(c);
    return 0;
}