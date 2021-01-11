---
description: "Learn more about: new Operator (C++)"
title: "new Operator (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["new keyword [C++]"]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
---
# new Operator (C++)

Allocates memory for an object or array of objects of *type-name* from the free store and returns a suitably typed, nonzero pointer to the object.

> [!NOTE]
> Microsoft C++ Component Extensions provides support for the **`new`** keyword to add vtable slot entries. For more information, see [new (new slot in vtable)](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

## Syntax

```
[::] new [placement] new-type-name [new-initializer]
[::] new [placement] ( type-name ) [new-initializer]
```

## Remarks

If unsuccessful, **`new`** returns zero or throws an exception; see [The new and delete Operators](../cpp/new-and-delete-operators.md) for more information. You can change this default behavior by writing a custom exception-handling routine and calling the [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) run-time library function with your function name as its argument.

For information on how to create an object on the managed heap, see [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md).

When **`new`** is used to allocate memory for a C++ class object, the object's constructor is called after the memory is allocated.

Use the [delete](../cpp/delete-operator-cpp.md) operator to deallocate the memory allocated with the **`new`** operator.

The following example allocates and then frees a two-dimensional array of characters of size `dim` by 10. When allocating a multidimensional array, all dimensions except the first must be constant expressions that evaluate to positive values; the leftmost array dimension can be any expression that evaluates to a positive value. When allocating an array using the **`new`** operator, the first dimension can be zero — the **`new`** operator returns a unique pointer.

```cpp
char (*pchar)[10] = new char[dim][10];
delete [] pchar;
```

The *type-name* cannot contain **`const`**, **`volatile`**, class declarations, or enumeration declarations. Therefore, the following expression is illegal:

```cpp
volatile char *vch = new volatile char[20];
```

The **`new`** operator does not allocate reference types because they are not objects.

The **`new`** operator cannot be used to allocate a function, but it can be used to allocate pointers to functions. The following example allocates and then frees an array of seven pointers to functions that return integers.

```cpp
int (**p) () = new (int (*[7]) ());
delete *p;
```

If you use the operator **`new`** without any extra arguments, and compile with the [/GX](../build/reference/gx-enable-exception-handling.md), [/EHa](../build/reference/eh-exception-handling-model.md), or [/EHs](../build/reference/eh-exception-handling-model.md) option, the compiler will generate code to call operator **`delete`** if the constructor throws an exception.

The following list describes the grammar elements of **`new`**:

*placement*<br/>
Provides a way of passing additional arguments if you overload **`new`**.

*type-name*<br/>
Specifies type to be allocated; it can be either a built-in or user-defined type. If the type specification is complicated, it can be surrounded by parentheses to force the order of binding.

*initializer*<br/>
Provides a value for the initialized object. Initializers cannot be specified for arrays. The **`new`** operator will create arrays of objects only if the class has a default constructor.

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

If you use the placement new form of the **`new`** operator, the form with arguments in addition to the size of the allocation, the compiler does not support a placement form of the **`delete`** operator if the constructor throws an exception. For example:

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
      // memory will be leaked when the deallocation cannot occur.

      A* pa2 = new(__FILE__, __LINE__) A(20);
   } catch (...) {
   }
}

int main() {
   A a;
}
```

## Initializing object allocated with new

An optional *initializer* field is included in the grammar for the **`new`** operator. This allows new objects to be initialized with user-defined constructors. For more information about how initialization is done, see [Initializers](../cpp/initializers.md). The following example illustrates how to use an initialization expression with the **`new`** operator:

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
    double *HowMuch = new double ( 43.0 );
    // ...
}
```

In this example, the object `CheckingAcct` is allocated using the **`new`** operator, but no default initialization is specified. Therefore, the default constructor for the class, `Acct()`, is called. Then the object `SavingsAcct` is allocated the same way, except that it is explicitly initialized to 34.98. Because 34.98 is of type **`double`**, the constructor that takes an argument of that type is called to handle the initialization. Finally, the nonclass type `HowMuch` is initialized to 43.0.

If an object is of a class type and that class has constructors (as in the preceding example), the object can be initialized by the **`new`** operator only if one of these conditions is met:

- The arguments provided in the initializer agree with those of a constructor.

- The class has a default constructor (a constructor that can be called with no arguments).

No explicit per-element initialization can be done when allocating arrays using the **`new`** operator; only the default constructor, if present, is called. See [Default Arguments](../cpp/default-arguments.md) for more information.

If the memory allocation fails (**operator new** returns a value of 0), no initialization is performed. This protects against attempts to initialize data that does not exist.

As with function calls, the order in which initialized expressions are evaluated is not defined. Furthermore, you should not rely on these expressions being completely evaluated before the memory allocation is performed. If the memory allocation fails and the **`new`** operator returns zero, some expressions in the initializer may not be completely evaluated.

## Lifetime of objects allocated with new

Objects allocated with the **`new`** operator are not destroyed when the scope in which they are defined is exited. Because the **`new`** operator returns a pointer to the objects it allocates, the program must define a pointer with suitable scope to access those objects. For example:

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

## How new works

The *allocation-expression* — the expression containing the **`new`** operator — does three things:

- Locates and reserves storage for the object or objects to be allocated. When this stage is complete, the correct amount of storage is allocated, but it is not yet an object.

- Initializes the object(s). Once initialization is complete, enough information is present for the allocated storage to be an object.

- Returns a pointer to the object(s) of a pointer type derived from *new-type-name* or *type-name*. The program uses this pointer to access the newly allocated object.

The **`new`** operator invokes the function **operator new**. For arrays of any type, and for objects that are not of **`class`**, **`struct`**, or **`union`** types, a global function, **::operator new**, is called to allocate storage. Class-type objects can define their own **operator new** static member function on a per-class basis.

When the compiler encounters the **`new`** operator to allocate an object of type **type**, it issues a call to `type`**::operator new( sizeof(** `type` **) )** or, if no user-defined **operator new** is defined, **::operator new( sizeof(** `type` **) )**. Therefore, the **`new`** operator can allocate the correct amount of memory for the object.

> [!NOTE]
> The argument to **operator new** is of type `size_t`. This type is defined in \<direct.h>, \<malloc.h>, \<memory.h>, \<search.h>, \<stddef.h>, \<stdio.h>, \<stdlib.h>, \<string.h>, and \<time.h>.

An option in the grammar allows specification of *placement* (see the Grammar for [new Operator](../cpp/new-operator-cpp.md)). The *placement* parameter can be used only for user-defined implementations of **operator new**; it allows extra information to be passed to **operator new**. An expression with a *placement* field such as `T *TObject = new ( 0x0040 ) T;` is translated to `T *TObject = T::operator new( sizeof( T ), 0x0040 );` if class T has member operator new, otherwise to `T *TObject = ::operator new( sizeof( T ), 0x0040 );`.

The original intention of the *placement* field was to allow hardware-dependent objects to be allocated at user-specified addresses.

> [!NOTE]
> Although the preceding example shows only one argument in the *placement* field, there is no restriction on how many extra arguments can be passed to **operator new** this way.

Even when **operator new** has been defined for a class type, the global operator can be used by using the form of this example:

```cpp
T *TObject =::new TObject;
```

The scope-resolution operator (`::`) forces use of the global **`new`** operator.

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[new and delete operators](../cpp/new-and-delete-operators.md)
