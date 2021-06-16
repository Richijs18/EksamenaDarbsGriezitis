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
   		nepareizi++;//pieskaita neigutos puntkus
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
        nepareizi++;//pieskaita neigutos puntkus
    }
    cout<< endl;
      cout << "Ja gribetu izvadit teksta datnes ""sveiks"" kuri 2 veidi butu pareizi?" << endl << endl;//3. jautajums un atbildes.
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
        nepareizi++;//pieskaita neigutos puntkus
    }
         cout << "Kadas 2 komandas jaraksta lai saktu izmantotu arejas datnes?" << endl;//4. jautajums un atbildes.
    cout << "A)#include <texttypes> " << endl;
    cout << "B)#include <fstream> " << endl;
    cout << "C)#include <ctime> " << endl;
    cout << "D)ofstream datne; " << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'b' || atbilde == 'B' || atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo b , d vai lielo B, D atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;//pieskaita neigutos puntkus
    }
     cout << "Kuri 3 paplasinajumi der teksta datnem? " << endl << endl;//5. jautajums un atbildes.
    cout << "A) .txt" << endl;
    cout << "B) .rtf" << endl;
    cout << "C) .zip" << endl;
    cout << "D) .doc" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'b' || atbilde == 'B' || atbilde == 'd' || atbilde == 'D' || atbilde == 'a' || atbilde == 'A')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo a, b, d vai lielo A, B, D  atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;//pieskaita neigutos puntkus
    }
       cout << "Kas ir teskta datnes? (Tris atbildes) " << endl << endl;//6. jautajums un atbildes.
    cout << "A) Burtnica" << endl;
    cout << "B) Datu kopa" << endl;
    cout << "C) Notepad" << endl;
    cout << "D) Tekstuals vai grafisks fails" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'b' || atbilde == 'B' || atbilde == 'd' || atbilde == 'D'|| atbilde == 'c' || atbilde == 'C')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo c, b, d vai lielo C, B, D  atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;//pieskaita neigutos puntkus
    }
         cout << "Pec ka var zinat kad tas ir teksta dantes? (Tris atbildes) " << endl << endl;//7. jautajums un atbildes.
    cout << "A) Datnes varda" << endl;
    cout << "B) Punkta" << endl;
    cout << "C) Krasas" << endl;
    cout << "D) Paplasinajuma" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'a' || atbilde == 'A' || atbilde == 'b' || atbilde == 'B'|| atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo a, b, d vai lielo A, B, D  atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;//pieskaita neigutos puntkus
    }
     cout << "Kuri 2 kodi ir pareizi? " << endl << endl;//8. jautajums un atbildes.
        
    cout << "A) #include <fstream>" <<endl;
    cout <<"using namespace std;" <<endl;
	cout <<"int main(){" <<endl;
	cout <<	"int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};"<<endl;
	cout <<"int datums, menesis=0;"<<endl;
	cout <<"ifstream in;"<<endl;
	cout <<"in.open(""diena.in"",ios::in);"<<endl;
	cout <<"in>>datums;"<<endl;
	cout <<"in.close();"<<endl;
	cout <<"while(datums>a[menesis]){"<<endl;
		cout <<"datums=datums-a[menesis];"<<endl;
		cout <<"menesis=menesis+1;"<<endl;
	cout << "}"<<endl;
	cout <<"ofstream out;"<<endl;
	cout <<"out.open(""diena.out"",ios::out);"<<endl;
	cout <<"out<<datums<<" "<<menesis+1;"<<endl;
	cout <<"out.close();"<<endl;
 cout<<  "}" << endl;
 
     cout << "B) #include <fstream>" <<endl;
    cout <<"using namespace std;" <<endl;
	cout <<"int main(){" <<endl;
	cout <<	"int a[11]={31,28,31,30,31,30,31,31,30,31,30,31};"<<endl;
	cout <<"int datums, menesis=0;"<<endl;
	cout <<"ifstream in;"<<endl;
	cout <<"in.open(""diena.in"",ios::in);"<<endl;
	cout <<"in>>datums;"<<endl;
	cout <<"in.close();"<<endl;
	cout <<"while(datums>a[menesis]){"<<endl;
		cout <<"datums=datums-a[menesis];"<<endl;
		cout <<"menesis=menesis+1;"<<endl;
	cout << "}"<<endl;
	cout <<"ofstream out;"<<endl;
	cout <<"out.open(""diena.out"",ios::out);"<<endl;
	cout <<"out<<datums<<" "<<menesis+2;"<<endl;
	cout <<"out.open();"<<endl;
	
    cout << "C) #include <fstream>" <<endl;
    cout <<"using namespace std;" <<endl;
	cout <<"int main(){" <<endl;
	cout <<	"int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};"<<endl;
	cout <<"int vecums, gads=0;"<<endl;
	cout <<"ifstream out;"<<endl;
	cout <<"in.open(""diena.in"",ios::in);"<<endl;
	cout <<"in>>datums;"<<endl;
	cout <<"in.close();"<<endl;
	cout <<"while(datums>a[menesis]){"<<endl;
		cout <<"datums=datums-a[menesis];"<<endl;
		cout <<"menesis=menesis+1;"<<endl;
	cout << "}"<<endl;
	cout <<"ofstream out;"<<endl;
	cout <<"out.open(""diena.out"",ios::out);"<<endl;
	cout <<"out<<datums<<" "<<menesis+1;"<<endl;
	cout <<"out.close();"<<endl;
	
     cout << "D) #include <fstream>" <<endl;
    cout <<"using namespace std;" <<endl;
	cout <<"int main(){" <<endl;
	cout <<	"int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};"<<endl;
	cout <<"int cipars, menesis=0;"<<endl;
	cout <<"ifstream in;"<<endl;
	cout <<"in.open(""diena.txt"",ios::app);"<<endl;
	cout <<"in>>cipars;"<<endl;
	cout <<"in.close();"<<endl;
	cout <<"while(cipars>a[menesis]){"<<endl;
		cout <<"cipars=cipars-a[menesis];"<<endl;
		cout <<"menesis=menesis+1;"<<endl;
	cout << "}"<<endl;
	cout <<"ofstream out;"<<endl;
	cout <<"out.open(""diena.out"",ios::out);"<<endl;
	cout <<"out<<cipars<<" "<<menesis+1;"<<endl;
	cout <<"out.close();"<<endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'a' || atbilde == 'A' || atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo a, d vai lielo A, D  atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
        nepareizi++;//pieskaita neigutos puntkus
    }
     cout << "Kapec svarigi ir zinat faila extension? (Divas atbildes) " << endl << endl;//9. jautajums un atbildes.
        
    cout << "A) Fails var neatbalstit tadu veidu un nestradat pareizi " << endl;
    cout << "B) Vieglak orienteties ja ikona ir pareiza" << endl;
    cout << "C) Smukak izstas" << endl;
    cout << "D) Visi ir pareizi" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'a' || atbilde == 'A' || atbilde == 'b' || atbilde == 'B')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;
        rezultats++;//pieksaita iegutuos punktus
        }
        else{   
        cout << "Tava atbilde bija nepareiza!" << endl;
        nepareizi++;//pieskaita neigutos puntkus
    }
       cout << "Kuri 2 kodi ir pareizi? " << endl << endl;//10. jautajums un atbildes.
        
     cout << "A) #include <iostream>" << endl;
	cout <<"#include <fstream>" << endl;
	cout << "using namespace std" << endl;
	cout <<"int main(){" << endl;
	cout <<"int i, k;    char b='A';" << endl;
	cout <<"fstream datne;" << endl;
	cout <<"datne.open(""burti.txt"",ios::out);" << endl;
	cout <<"for(k=1; k<=25; k++){" << endl;
		cout <<"for(i=0; i>k; i++){" << endl;
		cout << "cout<<b;    datne.put(b);    //datne<<b;" << endl;
	cout <<	"}" << endl;
	cout << "cout<<""\n"";    datne<<""\n;""" << endl;
	cout << "cout <<b=b+1;" << endl;
	cout <<	"}" << endl;
	cout << "datne.close();" << endl;
	cout << "}" << endl;
	
    cout << "B) #include <iostream>" << endl;
	cout <<"#include <fstream>" << endl;
	cout << "using namespace std" << endl;
	cout <<"int main(){" << endl;
	cout <<"int i, k;    char b='A';" << endl;
	cout <<"fstream datne;" << endl;
	cout <<"datne.open(""burti.txt"",ios::out);" << endl;
	cout <<"for(k=1; k<=26; k++){" << endl;
		cout <<"for(i=0; i<k; i++){" << endl;
		cout << "cout<<b;    datne.put(b);    //datne<<b;" << endl;
	cout <<	"}" << endl;
	cout << "cout<<""\n"";    datne<<""\n;""" << endl;
	cout << "cout <<b=b+1;" << endl;
	cout <<	"}" << endl;
	cout << "datne.close();" << endl;
	cout << "}" << endl;
	
    cout << "C) #include <ctime>" << endl;
	cout <<"#include <fstream>" << endl;
	cout << "using namespace std" << endl;
	cout <<"int main(){" << endl;
	cout <<"int b, n;    char v='A';" << endl;
	cout <<"fstream datne;" << endl;
	cout <<"datne.open(""burti.txt"",ios::out);" << endl;
	cout <<"for(k=1; k<=26; k++){" << endl;
		cout <<"for(i=0; i<k; i++){" << endl;
		cout << "cout<<b;    datne.put(b);    //datne<<b;" << endl;
	cout <<	"}" << endl;
	cout << "cout<<""\n"";    datne<<""\n;""" << endl;
	cout << "cout <<b=b+1;" << endl;
	cout <<	"}" << endl;
	cout << "datne.close();" << endl;
	cout << "}" << endl;
	
    cout << "D) #include <iostream>" << endl;
	cout <<"#include <fstream>" << endl;
	cout << "using namespace std" << endl;
	cout <<"int main(){" << endl;
	cout <<"int m, l;    char b='A';" << endl;
	cout <<"fstream datne;" << endl;
	cout <<"datne.open(""burti.txt"",ios::app);" << endl;
	cout <<"for(l=1; l<=26; l++){" << endl;
		cout <<"for(m=0; m<l; m++){" << endl;
		cout << "cout<<b;    datne.put(b);    //datne<<b;" << endl;
	cout <<	"}" << endl;
	cout << "cout<<""\n"";    datne<<""\n;""" << endl;
	cout << "cout <<b=b+1;" << endl;
	cout <<	"}" << endl;
	cout << "datne.close();" << endl;
	cout << "}" << endl;
    
    cin >> atbilde;//Nolasa atbildi.
        if (atbilde == 'b' || atbilde == 'B' || atbilde == 'd' || atbilde == 'D')//Atbilzu varianti.
        {
        cout << "Tava atbilde bija pareiza!" << endl;//Ja uzraksta mazo b, d vai lielo B, D  atbilde bus pareiza
        rezultats++;//pieksaita iegutuos punktus
        }
        else{
        cout << "Tava atbilde bija nepareiza!" << endl;// Uzraksta ko citu atbilde nebus pareiza
		nepareizi++;//pieskaita neigutos puntkus
	}
	cout << endl;    
cout << "Tu ieguvi " << rezultats << " no " << 10 << " punktiem! " << endl;//Saskaita rezultatu un pasaka tava gala punktus

cout << endl;
cout << "Paldies, kad piedalijies mana spele!";//Speles nobeigums, nospiezhot jebkuru pogu pec shi, spele beidzas.

ofstream myfile;
  myfile.open ("Rezultats.txt");//Faila nosaukums uz kuru jasuta informacija
  myfile << "Pareizo atbilzu skaits - " << rezultats << endl;//Aizsuta informaciju .txt failam par pareizajam atbildem
  myfile << "Nepareizo atbilzu skaits - " << nepareizi;//Aizsuta informaciju .txt failam par nepareizajam atbildem
  myfile.close();//Aiztaisa failu ciet

    return 0;//Lai nekas nesaglabajas 

}

