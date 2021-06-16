#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;

int main(){
	 int n; //Apzime jautajumu skaitu 
    int rezultats = 0; //Rezultats uz cik jautajumiem atbildeji pareizi
    int nepareizi = 0;//Rezultats uz cik jautajumiem atbildeji nepareizi
    char atbilde; //Pareiza atbilde uz jautajumu
    
     cout << "Ka pareizi jatver datnes? (divas atbildes)"<< endl;//1. jautajums un atbildes.
    cout << "A) datne.open(datne.txt,ios::out); "<< endl; 
    cout << "B) datne.open(datne.ios::open)" << endl;
    cout << "C) datne.open(datne.txt,ios::app); "<< endl;
    cout << "D) datne.open(datne.txt:app::open)" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'a' || atbilde == 'A' || atbilde == 'c' || atbilde == 'C')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta  mazo a , c vai lielo A, C atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{ 
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
   		nepareizi++;
   	}
   	cout << endl;
    cout << "Kuri paplasinajumi NEDER teksta datnem" << endl;//2. jautajums un atbildes.
    cout << "A) .doc"<< endl;
    cout << "B) .exe << " << endl;
    cout << "C) .wav >>" << endl;
    cout << "D) .jpg >>" << endl;

    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'b' || atbilde == 'B' || atbilde == 'c' || atbilde == 'C'|| atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo b , c vai lielo B, C atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;
    }
      cout << "Ja gribetu izvadit teksta datnes ""sveiks"" kuri 2 veidi butu pareizi?" << endl << endl";//3. jautajums un atbildes.
    cout << "A)string sveiki = sveiks; datne << sveiki; " << endl;
    cout << "B) cout >> sveiki " << endl;
    cout << "C) sveiks " << endl;
    cout << "D) datne << sveiki; " << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'a' || atbilde == 'A' || atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo a , d vai lielo A, D atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{        
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;
    }
    
