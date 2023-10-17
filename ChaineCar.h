class ChaineCar{
private:
	char * p_str;
	unsigned int len;
public:
	//Constructeur avec parmaètre par défaut.
	ChaineCar(const char * =" ");
	unsigned int Getlen(void) const {return len;}//inline
	char* Getstr(void) const {return p_str;}//inline
	void Affiche(void) const;
	void MintoMaj(void);
	~ChaineCar(void){ delete[] p_str;}//inline
	//Constructeur de copie pour apprendre à copier une ChaineCar dans une autre (à l'initialisation).
	ChaineCar(const ChaineCar&);
	void Affiche(ostream& flux) const;
	//Crée une nouvelle ChaineCar à partir d'une ChaineCar existante
	ChaineCar Ajoute(const ChaineCar&) const;
	//Crée une nouvelle ChaineCar à partir d'une chaine de caractère existante
	ChaineCar Ajoute(const char*) const;
	//surcharge de l'opérator+ portant sur deux ChaineCar
	ChaineCar operator+(const ChaineCar&) const;
	//Surcharge de l'operator= pour apprendre à copier une ChaineCar dans une autre (à l'affectation)
	ChaineCar& operator=(const ChaineCar&);
};

//Surcharge de l'operator << pour afficher une ChaineCar comme n'importe quelle autre variable
ostream& operator<<(ostream&, const ChaineCar&);
