#include<iostream>
using namespace std;
int areaofcircle(int r ,float area);
int main()
{
    int r;
    float ar,area;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    area=areaofcircle(r,area);
    cout<<"Area of circle="<<float(area);
    return 0;

}
int areaofcircle(int r,float area)
{
    area=3.14*r*r;
    return area;
}