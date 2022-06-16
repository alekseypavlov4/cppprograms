#include <iostream>
#include <string>
using namespace std;
struct person
{
string l;
string n;
int b;
string a;
int s;
};

int main()
{
person konstantin;
konstantin.l = "Habenskiy";
konstantin.n = "Konstantin";
konstantin.b = 1997;
konstantin.a = "actor";
konstantin.s = 45000;
int a_1=2022-konstantin.b;

cout << "Lastname: " << konstantin.l << endl;
cout << "Name: " << konstantin.n << endl;
cout << "Birthday: " << konstantin.b << endl;
cout << "Appointment: " << konstantin.a << endl;
cout << "Salary: " << konstantin.s << endl;
cout << "\t" << endl;

person sergey;
sergey.l = "Bezrukov";
sergey.n = "Sergey";
sergey.b = 1999;
sergey.a = "sculptor";
sergey.s = 55000;
int a_2=2022-sergey.b;

cout << "Lastname: " << sergey.l << endl;
cout << "Name: " << sergey.n << endl;
cout << "Birthday: " << sergey.b << endl;
cout << "Appointment: " << sergey.a << endl;
cout << "Salary: " << sergey.s << endl;
cout << "\t" << endl;

person alexander;
alexander.l = "Petrov";
alexander.n = "Alexander";
alexander.b = 1984;
alexander.a = "director";
alexander.s = 80000;
int a_3=2022-alexander.b;

cout << "Lastname: " << alexander.l << endl;
cout << "Name: " << alexander.n << endl;
cout << "Birthday: " << alexander.b << endl;
cout << "Appointment: " << alexander.a << endl;
cout << "Salary: " << alexander.s << endl;
cout << "\t" << endl;

person dmitriy;
dmitriy.l = "Nagiev";
dmitriy.n = "Dmitriy";
dmitriy.b = 1985;
dmitriy.a = "manager";
dmitriy.s = 45000;
int a_4=2022-dmitriy.b;

cout << "Lastname: " << dmitriy.l << endl;
cout << "Name: " << dmitriy.n << endl;
cout << "Birthday: " << dmitriy.b << endl;
cout << "Appointment: " << dmitriy.a << endl;
cout << "Salary: " << dmitriy.s << endl;
cout << "\t" << endl;

person mikhail;
mikhail.l = "Bashkatov";
mikhail.n = "Mikhail";
mikhail.b = 1994;
mikhail.a = "fashion model";
mikhail.s = 70000;
int a_5=2022-mikhail.b;

cout << "Lastname: " << mikhail.l << endl;
cout << "Name: " << mikhail.n << endl;
cout << "Birthday: " << mikhail.b << endl;
cout << "Appointment: " << mikhail.a << endl;
cout << "Salary: " << mikhail.s << endl;
cout << "\t" << endl;

person andrey;
andrey.l = "Burkovskiy";
andrey.n = "Andrey";
andrey.b = 1992;
andrey.a = "assistant";
andrey.s = 55000;
int a_6=2022-andrey.b;

cout << "Lastname: " << andrey.l << endl;
cout << "Name: " << andrey.n << endl;
cout << "Birthday: " << andrey.b << endl;
cout << "Appointment: " << andrey.a << endl;
cout << "Salary: " << andrey.s << endl;
cout << "\t" << endl;

person kirill;
kirill.l = "Kyaro";
kirill.n = "Kirill";
kirill.b = 1980;
kirill.a = "assistant";
kirill.s = 43000;
int a_7=2022-kirill.b;

cout << "Lastname: " << kirill.l << endl;
cout << "Name: " << kirill.n << endl;
cout << "Birthday: " << kirill.b << endl;
cout << "Appointment: " << kirill.a << endl;
cout << "Salary: " << kirill.s << endl;
cout << "\t" << endl;

person ivan;
ivan.l = "Oganesyan";
ivan.n = "Ivan";
ivan.b = 1993;
ivan.a = "assistant";
ivan.s = 35000;
int a_8=2022-ivan.b;

cout << "Lastname: " << ivan.l << endl;
cout << "Name: " << ivan.n << endl;
cout << "Birthday: " << ivan.b << endl;
cout << "Appointment: " << ivan.a << endl;
cout << "Salary: " << ivan.s << endl;
cout << "\t" << endl;

cout << "Srednyaya zarplata = " << (konstantin.s+sergey.s+alexander.s+dmitriy.s+mikhail.s+andrey.s+kirill.s+ivan.s)/8 << endl;
cout << "\t" << endl;

if (a_1>30){
cout << konstantin.l << endl;}
if (a_2>30){
cout << sergey.l << endl;}
if (a_3>30){
cout << alexander.l << endl;}
if (a_4>30){
cout << dmitriy.l << endl;}
if (a_5>30){
cout << mikhail.l << endl;}
if (a_6>30){
cout << andrey.l << endl;}
if (a_7>30){
cout << kirill.l << endl;}
if (a_8>30){
cout << ivan.l << endl;}

return 0;
}
