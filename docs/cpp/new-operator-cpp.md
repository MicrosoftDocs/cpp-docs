---
description: "Learn more about the grammar and uses of the new operator in C++."
title: "new operator (C++)"
ms.date: 11/09/2021
helpviewer_keywords: ["new keyword [C++]"]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
---
# `new` operator (C++)

Attempts to allocate and initialize an object or array of objects of a specified or placeholder type, and returns a suitably typed, nonzero pointer to the object (or to the initial object of the array).

## Syntax

*`new-expression`*:\
&emsp; **`::`**<sub>opt</sub> **`new`** *`new-placement`*<sub>opt</sub> *`new-type-id`* *`new-initializer`*<sub>opt</sub>\
&emsp; **`::`**<sub>opt</sub> **`new`** *`new-placement`*<sub>opt</sub> **`(`** *`type-id`* **`)`** *`new-initializer`*<sub>opt</sub>

*`new-placement`*:\
&emsp; **`(`** *`expression-list`* **`)`**

*`new-type-id`*:\
&emsp; *`type-specifier-seq`* *`new-declarator`*<sub>opt</sub>

*`new-declarator`*:\
&emsp; *`ptr-operator`* *`new-declarator`*<sub>opt</sub>\
&emsp; *`noptr-new-declarator`*

*`noptr-new-declarator`*:\
&emsp; **`[`** *`expression`* **`]`** *`attribute-specifier-seq`*<sub>opt</sub>\
&emsp; *`noptr-new-declarator`* **`[`** *`constant-expression`* **`]`** *`attribute-specifier-seq`*<sub>opt</sub>

*`new-initializer`*:\
&emsp; **`(`** *`expression-list`*<sub>opt</sub> **`)`**\
&emsp; *`braced-init-list`*

## Remarks

If unsuccessful, **`new`** returns zero or throws an exception. For more information, see [The `new` and `delete` Operators](../cpp/new-and-delete-operators.md). You can change this default behavior by writing a custom exception-handling routine and calling the [`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md) run-time library function with your function name as its argument.

For information on how to create an object on the managed heap in C++/CLI and C++/CX, see [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md).

> [!NOTE]
> Microsoft C++ Component Extensions (C++/CX) provides support for the **`new`** keyword to add vtable slot entries. For more information, see [`new` (new slot in vtable)](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

When **`new`** is used to allocate memory for a C++ class object, the object's constructor is called after the memory is allocated.

Use the [`delete`](../cpp/delete-operator-cpp.md) operator to deallocate the memory allocated by the **`new`** operator. Use the **`delete[]`** operator to delete an array allocated by the **`new`** operator.

The following example allocates and then frees a two-dimensional array of characters of size `dim` by 10. When allocating a multidimensional array, all dimensions except the first must be constant expressions that evaluate to positive values. The leftmost array dimension can be any expression that evaluates to a positive value. When allocating an array using the **`new`** operator, the first dimension can be zero; the **`new`** operator returns a unique pointer.

```cpp
char (*pchar)[10] = new char[dim][10];
delete [] pchar;
```

The *`type-id`* can't contain **`const`**, **`volatile`**, class declarations, or enumeration declarations. The following expression is ill-formed:

```cpp
volatile char *vch = new volatile char[20];
```

The **`new`** operator doesn't allocate reference types because they're not objects.

The **`new`** operator can't be used to allocate a function, but it can be used to allocate pointers to functions. The following example allocates and then frees an array of seven pointers to functions that return integers.

```cpp
int (**p) () = new (int (*[7]) ());
delete p;
```

If you use the operator **`new`** without any extra arguments, and compile with the [`/GX`](../build/reference/gx-enable-exception-handling.md), [`/EHa`](../build/reference/eh-exception-handling-model.md), or [`/EHs`](../build/reference/eh-exception-handling-model.md) option, the compiler generates code to call operator **`delete`** if the constructor throws an exception.

The following list describes the grammar elements of **`new`**:

*`new-placement`*\
Provides a way of passing extra arguments if you overload **`new`**.

*`type-id`*\
Specifies the type to be allocated; it can be either a built-in or user-defined type. If the type specification is complicated, it can be surrounded by parentheses to force the order of binding. The type may be a placeholder (**`auto`**) whose type is determined by the compiler.

*`new-initializer`*\
Provides a value for the initialized object. Initializers can't be specified for arrays. The **`new`** operator will create arrays of objects only if the class has a default constructor.

*`noptr-new-declarator`*\
Specifies the bounds of an array. When allocating a multidimensional array, all dimensions except the first must be constant expressions that evaluate to positive values convertible to `std::size_t`. The leftmost array dimension can be any expression that evaluates to a positive value. The *`attribute-specifier-seq`* applies to the associated array type.

## Example: Allocate and free a character array

The following code example allocates a character array and an object of class `CName` and then frees them.

```cpp
// expre_new_Operator.cpp
// compile with: /EHsc
#include <string.h>

class CName {
public:
   enum {
      sizeOfBuffer = 256
   };

   char m_szFirst[sizeOfBuffer];
   char m_szLast[sizeOfBuffer];

public:
   void SetName(char* pszFirst, char* pszLast) {
     strcpy_s(m_szFirst, sizeOfBuffer, pszFirst);
     strcpy_s(m_szLast, sizeOfBuffer, pszLast);
   }

};

int main() {
   // Allocate memory for the array
   char* pCharArray = new char[CName::sizeOfBuffer];
   strcpy_s(pCharArray, CName::sizeOfBuffer, "Array of characters");

   // Deallocate memory for the array
   delete [] pCharArray;
   pCharArray = NULL;

   // Allocate memory for the object
   CName* pName = new CName;
   pName->SetName("Firstname", "Lastname");

   // Deallocate memory for the object
   delete pName;
   pName = NULL;
}
```

## Example: `new` operator

If you use the placement form of the **`new`** operator (the form with more arguments than the size), the compiler doesn't support a placement form of the **`delete`** operator if the constructor throws an exception. For example:

```cpp
// expre_new_Operator2.cpp
// C2660 expected
class A {
public:
   A(int) { throw "Fail!"; }
};
void F(void) {
   try {
      // heap memory pointed to by pa1 will be deallocated
      // by calling ::operator delete(void*).
      A* pa1 = new A(10);
   } catch (...) {
   }
   try {
      // This will call ::operator new(size_t, char*, int).
      // When A::A(int) does a throw, we should call
      // ::operator delete(void*, char*, int) to deallocate
      // the memory pointed to by pa2.  Since
      // ::operator delete(void*, char*, int) has not been implemented,
      // memory will be leaked when the deallocation can't occur.

      A* pa2 = new(__FILE__, __LINE__) A(20);
   } catch (...) {
   }
}

int main() {
   A a;
}
```

## Initializing objects allocated with `new`

An optional *`new-initializer`* field is included in the grammar for the **`new`** operator. This field allows new objects to be initialized with user-defined constructors. For more information about how initialization is done, see [Initializers](../cpp/initializers.md). The following example illustrates how to use an initialization expression with the **`new`** operator:

```cpp
// expre_Initializing_Objects_Allocated_with_new.cpp
class Acct
{
public:
    // Define default constructor and a constructor that accepts
    //  an initial balance.
    Acct() { balance = 0.0; }
    Acct( double init_balance ) { balance = init_balance; }
private:
    double balance;
};

int main()
{
    Acct *CheckingAcct = new Acct;
    Acct *SavingsAcct = new Acct ( 34.98 );
    double *HowMuch = new double { 43.0 };
    // ...
}
```

In this example, the object `CheckingAcct` is allocated using the **`new`** operator, but no default initialization is specified. So, the default constructor for the class, `Acct()`, is called. Then the object `SavingsAcct` is allocated the same way, except that it's explicitly initialized to 34.98. Because 34.98 is of type **`double`**, the constructor that takes an argument of that type is called to handle the initialization. Finally, the non-class type `HowMuch` is initialized to 43.0.

If an object is of a class type and that class has constructors (as in the preceding example), the object can be initialized by the **`new`** operator only if one of these conditions is met:

- The arguments provided in the initializer match the arguments of a constructor.

- The class has a default constructor (a constructor that can be called with no arguments).

Explicit per-element initialization can't be done when allocating arrays using the **`new`** operator; only the default constructor, if present, is called. For more information, see [Default arguments](../cpp/default-arguments.md).

If the memory allocation fails (**`operator new`** returns a value of 0), no initialization is done. This behavior protects against attempts to initialize data that doesn't exist.

As with function calls, the order in which initialized expressions are evaluated isn't defined. Furthermore, you shouldn't rely on these expressions being evaluated completely before the memory allocation takes place. If the memory allocation fails and the **`new`** operator returns zero, some expressions in the initializer may not be evaluated completely.

## Lifetime of objects allocated with `new`

Objects allocated with the **`new`** operator aren't destroyed when the scope in which they're defined is exited. Because the **`new`** operator returns a pointer to the objects it allocates, the program must define a pointer with suitable scope to access and delete those objects. For example:

```cpp
// expre_Lifetime_of_Objects_Allocated_with_new.cpp
// C2541 expected
int main()
{
    // Use new operator to allocate an array of 20 characters.
    char *AnArray = new char[20];

    for( int i = 0; i < 20; ++i )
    {
        // On the first iteration of the loop, allocate
        //  another array of 20 characters.
        if( i == 0 )
        {
            char *AnotherArray = new char[20];
        }
    }

    delete [] AnotherArray; // Error: pointer out of scope.
    delete [] AnArray;      // OK: pointer still in scope.
}
```

Once the pointer `AnotherArray` goes out of scope in the example, the object can no longer be deleted.

## How `new` works

The *`new-expression`* (the expression containing the **`new`** operator) does three things:

- Locates and reserves storage for the object or objects to be allocated. When this stage is complete, the correct amount of storage is allocated, but it's not yet an object.

- Initializes the object(s). Once initialization is complete, enough information is present for the allocated storage to be an object.

- Returns a pointer to the object(s) of a pointer type derived from *`new-type-id`* or *`type-id`*. The program uses this pointer to access the newly allocated object.

The **`new`** operator invokes the function **`operator new`**. For arrays of any type, and for objects that aren't **`class`**, **`struct`**, or **`union`** types, a global function, **`::operator new`**, is called to allocate storage. Class-type objects can define their own **`operator new`** static member function on a per-class basis.

When the compiler encounters the **`new`** operator to allocate an object of type `T`, it issues a call to `T::operator new( sizeof(T) )` or, if no user-defined **`operator new`** is defined, `::operator new( sizeof(T) )`. It's how the **`new`** operator can allocate the correct amount of memory for the object.

> [!NOTE]
> The argument to **`operator new`** is of type `std::size_t`. This type is defined in \<direct.h>, \<malloc.h>, \<memory.h>, \<search.h>, \<stddef.h>, \<stdio.h>, \<stdlib.h>, \<string.h>, and \<time.h>.

An option in the grammar allows specification of *`new-placement`* (see the Grammar for [`new` Operator](../cpp/new-operator-cpp.md)). The *`new-placement`* parameter can be used only for user-defined implementations of **`operator new`**; it allows extra information to be passed to **`operator new`**. An expression with a *`new-placement`* field such as `T *TObject = new ( 0x0040 ) T;` is translated to `T *TObject = T::operator new( sizeof( T ), 0x0040 );` if class T has member `operator new`, otherwise to `T *TObject = ::operator new( sizeof( T ), 0x0040 );`.

The original intention of the *`new-placement`* field was to allow hardware-dependent objects to be allocated at user-specified addresses.

> [!NOTE]
> Although the preceding example shows only one argument in the *`new-placement`* field, there's no restriction on how many extra arguments can be passed to **`operator new`** this way.

Even when **`operator new`** has been defined for a class type `T`, you can use the global operator **`new`** explicitly, as in this example:

```cpp
T *TObject = ::new TObject;
```

The scope-resolution operator (`::`) forces use of the global **`new`** operator.

## See also

[Expressions with unary operators](../cpp/expressions-with-unary-operators.md)\
[Keywords](../cpp/keywords-cpp.md)\
[`new` and `delete` operators](../cpp/new-and-delete-operators.md)
