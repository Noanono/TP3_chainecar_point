#include<iostream>

using namespace std;

#include"ChaineCar.h"


ChaineCar::ChaineCar(const char * str1)
{
	unsigned int i=0;
	len=0;
	while(str1[len]!='\0')
	{
		len++;
	}
	p_str=new char[len];
	for(i=0;i<len;i++)
	{
		p_str[i]=str1[i];
	}
}



void ChaineCar::Affiche(void) const
{
	for(unsigned int i=0;i<len;i++)
	{
		cout<<p_str[i];
	}
}

void ChaineCar::MintoMaj(void)
{
	for(unsigned int i=0;i<len;i++)
	{
		if(p_str[i]>='a' && p_str[i]<='z')
		{
		  p_str[i]=p_str[i]-32;//ou p_str[i]=p_str[i]+'A'-'a';
		}
	}
}


//M�thodes suppl�mentaires une fois que les lignes du main.cpp ont �t� d�comment�es.
ChaineCar::ChaineCar(const ChaineCar& str1)
{
	unsigned int i;
	len=str1.len;
	p_str=new char[str1.len];
	for(i=0;i<str1.len;i++)
	{
		p_str[i]=str1.p_str[i];
	}
}


ChaineCar ChaineCar::Ajoute(const ChaineCar &str1) const
{
  ChaineCar res;//D�clare une chaine dont le pointeur pointe par d�faut sur une zone de 1 caract�re
	unsigned int i,j;
	delete [] res.p_str;//Il faut lib�rer la zone point�e avant de d�placer le pointeur vers une nouvelle zone
	res.len=len+str1.len;
	res.p_str=new char[res.len]; 
	for(i=0;i<len;i++)
	{
		res.p_str[i]=p_str[i];
	}
	for(j=0;j<str1.len;j++)
	{
		res.p_str[i+j]=str1.p_str[j];
	}
	return res;
}


ChaineCar ChaineCar::Ajoute(const char* str) const
{
	ChaineCar res;
	unsigned int i,j,l;
	delete [] res.p_str;//M�me remarque que dans la m�thode ajoute pr�c�dente.
	for(l=0;str[l]!='\0';l++){}//Calcul de la longueur de la chaine str.
	res.len=len+l;
	res.p_str=new char[res.len];
	for(i=0;i<len;i++)
	{
		res.p_str[i]=p_str[i];
	}
	for(j=0;j<l;j++)
	{
		res.p_str[i+j]=str[j];
	}
	return res;
}


ChaineCar& ChaineCar::operator=(const ChaineCar& str)
{
	delete []p_str;//on supprime la zone allou�e pour l'objet recevant l'affectation
	unsigned int i;
	len=str.len;
	p_str=new char[str.len];//on cr�e une nouvelle zone de la longueur souhait�e
	for(i=0;i<str.len;i++)
	{
		p_str[i]=str.p_str[i];//on copie �l�ment par �l�ment
	}
	return *this;//on retourne l'objet lui m�me ainsi modifi�
}

ChaineCar ChaineCar::operator+(const ChaineCar& str) const
{
	return Ajoute(str);
}

void ChaineCar::Affiche(ostream& flux) const
{
	for(unsigned int i=0;i<len;i++)
	{
		flux<<p_str[i];
	}
}


ostream& operator<<(ostream& flux, const ChaineCar& str)
{
	str.Affiche(flux);
	return flux;
}
