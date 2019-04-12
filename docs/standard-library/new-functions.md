---
title: "&lt;new&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["new/std::get_new_handler", "new/std::nothrow", "new/std::set_new_handler"]
ms.assetid: e250f06a-b025-4509-ae7a-5356d56aad7d
---
# &lt;new&gt; functions

|||
|-|-|
|[get_new_handler](#get_new_handler)|[launder](#launder)|
|[nothrow](#nothrow)|[set_new_handler](#set_new_handler)|

## <a name="get_new_handler"></a> get_new_handler

```cpp
new_handler get_new_handler() noexcept;
```

## <a name="launder"></a>

```cpp
template <class T>
    constexpr T* launder(T* ptr) noexcept;
```

### Parameters

*ptr*<br/>
The address of a byte in memory which holds an object whose type is similar to *T*.

### Return Value

A value of type *T\** that points to X.

### Remarks

Also referred to as a pointer optimization barrier.

An invocation of this function may be used in a core constant expression whenever the value of its argument may be used in a core constant expression. A byte of storage is reachable through a pointer value that points to an object Y if it is within the storage occupied by Y, an object that's pointer-interconvertible with Y, or the immediately-enclosing array object if Y is an array element. The program is ill-formed if T is a function type or cv void. If a new object is created in storage occupied by an existing object of the same type, a pointer to the original object can be used to refer to the new object unless the type contains const or reference members; in the latter cases, this function can be used to obtain a usable pointer to the new object.

### Example

```cpp
struct X { const int n; };

X *p = new X{3};
const int a = p->n;
new (p) X{5}; // p does not point to new object because X::n is const
const int b = p->n; // undefined behavior
const int c = std::launder(p)->n; // OK
```

## <a name="nothrow"></a> nothrow

Provides an object to be used as an argument for the **nothrow** versions of **new** and **delete**.

```cpp
extern const std::nothrow_t nothrow;
```

### Remarks

The object is used as a function argument to match the parameter type [std::nothrow_t](../standard-library/nothrow-t-structure.md).

### Example

See [operator new](../standard-library/new-operators.md#op_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) for examples of how `std::nothrow_t` is used as a function parameter.

## <a name="set_new_handler"></a> set_new_handler

Installs a user function that is to be called when **operator new** fails in its attempt to allocate memory.

```cpp
new_handler set_new_handler(new_handler Pnew) throw();
```

### Parameters

*Pnew*<br/>
The `new_handler` to be installed.

### Return Value

0 on the first call and the previous `new_handler` on subsequent calls.

### Remarks

The function stores *Pnew* in a static [new handler](../standard-library/new-typedefs.md#new_handler) pointer that it maintains, then returns the value previously stored in the pointer. The new handler is used by [operator new](../standard-library/new-operators.md#op_new)(**size_t**).

### Example

```cpp
// new_set_new_handler.cpp
// compile with: /EHsc
#include<new>
#include<iostream>

using namespace std;
void __cdecl newhandler( )
{
   cout << "The new_handler is called:" << endl;
   throw bad_alloc( );
   return;
}

int main( )
{
   set_new_handler (newhandler);
   try
   {
      while ( 1 )
      {
         new int[5000000];
         cout << "Allocating 5000000 ints." << endl;
      }
   }
   catch ( exception e )
   {
      cout << e.what( ) << endl;
   }
}
```

```Output
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
The new_handler is called:
bad allocation
```

## See also

[\<new>](../standard-library/new.md)<br/>
