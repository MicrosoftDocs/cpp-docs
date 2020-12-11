---
description: "Learn more about: friend (C++)"
title: "friend (C++)"
ms.date: "07/15/2019"
f1_keywords: ["friend_cpp"]
helpviewer_keywords: ["member access, from friend functions", "friend classes [C++]", "friend keyword [C++]"]
ms.assetid: 8fe9ee55-d56f-40cd-9075-d9fb1375aff4
---
# friend (C++)

In some circumstances, it is more convenient to grant member-level access to functions that are not members of a class or to all members in a separate class. Only the class implementer can declare who its friends are. A function or class cannot declare itself as a friend of any class. In a class definition, use the **`friend`** keyword and the name of a non-member function or other class to grant it access to the private and protected members of your class. In a template definition, a type parameter can be declared as a friend.

## Syntax

```
class friend F
friend F;
```

## Friend declarations

If you declare a friend function that was not previously declared, that function is exported to the enclosing nonclass scope.

Functions declared in a friend declaration are treated as if they had been declared using the **`extern`** keyword. For more information,  see [extern](extern-cpp.md).

Although functions with global scope can be declared as friends prior to their prototypes, member functions cannot be declared as friends before the appearance of their complete class declaration. The following code shows why this fails:

```cpp
class ForwardDeclared;   // Class name is known.
class HasFriends
{
    friend int ForwardDeclared::IsAFriend();   // C2039 error expected
};
```

The preceding example enters the class name `ForwardDeclared` into scope, but the complete declaration — specifically, the portion that declares the function `IsAFriend` — is not known. Therefore, the **`friend`** declaration in class `HasFriends` generates an error.

Starting in C++11, there are two forms of friend declarations for a class:

```cpp
friend class F;
friend F;
```

The first form introduces a new class F if no existing class by that name was found in the innermost namespace. **C++11**: The second form does not introduce a new class; it can be used when the class has already been declared, and it must be used when declaring a template type parameter or a typedef as a friend.

Use `class friend F` when the referenced type has not yet been declared:

```cpp
namespace NS
{
    class M
    {
        class friend F;  // Introduces F but doesn't define it
    };
}
```

```cpp
namespace NS
{
    class M
    {
        friend F; // error C2433: 'NS::F': 'friend' not permitted on data declarations
    };
}
```

In the following example, `friend F` refers to the `F` class that is declared outside the scope of NS.

```cpp
class F {};
namespace NS
{
    class M
    {
        friend F;  // OK
    };
}
```

Use `friend F` to declare a template parameter as a friend:

```cpp
template <typename T>
class my_class
{
    friend T;
    //...
};
```

Use `friend F` to declare a typedef as friend:

```cpp
class Foo {};
typedef Foo F;

class G
{
    friend F; // OK
    friend class F // Error C2371 -- redefinition
};
```

To declare two classes that are friends of one another, the entire second class must be specified as a friend of the first class. The reason for this restriction is that the compiler has enough information to declare individual friend functions only at the point where the second class is declared.

> [!NOTE]
> Although the entire second class must be a friend to the first class, you can select which functions in the first class will be friends of the second class.

## friend functions

A **`friend`** function is a function that is not a member of a class but has access to the class's private and protected members. Friend functions are not considered class members; they are normal external functions that are given special access privileges. Friends are not in the class's scope, and they are not called using the member-selection operators (**.** and -**>**) unless they are members of another class. A **`friend`** function is declared by the class that is granting access. The **`friend`** declaration can be placed anywhere in the class declaration. It is not affected by the access control keywords.

The following example shows a `Point` class and a friend function, `ChangePrivate`. The **`friend`** function has access to the private data member of the `Point` object it receives as a parameter.

```cpp
// friend_functions.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class Point
{
    friend void ChangePrivate( Point & );
public:
    Point( void ) : m_i(0) {}
    void PrintPrivate( void ){cout << m_i << endl; }

private:
    int m_i;
};

void ChangePrivate ( Point &i ) { i.m_i++; }

int main()
{
   Point sPoint;
   sPoint.PrintPrivate();
   ChangePrivate(sPoint);
   sPoint.PrintPrivate();
// Output: 0
           1
}
```

## Class members as friends

Class member functions can be declared as friends in other classes. Consider the following example:

```cpp
// classes_as_friends1.cpp
// compile with: /c
class B;

class A {
public:
   int Func1( B& b );

private:
   int Func2( B& b );
};

class B {
private:
   int _b;

   // A::Func1 is a friend function to class B
   // so A::Func1 has access to all members of B
   friend int A::Func1( B& );
};

int A::Func1( B& b ) { return b._b; }   // OK
int A::Func2( B& b ) { return b._b; }   // C2248
```

In the preceding example, only the function `A::Func1( B& )` is granted friend access to class `B`. Therefore, access to the private member `_b` is correct in `Func1` of class `A` but not in `Func2`.

A **`friend`** class is a class all of whose member functions are friend functions of a class, that is, whose member functions have access to the other class's private and protected members. Suppose the **`friend`** declaration in class `B` had been:

```cpp
friend class A;
```

In that case, all member functions in class `A` would have been granted friend access to class `B`. The following code is an example of a friend class:

```cpp
// classes_as_friends2.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class YourClass {
friend class YourOtherClass;  // Declare a friend class
public:
   YourClass() : topSecret(0){}
   void printMember() { cout << topSecret << endl; }
private:
   int topSecret;
};

class YourOtherClass {
public:
   void change( YourClass& yc, int x ){yc.topSecret = x;}
};

int main() {
   YourClass yc1;
   YourOtherClass yoc1;
   yc1.printMember();
   yoc1.change( yc1, 5 );
   yc1.printMember();
}
```

Friendship is not mutual unless explicitly specified as such. In the above example, member functions of `YourClass` cannot access the private members of `YourOtherClass`.

A managed type (in C++/CLI) cannot have any friend functions, friend classes, or friend interfaces.

Friendship is not inherited, meaning that classes derived from `YourOtherClass` cannot access `YourClass`'s private members. Friendship is not transitive, so classes that are friends of `YourOtherClass` cannot access `YourClass`'s private members.

The following figure shows four class declarations: `Base`, `Derived`, `aFriend`, and `anotherFriend`. Only class `aFriend` has direct access to the private members of `Base` (and to any members `Base` might have inherited).

![Implications of friend relationship](../cpp/media/vc38v41.gif "Implications of friend relationship") <br/>
Implications of friend relationship

## Inline friend definitions

Friend functions can be defined (given a function body) inside class declarations. These functions are inline functions, and like member inline functions they behave as though they were defined immediately after all class members have been seen but before the class scope is closed (the end of the class declaration). Friend functions that are defined inside class declarations are in the scope of the enclosing class.

## See also

[Keywords](../cpp/keywords-cpp.md)
