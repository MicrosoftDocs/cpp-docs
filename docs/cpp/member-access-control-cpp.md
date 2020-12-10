---
description: "Learn more about: Member Access Control (C++)"
title: "Member Access Control (C++)"
ms.date: "11/19/2018"
helpviewer_keywords: ["access control [C++]", "member access [C++]", "member-access control [C++]"]
ms.assetid: 2d596bca-56ad-4277-94e1-ce3db45fa14a
---
# Member Access Control (C++)

Access controls enable you to separate the [public](../cpp/public-cpp.md) interface of a class from the [private](../cpp/private-cpp.md) implementation details and the [protected](../cpp/protected-cpp.md) members that are only for use by derived classes. The access specifier applies to all members declared after it until the next access specifier is encountered.

```cpp
class Point
{
public:
    Point( int, int ) // Declare public constructor.;
    Point();// Declare public default constructor.
    int &x( int ); // Declare public accessor.
    int &y( int ); // Declare public accessor.

private:                 // Declare private state variables.
    int _x;
    int _y;

protected:      // Declare protected function for derived classes only.
    Point ToWindowCoords();
};
```

The default access is **`private`** in a class, and **`public`** in a struct or union. Access specifiers in a class can be used any number of times in any order. The allocation of storage for objects of class types is implementation dependent, but members are guaranteed to be assigned successively higher memory addresses between access specifiers.

## Member-Access Control

|Type of Access|Meaning|
|--------------------|-------------|
|[private](../cpp/private-cpp.md)|Class members declared as **`private`** can be used only by member functions and friends (classes or functions) of the class.|
|[protected](../cpp/protected-cpp.md)|Class members declared as **`protected`** can be used by member functions and friends (classes or functions) of the class. Additionally, they can be used by classes derived from the class.|
|[public](../cpp/public-cpp.md)|Class members declared as **`public`** can be used by any function.|

Access control helps prevent you from using objects in ways they were not intended to be used. This protection is lost when explicit type conversions (casts) are performed.

> [!NOTE]
> Access control is equally applicable to all names: member functions, member data, nested classes, and enumerators.

## Access Control in Derived Classes

Two factors control which members of a base class are accessible in a derived class; these same factors control access to the inherited members in the derived class:

- Whether the derived class declares the base class using the **`public`** access specifier.

- What the access to the member is in the base class.

The following table shows the interaction between these factors and how to determine base-class member access.

### Member Access in Base Class

|private|protected|Public|
|-------------|---------------|------------|
|Always inaccessible regardless of derivation access|Private in derived class if you use private derivation|Private in derived class if you use private derivation|
||Protected in derived class if you use protected derivation|Protected in derived class if you use protected derivation|
||Protected in derived class if you use public derivation|Public in derived class if you use public derivation|

The following example illustrates this:

```cpp
// access_specifiers_for_base_classes.cpp
class BaseClass
{
public:
    int PublicFunc(); // Declare a public member.
protected:
    int ProtectedFunc(); // Declare a protected member.
private:
    int PrivateFunc(); // Declare a private member.
};

// Declare two classes derived from BaseClass.
class DerivedClass1 : public BaseClass
{
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
        PrivateFunc(); // function is inaccessible
    }
};

class DerivedClass2 : private BaseClass
{
    void foo()
    {
        PublicFunc();
        ProtectedFunc();
        PrivateFunc(); // function is inaccessible
    }
};

int main()
{
    DerivedClass1 derived_class1;
    DerivedClass2 derived_class2;
    derived_class1.PublicFunc();
    derived_class2.PublicFunc(); // function is inaccessible
}
```

In `DerivedClass1`, the member function `PublicFunc` is a public member and `ProtectedFunc` is a protected member because `BaseClass` is a public base class. `PrivateFunc` is private to `BaseClass`, and it is inaccessible to any derived classes.

In `DerivedClass2`, the functions `PublicFunc` and `ProtectedFunc` are considered private members because `BaseClass` is a private base class. Again, `PrivateFunc` is private to `BaseClass`, and it is inaccessible to any derived classes.

You can declare a derived class without a base-class access specifier. In such a case, the derivation is considered private if the derived class declaration uses the **`class`** keyword. The derivation is considered public if the derived class declaration uses the **`struct`** keyword. For example, the following code:

```cpp
class Derived : Base
...
```

is equivalent to:

```cpp
class Derived : private Base
...
```

Similarly, the following code:

```cpp
struct Derived : Base
...
```

is equivalent to:

```cpp
struct Derived : public Base
...
```

Note that members declared as having private access are not accessible to functions or derived classes unless those functions or classes are declared using the **`friend`** declaration in the base class.

A **`union`** type cannot have a base class.

> [!NOTE]
> When specifying a private base class, it is advisable to explicitly use the **`private`** keyword so users of the derived class understand the member access.

## Access control and static members

When you specify a base class as **`private`**, it affects only nonstatic members. Public static members are still accessible in the derived classes. However, accessing members of the base class using pointers, references, or objects can require a conversion, at which time access control is again applied. Consider the following example:

```cpp
// access_control.cpp
class Base
{
public:
    int Print();             // Nonstatic member.
    static int CountOf();    // Static member.
};

// Derived1 declares Base as a private base class.
class Derived1 : private Base
{
};
// Derived2 declares Derived1 as a public base class.
class Derived2 : public Derived1
{
    int ShowCount();    // Nonstatic member.
};
// Define ShowCount function for Derived2.
int Derived2::ShowCount()
{
   // Call static member function CountOf explicitly.
    int cCount = Base::CountOf();     // OK.

   // Call static member function CountOf using pointer.
    cCount = this->CountOf();  // C2247. Conversion of
                               //  Derived2 * to Base * not
                               //  permitted.
    return cCount;
}
```

In the preceding code, access control prohibits conversion from a pointer to `Derived2` to a pointer to `Base`. The **`this`** pointer is implicitly of type `Derived2 *`. To select the `CountOf` function, **`this`** must be converted to type `Base *`. Such a conversion is not permitted because `Base` is a private indirect base class to `Derived2`. Conversion to a private base class type is acceptable only for pointers to immediate derived classes. Therefore, pointers of type `Derived1 *` can be converted to type `Base *`.

Note that calling the `CountOf` function explicitly, without using a pointer, reference, or object to select it, implies no conversion. Therefore, the call is allowed.

Members and friends of a derived class, `T`, can convert a pointer to `T` to a pointer to a private direct base class of `T`.

## Access to virtual functions

The access control applied to [virtual](../cpp/virtual-cpp.md) functions is determined by the type used to make the function call. Overriding declarations of the function do not affect the access control for a given type. For example:

```cpp
// access_to_virtual_functions.cpp
class VFuncBase
{
public:
    virtual int GetState() { return _state; }
protected:
    int _state;
};

class VFuncDerived : public VFuncBase
{
private:
    int GetState() { return _state; }
};

int main()
{
   VFuncDerived vfd;             // Object of derived type.
   VFuncBase *pvfb = &vfd;       // Pointer to base type.
   VFuncDerived *pvfd = &vfd;    // Pointer to derived type.
   int State;

   State = pvfb->GetState();     // GetState is public.
   State = pvfd->GetState();     // C2248 error expected; GetState is private;
}
```

In the preceding example, calling the virtual function `GetState` using a pointer to type `VFuncBase` calls `VFuncDerived::GetState`, and `GetState` is treated as public. However, calling `GetState` using a pointer to type `VFuncDerived` is an access-control violation because `GetState` is declared private in class `VFuncDerived`.

> [!CAUTION]
> The virtual function `GetState` can be called using a pointer to the base class `VFuncBase`. This does not mean that the function called is the base-class version of that function.

## Access control with multiple inheritance

In multiple-inheritance lattices involving virtual base classes, a given name can be reached through more than one path. Because different access control can be applied along these different paths, the compiler chooses the path that gives the most access. See the following figure.

![Access along paths of an inheritance graph](../cpp/media/vc38v91.gif "Access along paths of an inheritance graph") <br/>
Access along paths of an inheritance graph

In the figure, a name declared in class `VBase` is always reached through class `RightPath`. The right path is more accessible because `RightPath` declares `VBase` as a public base class, whereas `LeftPath` declares `VBase` as private.

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)
