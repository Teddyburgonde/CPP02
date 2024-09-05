**Revision**

**EX00**

Il y a 4 composants dans la forme canonique : 

- Le constructor par defaut :
Il permet de cree un objet sans fournir d'argument.
Il permet initialisation des variables.

- Constructeur par copie :
Il permet de copier un objet 
Il permet de faire une copie profonde (Les deux objets ne partagent pas le meme emplacement memoire).

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    // permet de copier l'objet copy dans l'objet courant ( objet qu'on vient de creer grace a la classe).
}

- Le destructeur :
Il permet de detruire l'objet.
Il libere les ressources allouées.


- La surcharge d'operateur 
Permet de copier les valeurs d'un objet existant vers un autre déja existant.

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    // si lobjet courant est different de objet passer en parametre il copie la valeur de l'objet other dans l'objet courant
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}


**EX02**

bool Fixed::operator>(const Fixed& fixed) const
{
    return (getRawBits() > fixed.getRawBits());
}

permet de comparer les objet , sans cela on ne peut pas comparer les objet




std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
Envoie dans le flux de sortit la reprensetation de fixed

🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱






**EX00**

**Les nombres en virgule fixe**

```c

Les nombres en virgule fixe en C++ représentent des nombres décimaux en réservant un certain nombre de bits pour la partie entière et d'autres pour la partie fractionnaire, offrant un contrôle précis et des calculs efficaces, souvent utilisés dans les systèmes embarqués.

```

**Forme canonique**

4 choses : 

```c
class Fixed {

  public:
  Fixed(); // Un constructeur par defaut
  ~Fixed(); // Un destructeur 
  Fixed(const Fixed& other); // Constructeur par copie 
  Fixed& operator=(const Fixed& other); // Operateur d'assignation

};
```

```c
- Un constructeur par defaut : Initialise un objet avec une valeur par défaut.
- Un constructeur par copie : Crée une copie d'un objet existant.
- Un operateur d'affectation (Surcharge d'opérateur) : Permet d'affecter un objet à un autre déjà existant.
- Un destructeur : Libère la mémoire ou d'autres ressources lorsque l'objet est détruit.

```

Exemple constructeur par copie

```c

Fixed a; // 'a' est un objet de type Fixed.
Fixed b(a); // 'b' est un objet de type Fixed, créé en copiant 'a' grâce au constructeur de copie.

```

```c

// Constructors 
Fixed::Fixed() : _value(0) 
{

}

// Constructor by copy
Fixed::Fixed(const Fixed& copy)
{

}

// Destuctor
Fixed::~Fixed() 
{
    
}

// Overloaded Operators
Fixed& Fixed::operator=(const Fixed& other)
{
    
}

//Getter
int Fixed::getRawBits(void) const
{
    
}

// Setter
void Fixed::setRawBits(int const raw)
{
    
}


```

**Exo2**

```c

Fixed& operator++(); //prefix increment operator
c'est comme un ++i;

Fixed operator++(int); //postfix increment operator
c'est comme un i++:

Fixed& operator--(); //prefix decrement operator
Fixed operator--(int); //postfix decrement operator
```


lundi :

-CPP02 ex00 ✅
-CPP02 ex01 ✅ 

mardi :

-CPP02 ex02 ✅

Mercredi 

-Correction CPP02 ❌
-CPP03 ex00 ❌
-CPP03 ex01 ❌

Jeudi
 
-CPP03 ex02 ❌
-Correction CPP03


✅ ❌
