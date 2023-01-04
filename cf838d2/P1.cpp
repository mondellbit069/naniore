#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct TOADO{
    float x;
    float y;
};
TOADO DinhA,DinhB,DinhC,diembatky;
void Nhap()
{
    cout<<"Nhap vao toa do cua 3 dinh tam giac:\n";
    cin>>DinhA.x>>DinhA.y;
    cin>>DinhB.x>>DinhB.y;
    cin>>DinhC.x>>DinhC.y;
}
void kiemtra()
{
       if(DinhA.x==DinhB.x==DinhC.x
        ||DinhA.y==DinhB.y==DinhC.y
        ||DinhA.x==DinhB.x&&DinhA.y==DinhB.y
        ||DinhB.x==DinhC.x&&DinhB.y==DinhC.y
        ||DinhC.x==DinhA.x&&DinhC.y==DinhA.y
        )
        {
            cout<<"A B C khong la 3 dinh cua tam giac\n";
        }
    else
        cout<<"A B C la 3 dinh cua ABC\n";
}
void main()
{
    Nhap();
    kiemtra();
    cout<<"Nhap vao mot diem bat ky:\n";
    cin>>diembatky.x>>diembatky.y;
}