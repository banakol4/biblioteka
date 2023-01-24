#include <exception>
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <WinBase.h>
#include <fstream>
#include <vector>

using namespace std;

class Czlowiek;
class Bibliotekarz;
class Czynnosci;
class Ksiazka;
class Baza_Danych_Katalog_;
class Czynności_związane_z_Uzytkownikiem;
class Czynności_związane_z_książką;
class Uzytkownik;
class Egzemplarz;
class Karta_biblioteczna;
class Czynności;

class Ksiazka
{
public:
	string ID;
	string tytul;
	string autor;
	bool wypozyczona;

	Bibliotekarz* unnamed_Bibliotekarz;
	Karta_biblioteczna* _unnamed_Karta_biblioteczna_5;
	Baza_Danych_Katalog_* unnamed_Baza_Danych_Katalog_;
	Egzemplarz* _unnamed_Egzemplarz_6;
	Czynności* unnamed_Czynności;

	bool czyWypozyczono();
};



class Baza_Danych_Katalog_
{
public: Bibliotekarz* unnamed_Bibliotekarz;
public: Czynnosci* unnamed_Czynnosci;
public: Ksiazka* unnamed_Ksiazka;

public: void sprawdzDane();

public: string zwrocDane();

public: string zaktualizujDane();
};

void Baza_Danych_Katalog_::sprawdzDane() {
	throw "Not yet implemented";
}

string Baza_Danych_Katalog_::zwrocDane() {
	throw "Not yet implemented";
}

string Baza_Danych_Katalog_::zaktualizujDane() {
	throw "Not yet implemented";
}

class Czlowiek
{
private: string _imię;
private: string _nazwisko;
};
class Bibliotekarz : public Czlowiek
{
private: int _loginPracowniczy;
private: string _hasło;
public: Ksiazka* unnamed_Ksiazka;
public: Baza_Danych_Katalog_* unnamed_Baza_Danych_Katalog_;
public: Czynności_związane_z_Uzytkownikiem* unnamed_Czynności_związane_z_Uzytkownikiem;
public: Czynności_związane_z_książką* unnamed_Czynności_związane_z_książką;

public: void sprawdźStanBiblioteki();
};

class Czynności_związane_z_Uzytkownikiem
{
public: Bibliotekarz* unnamed_Bibliotekarz;

public: int odblokujUzytkownika();

public: int zablokujUzytkownika();
};

class Egzemplarz
{
public:
	int liczbaEgzemplarzy;
	//public: Ksiazka* unnamed_Ksiazka_4;
};


class Karta_biblioteczna
{
private: int _terminWażności;
private: int _ilośćWypożyczonychKsiążek;
public: Uzytkownik* _unnamed_Uzytkownik_3;
	  //public: Ksiazka* _:: : 5; max ilosc ksiazek = 5 
};



class Czynnosci
{
public: Uzytkownik* unnamed_Uzytkownik;
public: Baza_Danych_Katalog_* unnamed_Baza_Danych_Katalog_;

public: void wypozycz();

public: void oddaj();

public: int przedluzDate();

public: void setUnnamed_Uzytkownik_(Uzytkownik* aUnnamed_Uzytkownik_);

public: Uzytkownik* getUnnamed_Uzytkownik_();

public: void setUnnamed_Baza_Danych_Katalog__(Baza_Danych_Katalog_* aUnnamed_Baza_Danych_Katalog__);

public: Baza_Danych_Katalog_* getUnnamed_Baza_Danych_Katalog__();
};

class Czynności_związane_z_książką
{
public: Bibliotekarz* unnamed_Bibliotekarz;

public: int dodajKsiazke();

public: int usunKsiazke();
};

class Uzytkownik : public Czlowiek
{
private: int _login;
private: string _hasło;
private: bool _czyZablokowany;
public: Czynności* unnamed_Czynności;
public: Karta_biblioteczna* _unnamed_Karta_biblioteczna_9;
public: Czynnosci* unnamed_Czynnosci;

public: void zaloguj();

	  string zarejestrujSie(string username, string password);
	  void sprawdzNowosci();
	  void sprawdzDostepnoscKsiazki();
};


void Czynnosci::wypozycz() {
	throw "Not yet implemented";
}

void Czynnosci::oddaj() {
	throw "Not yet implemented";
}

int Czynnosci::przedluzDate() {
	throw "Not yet implemented";
}

int Czynności_związane_z_książką::dodajKsiazke()
{
	ofstream Katalog("katalog.txt");

	Ksiazka k1;
	Egzemplarz e1;
	//string lektura;
	vector<string> tabela = { "ID		", "Tytul		", "Autor		", "L. egzemplarzy		" };

	//char idKsiazki = k1.ID;

	cout << "Podaj (trzycyfrowe) ID nowej ksiazki: ";
	getline(cin, k1.ID);
	cin.ignore();
	cout << "Podaj tytul ksiazki, ktora chcesz dodac do katalogu biblioteki: ";
	getline(cin, k1.tytul);
	cin.ignore();
	cout << "Podaj autora nowej ksiazki: ";
	getline(cin, k1.autor);
	cin.ignore();

	//cout << "Podaj liczbe egzemplarzy nowowprowadzonej ksiazki: ";
	//getline(cin, e1.tabela[3]);

	Katalog << (tabela[0] = k1.ID, tabela[1] = k1.tytul, tabela[2] = k1.autor) << endl;

 	Katalog.close();
	return 0;
}

int Czynności_związane_z_książką::usunKsiazke() {
	throw "Not yet implemented";
}


int Czynności_związane_z_Uzytkownikiem::odblokujUzytkownika() {
	throw "Not yet implemented";
}

int Czynności_związane_z_Uzytkownikiem::zablokujUzytkownika() {
	throw "Not yet implemented";
}



bool Ksiazka::czyWypozyczono() {
	throw "Not yet implemented";
}

void Uzytkownik::sprawdzDostepnoscKsiazki() {
	cout << "Podaj nazwe ksiazki jaka chcesz wyszukac: ";
	string lektura;
	getline(cin, lektura);


};


string Uzytkownik::zarejestrujSie(string username, string password)
{
	cout << "Nowe konto zostało utworzone dla " << username << " z hasłem " << password << std::endl;
	return 0;
}

void Uzytkownik::zaloguj()
{
	string username, password;

	cout << "Podaj nazwę użytkownika: ";
	cin >> username;

	cout << "Podaj hasło: ";
	cin >> password;

	if (username == "admin" && password == "admin")
		cout << "Zalogowano pomyslnie!" << endl;
	else
	{
		cout << "Nie zalogowano!" << endl;
		zarejestrujSie(username, password);
	}
}

void Uzytkownik::sprawdzNowosci() {
	SYSTEMTIME st;
	GetSystemTime(&st);
	cout << "Dzisiejsza data: " << st.wYear << "." << st.wMonth << "." << st.wDay << endl;
	cout << "Dzisiaj mamy " << st.wDayOfWeek << " dzien tygodnia! To idealny dzien by siegnac po nowa ksiazke! " << endl << endl;
	cout << "NOWOSCI W TYM TYGODNIU: " << endl;
	cout << "Nowa ksiazka w naszej bibliotece: 'Analiza Matematyczna Dla Inzyniera ' juz dostepna! " << endl;
	cout << "Ksiazki wypozyczone do tej pory w tym miesiacu: 653" << endl << endl;

}



int main()
{
	int wybor;
	cout << "WITAJ W BIBLIOTECE!" << endl;
	Uzytkownik u;


	for (;;)
	{
		cout << "DOSTEPNE OPCJE DLA UZYTKOWNIKA:" << endl;
		cout << "________________________________" << endl;
		cout << "1. PRZEGLADAJ NOWOSCI" << endl;
		cout << "2. SPRAWDZ DOSTEPNOSC WYBRANEJ KSIAZKI I/LUB WYPOZYCZ KSIAZKE " << endl;
		cout << "3. PRZEDLUZ DATE WYPOZYCZENIA KSIAZKI " << endl;
		cout << "4. WEJDZ DO PANELU UZYTKOWNIKA" << endl;
		cout << "5. ODDAJ KSIAZKE" << endl;
		cout << "6. SPRAWDZ STAN KONTA" << endl;

		cout << "________________________________" << endl;
		cout << "DOSTEPNE OPCJE DLA BIBLIOTEKARZA:" << endl;
		cout << "7. ODBLOKUJ UZYTKOWNIKA" << endl;
		cout << "8. ZABLOKUJ UZYTKOWNIKA" << endl;
		cout << "9.DODAJ NOWA KSIAZKE " << endl;

		cout << "TWOJ WYBOR TO:";
		cin >> wybor;
		cout << endl << endl << endl << endl << endl;

		switch (wybor)
		{
		case 1:
		{

			cout << "WYBRANO OPCJE NR 1" << endl;
			u.sprawdzNowosci();
			break;
		}
		case 2:
		{
			//sprawdzDostepnoscKsiazki();
			cout << "WYBRANO OPCJE NR 2" << endl << endl;
			//to nizej do funkcji dac

		}
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Czynności_związane_z_książką c;
			c.dodajKsiazke();
			//default: cout << "Wybrano zla opcje!" << endl;
			break;
		}

	}

	return 0;
}