class Menu
{
    int fin;
public:
    virtual void AfficherMenu(void) const;
    virtual int DemanderChoix(void) const ;
    virtual int TraiterChoix(int choix) const;
    virtual int TraiterQuitter(void) const;
    virtual int TraiterAide(void) const;
    virtual void Executer(void);
};

class MenuEssai : public Menu
{
public:
    virtual void AfficherMenu(void) const;
    virtual int TraiterChoix(int choix) const;
    virtual int TraiterEssai(void) const;

};