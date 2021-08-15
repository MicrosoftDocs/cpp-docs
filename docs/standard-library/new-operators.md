---
description: "Learn more about: &lt;new&gt; operators and enums"
title: "&lt;new&gt; operators and enums"
ms.date: "11/04/2016"
f1_keywords: ["new/std::operator delete", "new/std::operator new"]
ms.assetid: d1af4b56-9a95-4c65-ab01-bf43e982c7bd
---
# &lt;new&gt; operators and enums

## <a name="op_align_val_t"></a> enum align_val_t

```cpp
enum class align_val_t : size_t {};
```

## <a name="op_delete"></a> operator delete

The function called by a delete expression to de-allocate storage for individual of objects.

```cpp
void operator delete(void* ptr) throw();
void operator delete(void *, void*) throw();
void operator delete(void* ptr, const std::nothrow_t&) throw();
```

### Parameters

*ptr*\
The pointer whose value is to be rendered invalid by the deletion.

### Remarks

The first function is called by a delete expression to render the value of *ptr* invalid. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *ptr* that is null or that was returned by an earlier call to [operator new](../standard-library/new-operators.md#op_new)(**size_t**).

The default behavior for a null value of *ptr* is to do nothing. Any other value of *ptr* must be a value returned earlier by a call as previously described. The default behavior for such a nonnull value of *ptr* is to reclaim storage allocated by the earlier call. It is unspecified under what conditions part or all of such reclaimed storage is allocated by a subsequent call to `operator new`(**size_t**), or to any of `calloc`( **size_t**), `malloc`( **size_t**), or `realloc`( **`void`**<strong>\*</strong>, **size_t**).

The second function is called by a placement delete expression corresponding to a new expression of the form **`new`**( **std::size_t**). It does nothing.

The third function is called by a placement delete expression corresponding to a new expression of the form **`new`**( **std::size_t**, **conststd::nothrow_t&**). The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of `ptr` that is null or that was returned by an earlier call to `operator new`( **size_t**). The default behavior is to evaluate **`delete`**(`ptr`).

### Example

See [operator new](../standard-library/new-operators.md#op_new) for an example that use **operator delete**.

## <a name="op_delete_arr"></a> operator delete[]

The function called by a delete expression to deallocate storage for an array of objects.

```cpp
void operator delete[](void* ptr) throw();
void operator delete[](void *, void*) throw();
void operator delete[](void* ptr, const std::nothrow_t&) throw();
```

### Parameters

*ptr*\
The pointer whose value is to be rendered invalid by the deletion.

### Remarks

The first function is called by an `delete[]` expression to render the value of *ptr* invalid. The function is replaceable because the program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *ptr* that is null or that was returned by an earlier call to [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr)(**size_t**). The default behavior for a null value of *ptr* is to do nothing. Any other value of *ptr* must be a value returned earlier by a call as previously described. The default behavior for such a non-null value of *ptr* is to reclaim storage allocated by the earlier call. It is unspecified under what conditions part or all of such reclaimed storage is allocated by a subsequent call to [operator new](../standard-library/new-operators.md#op_new)(**size_t**), or to any of `calloc`(**size_t**), `malloc`(**size_t**), or `realloc`( **`void`**<strong>\*</strong>, **size_t**).

The second function is called by a placement `delete[]` expression corresponding to a `new[]` expression of the form `new[]`(**std::size_t**). It does nothing.

The third function is called by a placement delete expression corresponding to a `new[]` expression of the form `new[]`( **std::size_t**, **const std::nothrow_t&**). The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *ptr* that is null or that was returned by an earlier call to operator `new[]`(**size_t**). The default behavior is to evaluate `delete[]`( `ptr`).

### Example

See [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) for examples of the use of `operator delete[]`.

## <a name="op_new"></a> operator new

The function called by a new-expression to allocate storage for individual objects.

```cpp
void* operator new(std::size_t count) throw(bad_alloc);
void* operator new(std::size_t count, const std::nothrow_t&) throw();
void* operator new(std::size_t count, void* ptr) throw();
```

### Parameters

*count*\
The number of bytes of storage to be allocated.

*ptr*\
The pointer to be returned.

### Return Value

A pointer to the lowest byte address of the newly-allocated storage. Or *ptr*.

### Remarks

The first function is called by a new expression to allocate `count` bytes of storage suitably aligned to represent any object of that size. The program can define an alternate function with this function signature that replaces the default version defined by the C++ Standard Library and so is replaceable.

The required behavior is to return a non-null pointer only if storage can be allocated as requested. Each such allocation yields a pointer to storage disjoint from any other allocated storage. The order and contiguity of storage allocated by successive calls is unspecified. The initial stored value is unspecified. The returned pointer points to the start (lowest byte address) of the allocated storage. If count is zero, the value returned does not compare equal to any other value returned by the function.

The default behavior is to execute a loop. Within the loop, the function first attempts to allocate the requested storage. Whether the attempt involves a call to `malloc`( **size_t**) is unspecified. If the attempt is successful, the function returns a pointer to the allocated storage. Otherwise, the function calls the designated [new handler](../standard-library/new-typedefs.md#new_handler). If the called function returns, the loop repeats. The loop terminates when an attempt to allocate the requested storage is successful or when a called function does not return.

The required behavior of a new handler is to perform one of the following operations:

- Make more storage available for allocation and then return.

- Call either `abort` or `exit`.

- Throw an object of type `bad_alloc`.

The default behavior of a [new handler](../standard-library/new-typedefs.md#new_handler) is to throw an object of type `bad_alloc`. A null pointer designates the default new handler.

The order and contiguity of storage allocated by successive calls to `operator new`(**size_t**) is unspecified, as are the initial values stored there.

The second function is called by a placement new expression to allocate `count` bytes of storage suitably aligned to represent any object of that size. The program can define an alternate function with this function signature that replaces the default version defined by the C++ Standard Library and so is replaceable.

The default behavior is to return `operator new`(`count`) if that function succeeds. Otherwise, it returns a null pointer.

The third function is called by a placement **`new`** expression, of the form `new ( args ) T`. Here, *args* consists of a single object pointer. This can be useful for constructing an object at a known address. The function returns *ptr*.

To free storage allocated by **operator new**, call [operator delete](../standard-library/new-operators.md#op_delete).

For information on throwing or non-throwing behavior of new, see [The new and delete Operators](../cpp/new-and-delete-operators.md).

### Example

```cpp
// new_op_new.cpp
// compile with: /EHsc
#include<new>
#include<iostream>

using namespace std;

class MyClass
{
public:
   MyClass( )
   {
      cout << "Construction MyClass." << this << endl;
   };

   ~MyClass( )
   {
      imember = 0; cout << "Destructing MyClass." << this << endl;
   };
   int imember;
};

int main( )
{
   // The first form of new delete
   MyClass* fPtr = new MyClass;
   delete fPtr;

   // The second form of new delete
   MyClass* fPtr2 = new( nothrow ) MyClass;
   delete fPtr2;

   // The third form of new delete
   char x[sizeof( MyClass )];
   MyClass* fPtr3 = new( &x[0] ) MyClass;
   fPtr3 -> ~MyClass();
   cout << "The address of x[0] is : " << ( void* )&x[0] << endl;
}
```

## <a name="op_new_arr"></a> operator new[]

The allocation function called by a new expression to allocate storage for an array of objects.

```cpp
void* operator new[](std::size_t count) throw(std::bad_alloc);
void* operator new[](std::size_t count, const std::nothrow_t&) throw();
void* operator new[](std::size_t count, void* ptr) throw();
```

### Parameters

*count*\
The number of bytes of storage to be allocated for the array object.

*ptr*\
The pointer to be returned.

### Return Value

A pointer to the lowest byte address of the newly-allocated storage. Or *ptr*.

### Remarks

The first function is called by a `new[]` expression to allocate `count` bytes of storage suitably aligned to represent any array object of that size or smaller. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is the same as for [operator new](../standard-library/new-operators.md#op_new)(**size_t**). The default behavior is to return `operator new`( `count`).

The second function is called by a placement `new[]` expression to allocate `count` bytes of storage suitably aligned to represent any array object of that size. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The default behavior is to return **operatornew**(`count`) if that function succeeds. Otherwise, it returns a null pointer.

The third function is called by a placement `new[]` expression, of the form **`new`** ( *args*) **T**[ **N**]. Here, *args* consists of a single object pointer. The function returns `ptr`.

To free storage allocated by `operator new[]`, call [operator delete&#91;&#93;](../standard-library/new-operators.md#op_delete_arr).

For information on throwing or nonthrowing behavior of new, see [The new and delete Operators](../cpp/new-and-delete-operators.md).

### Example

```cpp
// new_op_alloc.cpp
// compile with: /EHsc
#include <new>
#include <iostream>

using namespace std;

class MyClass {
public:
   MyClass() {
      cout << "Construction MyClass." << this << endl;
   };

   ~MyClass() {
      imember = 0; cout << "Destructing MyClass." << this << endl;
      };
   int imember;
};

int main() {
   // The first form of new delete
   MyClass* fPtr = new MyClass[2];
   delete[ ] fPtr;

   // The second form of new delete
   char x[2 * sizeof( MyClass ) + sizeof(int)];

   MyClass* fPtr2 = new( &x[0] ) MyClass[2];
   fPtr2[1].~MyClass();
   fPtr2[0].~MyClass();
   cout << "The address of x[0] is : " << ( void* )&x[0] << endl;

   // The third form of new delete
   MyClass* fPtr3 = new( nothrow ) MyClass[2];
   delete[ ] fPtr3;
}
```
