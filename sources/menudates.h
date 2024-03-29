struct Date
{
	int j;
	int m;
	int a;
};

std::ostream& operator<<(std::ostream& os, const Date& d);
std::istream& operator>>(std::istream& os, Date& d);
Date operator+(Date const& d1, Date const& d2);

/*
* R : teste si une ann�e est bisextile
* E : un nombre
* S : un bool�en
*/
bool Bisextile(int a);

/*
* R : Converti une chaine de charact�re en une date
* E : une chaine de charact�res
* S : une date
*/
Date Convertir(const char[11]);

/*
* R : Rend une date valide si elle ne l'est pas
* E : une date
* S : une date
*/
Date Verif(Date);

/*
* R : Permet d'afficher le menu
* E : vide
* S : vide
*/
void Menu(void);