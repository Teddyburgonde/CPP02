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
lundi :

-CPP02 ex00 ✅
-CPP02 ex01 ❌

mardi :

-CPP02 ex02 ❌

Mercredi 

-Correction CPP02 ❌
-CPP03 ex00 ❌
-CPP03 ex01 ❌

Jeudi
 
-CPP03 ex02 ❌
-Correction CPP03



✅ ❌
