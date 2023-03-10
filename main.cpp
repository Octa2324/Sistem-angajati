#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Persoana
{
string nume, post_ocupat, adresa;
int ziua_angajarii, luna_angajarii, anul_angajarii, salariu;
public:
Persoana(string _nume, string _post_ocupat, string _adresa, int _salariu, int _anul_angajarii, int
_luna_angajarii, int _ziua_angajarii)
{
nume=_nume;
post_ocupat=_post_ocupat;
adresa=_adresa;
salariu=_salariu;
anul_angajarii=_anul_angajarii;
luna_angajarii=_luna_angajarii;
ziua_angajarii=_ziua_angajarii;
}
friend ostream& operator<<(ostream&,const Persoana&);

};

ostream& operator<<(ostream& os, const Persoana& C)

{
os << C.nume << "," << C.post_ocupat<< "," << C.adresa << "," << C.salariu<< ","<<C.ziua_angajarii<<
"." <<C.luna_angajarii << "." << C.anul_angajarii;
return os;
}

void culoare_meniu(int n)
{
if(n==1)
system("COLOR 4");
if(n==2)
system("COLOR 2");
if(n==3)
system("COLOR 9");
if(n==4)
system("COLOR 7");
}

Persoana *citire()
{
char nume[50], post_ocupat[51], adresa[50];
int an, zi,luna;
int ziua_angajarii, luna_angajarii, anul_angajarii, salariu;
cout<<"Intoduceti numele: ";
cin.ignore();
cin.get(nume,50);
cin.get();
cout<<endl;

time_t ttime=time(0);
tm *local_time=localtime(&ttime);
an=1900+local_time->tm_year;
luna=1+local_time->tm_mon;
zi=local_time->tm_mday;

cout<<"Introduceti postul ocupat: ";
cin.get(post_ocupat,50);
cin.get();
cout<<endl;

cout<<"Introduceti adresa: ";
cin.get(adresa,50);
cin.get();
cout<<endl;

cout<<"Introduceti salariul: ";
cin>>salariu;
cout<<endl;

cout<<"Introduceti anul angajarii: ";
cin>>anul_angajarii;
if(anul_angajarii < an)
{
cout<<"Introduceti luna angajarii: ";
cin>>luna_angajarii;
cout<<"Introduceti ziua angajarii: ";
cin>>ziua_angajarii;

return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
if(anul_angajarii == an)
{
cout<<"Introduceti luna angajarii: ";
cin>>luna_angajarii;
if(luna_angajarii < luna)
{
cout<<"Introduceti ziua angajarii: ";
cin>>ziua_angajarii;
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
if(luna_angajarii == luna)
{
cout<<"Introduceti ziua angajarii: ";
cin>>ziua_angajarii;
if(ziua_angajarii < zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii == zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii > zi)
{
cout<<"Eroare! Introduceti o data valida: ";
while(ziua_angajarii > zi)
{
cin>>ziua_angajarii;

if(ziua_angajarii > zi)
cout<<"Eroare! Introduceti o data valida: ";
}
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
}
if(luna_angajarii > luna)
{
cout<<"Eroare! Introduceti o data valida: ";
while(luna_angajarii > luna)
{
cin>>luna_angajarii;
if(luna_angajarii > luna)
cout<<"Eroare! Introduceti o data valida: ";
}
cout<<"Introduceti ziua angajarii: ";
cin>>ziua_angajarii;
if(ziua_angajarii < zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii == zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii > zi)
{
cout<<"Eroare! Introduceti o data valida: ";
while(ziua_angajarii > zi)
{
cin>>ziua_angajarii;

if(ziua_angajarii > zi)
cout<<"Eroare! Introduceti o data valida: ";
}
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
}
}
if(anul_angajarii > an)
{
cout<<"Eroare! Introduceti o data valida: ";
while(anul_angajarii > an)
{
cin>>anul_angajarii;
if(anul_angajarii > an)
cout<<"Eroare! Introduceti o data valida: ";
}
cout<<"Introduceti luna angajarii: ";
cin>>luna_angajarii;
if(luna_angajarii < luna)
{
cout<<"Introduceti ziua angajarii: ";
cin>>ziua_angajarii;
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
if(luna_angajarii == luna)
{
cout<<"Introduceti ziua angajarii: ";

cin>>ziua_angajarii;
if(ziua_angajarii < zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii == zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii > zi)
{
cout<<"Eroare! Introduceti o data valida: ";
while(ziua_angajarii > zi)
{
cin>>ziua_angajarii;
if(ziua_angajarii > zi)
cout<<"Eroare! Introduceti o data valida: ";
}
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
}
if(luna_angajarii > luna)
{
cout<<"Eroare! Introduceti o data valida: ";
while(luna_angajarii > luna)
{
cin>>luna_angajarii;
if(luna_angajarii > luna)
cout<<"Eroare! Introduceti o data valida: ";
}
cout<<"Introduceti ziua angajarii: ";

cin>>ziua_angajarii;
if(ziua_angajarii < zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii == zi)
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
if(ziua_angajarii > zi)
{
cout<<"Eroare! Introduceti o data valida: ";
while(ziua_angajarii > zi)
{
cin>>ziua_angajarii;
if(ziua_angajarii > zi)
cout<<"Eroare! Introduceti o data valida: ";
}
return new
Persoana(nume,post_ocupat,adresa,salariu,anul_angajarii,luna_angajarii,ziua_angajarii);
}
}
}
}

void actualizare_date()
{
int inf, n=0, pos, nr;
string sub;
ifstream path;
ofstream fout;
path.open("chosenone.txt", ios_base::app);

fout.open("wrongone.txt", ios_base::app);
string line;
cout<<"Selectati numarul angajatului caruia doriti sa-i actualizati datele:" << endl;
cin.ignore();
while(getline(path, line))
{
n++;
pos=line.find(',');
sub=line.substr(0,pos);
cout << n << "." <<sub<<endl;
}
path.close();
cin>> nr;
cout<< endl << "Alegeti ce informatie doriti sa modificati: 1-Nume, 2-Postul ocupat, 3-Salariul, 4-Adresa, 5-Data angajarii" << endl;
cin.ignore();
cin>>inf;
n=0;
path.open("chosenone.txt", ios_base::app);
while(getline(path, line))
{
n++;
if(n==nr)
{
char lily[300];
strcpy(lily,line.c_str());
char *info, ceva[50], nume[50], post[50], salariu[50], adresa[50], data[50];
info=strtok(lily,",");
strcpy(nume, info);

info=strtok(NULL,",");
strcpy(info, info+1);
strcpy(post, info);
info=strtok(NULL,",");
strcpy(info, info+1);
strcpy(salariu, info);
info=strtok(NULL,",");
strcpy(info, info+1);
strcpy(adresa, info);
info=strtok(NULL,",");
strcpy(info, info+1);
strcpy(data, info);
if(inf==1)
{
cout<<"Intoduceti numele: ";
cin.ignore();
cin.get(ceva,50);
cin.get();
cout<<endl;
strcpy(nume,ceva);
}
if(inf==2)
{
cout<<"Intoduceti postul: ";
cin.ignore();
cin.get(ceva,50);
cin.get();
cout<<endl;
strcpy(post,ceva);

}
if(inf==3)
{
cout<<"Intoduceti salariul: ";
cin.ignore();
cin.get(ceva,50);
cin.get();
cout<<endl;
strcpy(salariu,ceva);
}
if(inf==4)
{
cout<<"Intoduceti adresa: ";
cin.ignore();
cin.get(ceva,50);
cin.get();
cout<<endl;
strcpy(adresa,ceva);
}
if(inf==5)
{
cout<<"Intoduceti data: ";
cin.ignore();
cin.get(ceva,50);
cin.get();
cout<<endl;
strcpy(data,ceva);
}
fout << nume <<", "<<post<<", "<<salariu<<", "<<adresa<<", "<<data<<endl;

}
else
fout<<line<<endl;
}
path.close();
fout.close();
remove("chosenone.txt");
rename("wrongone.txt", "chosenone.txt");
cout<<endl<< "Actualizarea a fost un succes! Felicitari!" << endl;
}
void adaugare()
{
fstream path;
path.open("chosenone.txt", ios_base::app);
Persoana *a=citire();
path<<*a;
cout<<endl;
cout<<"Angajatul a fost adaugat";
path<<endl;
path.close();
cout<<endl;
cout<<endl;
}
void afisare()
{
string line;
ifstream path;
path.open("chosenone.txt", ios::out);
while(getline(path, line))

cout << line << endl;
path.close();
cout<<endl;
}
void stergere()
{
char nume[50] ;
cout<< endl << "Intoduceti numele angajatului cu pricina: ";
cin.ignore();
cin.get(nume, 50);
cin.get();

string line;
char line1[120];
ifstream path;
ofstream newpath;
path.open("chosenone.txt", ios::out);
newpath.open("auxiliar.txt", ios_base::app);
while(getline(path, line))
{
strcpy(line1,line.c_str());
if(strstr(line1,nume)==NULL)
newpath<<line<<endl;
}
path.close();
newpath.close();
remove("chosenone.txt");
rename("auxiliar.txt", "chosenone.txt");
cout<<endl;

}
///AOCO
void CautareDupaNume()
{
char nume[50];
int ok=0;
cout<< endl << "Intoduceti numele angajatului cautat: ";
cin.ignore();
cin.get(nume, 50);
cin.get();

string line;
char line1[120];
ifstream path;
ofstream newpath;
path.open("chosenone.txt", ios::out);
while(getline(path, line))
{
strcpy(line1,line.c_str());
if(strstr(line1,nume))
{
cout<<line<<endl;
ok++;
}
}
if(ok==0)
cout<<"Angajatul nu a fost gasit"<<endl;
path.close();
cout<<endl;

}
void CautareDupaPost()
{
char nume[50] ;
int ok=0;
cout<< endl << "Intoduceti postul angajatului cautat: ";
cin.ignore();
cin.get(nume, 50);
cin.get();

string line;
char line1[120];
ifstream path;
ofstream newpath;
path.open("chosenone.txt", ios::out);
while(getline(path, line))
{
strcpy(line1,line.c_str());
if(strstr(line1,nume))
{
cout<<line<<endl;
ok++;
}

}
if(ok==0)
cout<<"Angajatul nu a fost gasit"<<endl;
path.close();
cout<<endl;

}
void CautareDupaDataAngajarii()
{
char nume[50] ;
int ok=0;
cout<< endl << "Intoduceti data angajarii a persoanei cautate: ";
cin.ignore();
cin.get(nume, 50);
cin.get();

string line;
char line1[120];
ifstream path;
ofstream newpath;
path.open("chosenone.txt", ios::out);
while(getline(path, line))
{
strcpy(line1,line.c_str());
if(strstr(line1,nume))
{
cout<<line<<endl;
ok++;
}
}

if(ok==0)
cout<<"Angajatul nu a fost gasit"<<endl;
path.close();
cout<<endl;

}
int main()
{
int n=0, a,b,c;
while(true)
{
a=1;
b=1;
c=1;
cout<<" _____________________________________\n";
cout<<" |Sistem de management al angajatilor|\n";
cout<<" |___________________________________|\n";
cout<<"\n";
cout<<" ____________________ _______________________________________________ __________\n";
cout<<" |1.Detalii angajati|";
cout<<" |2.Cautare angajati|";
cout<<" |3.Afiseaza toti angajatii|";
cout<<" |4.Iesire|";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"Accesati: ";
cin>>n;
culoare_meniu(n);
system("cls");
cout<<"\n";
if(n<=0 || n>4)
cout<<"Alegere incorecta\n";

switch (n)
{
case 1:
while(a==1)
{
cout<<"___________________ ___________________ ______________________________\n";
cout<<"|1.Adauga angajati|";
cout<<" |2.Sterge angajati|";
cout<<" |3.Actualizare date|";
cout<<" |4.Inapoi|\n";
cout<<"\n";
cout<<"Accesati: ";
cin>>n;
if(n==3)
system("COLOR 7");
system("cls");
cout<<"\n";
if(n<=0 || n>4)
{
cout<<"Alegere incorecta\n";
cout<<"\n";
}
switch (n)
{
case 1:
adaugare();
break;
case 2:

stergere();
break;
case 3:
actualizare_date();
break;
case 4:
a=0;
break;
}
}
break;
case 2:
while(b==1)
{
cout<<"_____________ ______________________ _________________________________\n";
cout<<"|1.Dupa nume|";
cout<<" |2.Dupa postul ocupat|";
cout<<" |3.Dupa data angajarii|";
cout<<" |4.Inapoi|\n";
cout<<"\n";
cout<<"Accesati: ";
cin>>n;
if(n==4)
system("COLOR 7");
system("cls");
cout<<"\n";
if(n<=0 || n>4)
{

cout<<"Alegere incorecta\n";
cout<<"\n";
}
switch (n)
{
case 1:
CautareDupaNume();
break;
case 2:
CautareDupaPost();
break;
case 3:
CautareDupaDataAngajarii();
break;
case 4:
b=0;
break;
}
}
break;
case 3:
while(c==1)
{
cout<<"___________________________ __________\n";
cout<<"|1.Afiseaza toti angajatii|";
cout<<" |2.Inapoi|\n";
cout<<"\n";
cout<<"Accesati: ";
cin>>n;

if(n==2)
system("COLOR 7");
system("cls");
cout<<"\n";
if(n<1 || n>2)
{
cout<<"Alegere incorecta\n";
cout<<"\n";
}
switch (n)
{
case 1:
afisare();
break;
case 2:
c=0;
break;
}
}
break;
case 4:
exit(0);

}
}
}
