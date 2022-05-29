---
description: "Learn more about: <new> operators and enums"
title: "<new> operators and enums"
ms.date: 05/21/2022
f1_keywords: ["new/std::operator delete", "new/std::operator new"]
ms.assetid: d1af4b56-9a95-4c65-ab01-bf43e982c7bd
---
# `<new>` operators and enums

## <a name="op_align_val_t"></a> `enum align_val_t`

```cpp
enum class align_val_t : size_t {};
```

## <a name="op_delete"></a> `operator delete`

The function called by a `delete` expression to deallocate storage for individual objects.

```cpp
void operator delete(void* ptr) noexcept;
void operator delete(void *, void*) noexcept;
void operator delete(void* ptr, const std::nothrow_t&) noexcept;
```

### Parameters

*`ptr`*\
The pointer whose value is to be rendered invalid by the deletion.

### Remarks

The first function is called by a `delete` expression to render the value of *`ptr`* invalid. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *`ptr`* that's `nullptr` or that was returned by an earlier call to [`operator new`](../standard-library/new-operators.md#op_new).

The default behavior for a `nullptr` value in *`ptr`* is to do nothing. Any other value of *`ptr`* must be a value returned earlier by a `new` call as previously described. The default behavior for a non-null value of *`ptr`* is to reclaim storage allocated by the earlier call. It's unspecified under what conditions part or all of such reclaimed storage is allocated by a subsequent call to `operator new`, or to any of the `calloc`, `malloc`, or `realloc` functions.

The second function is called by a placement `delete` expression corresponding to a `new` expression of the form `new( std::size_t )`. It does nothing.

The third function is called by a placement `delete` expression corresponding to a `new` expression of the form `new( std::size_t, const std::nothrow_t& )`. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of `ptr` that is `nullptr` or that was returned by an earlier call to `operator new`. The default behavior is to evaluate `delete( ptr )`.

### Example

See [`operator new`](../standard-library/new-operators.md#op_new) for an example that uses `operator delete`.

## <a name="op_delete_arr"></a> `operator delete[]`

The function called by a `delete` expression to deallocate storage for an array of objects.

```cpp
void operator delete[](void* ptr) noexcept;
void operator delete[](void *, void*) noexcept;
void operator delete[](void* ptr, const std::nothrow_t&) noexcept;
```

### Parameters

*`ptr`*\
The pointer whose value is to be rendered invalid by the deletion.

### Remarks

The first function is called by an `delete[]` expression to render the value of *`ptr`* invalid. The function is replaceable because the program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *`ptr`* that is `nullptr` or that was returned by an earlier call to [`operator new[]`](../standard-library/new-operators.md#op_new_arr). The default behavior for a null value of *`ptr`* is to do nothing. Any other value of *`ptr`* must be a value returned earlier by a call as previously described. The default behavior for such a non-null value of *`ptr`* is to reclaim storage allocated by the earlier call. It's unspecified under what conditions part or all of such reclaimed storage is allocated by a subsequent call to [`operator new`](../standard-library/new-operators.md#op_new), or to any of the `calloc`, `malloc`, or `realloc` functions.

The second function is called by a placement `delete[]` expression corresponding to a `new[]` expression of the form `new[]( std::size_t )`. It does nothing.

The third function is called by a placement `delete[]` expression corresponding to a `new[]` expression of the form `new[]( std::size_t, const std::nothrow_t& )`. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is to accept a value of *`ptr`* that is `nullptr` or that was returned by an earlier call to operator `new[]`. The default behavior is to evaluate `delete[]( ptr )`.

### Example

See [`operator new[]`](../standard-library/new-operators.md#op_new_arr) for examples of the use of `operator delete[]`.

## <a name="op_new"></a> `operator new`

The function called by a new-expression to allocate storage for individual objects.

```cpp
void* operator new(std::size_t count);
void* operator new(std::size_t count, const std::nothrow_t&) noexcept;
void* operator new(std::size_t count, void* ptr) noexcept;
```

### Parameters

*`count`*\
The number of bytes of storage to be allocated.

*`ptr`*\
The pointer to be returned.

### Return value

A pointer to the lowest byte address of the newly allocated storage. Or *`ptr`*, if using the third form of the function.

### Remarks

The first function is called by a `new` expression to allocate `count` bytes of storage suitably aligned to represent any object of that size. This function is *replaceable*. It means the program can define an alternate function with this function signature that replaces the default version defined by the C++ Standard Library.

The required behavior is to return a non-null pointer only if storage can be allocated as requested. Each such allocation yields a pointer to storage disjoint from any other allocated storage. The order and contiguity of storage allocated by successive calls is unspecified. The initial stored value is unspecified. The returned pointer points to the start (the lowest byte address) of the allocated storage. If *`count`* is zero, the value returned doesn't compare equal to any other value returned by the function.

The default behavior is to execute a loop. Within the loop, the function first attempts to allocate the requested storage. Whether the attempt involves a call to `malloc` is unspecified. If the allocation attempt is successful, the function returns a pointer to the allocated storage. Otherwise, the function calls the designated function of type [`new_handler`](../standard-library/new-typedefs.md#new_handler). If the called function returns, the loop repeats. The loop terminates when an attempt to allocate the requested storage is successful or when a called function doesn't return.

The required behavior of a function of type `new_handler` is to perform one of the following operations:

- Make more storage available for allocation and then return.

- Call either `abort` or `exit`.

- Throw an object of type `bad_alloc`.

The default behavior of a [`new_handler`](../standard-library/new-typedefs.md#new_handler) function is to throw an object of type `bad_alloc`. A `nullptr` value designates the default `new_handler` function.

The order and contiguity of storage allocated by successive calls to `operator new` is unspecified, as are the initial values stored there.

To free storage allocated by the first form of `operator new`, call [`operator delete`](../standard-library/new-operators.md#op_delete).

The second function is called by a placement `new` expression to allocate *`count`* bytes of storage suitably aligned to represent any object of that size. This function is *replaceable*. It means the program can define an alternate function with this function signature that replaces the default version defined by the C++ Standard Library.

The default behavior is to return `operator new( count )` if that function succeeds. Otherwise, it returns `nullptr`.

To free storage allocated by the second form of `operator new` (that is, if it didn't return `nullptr`), call [`operator delete`](../standard-library/new-operators.md#op_delete).

The third function is called by a non-allocating placement `new` expression, of the form `new ( ptr ) T`. Here, *`ptr`* consists of a single object pointer. It can be useful for constructing an object at a known address. The function returns *`ptr`*. You must call the destructor explicitly on this object.

If you call non-allocating placement `new`, don't call `delete`. Instead, call the deallocator for the memory you provided, if necessary, after you call the destructor for the object.

For information on throwing or non-throwing behavior of `new`, see [The `new` and `delete` operators](../cpp/new-and-delete-operators.md).

### Example

```cpp
// new_op_new.cpp
// compile with: /EHsc
#include<new>
#include<iostream>

using namespace std;

class MyClass {
    int member{ 0 };
public:
    MyClass() {
        cout << "MyClass at 0x" << this << " constructed.\n";
    };

    ~MyClass() {
        cout << "MyClass at 0x" << this << " destroyed.\n";
    };
};

int main( )
{
    // The first form of new / delete
    MyClass* fPtr1 = new MyClass;
    delete fPtr1;

    // The second form (fail returns nullptr) of new / delete
    MyClass* fPtr2 = new(nothrow) MyClass[2];
    if (fPtr2)
        delete fPtr2;

    // The third form (non-allocating placement) of new / delete
    char x[sizeof(MyClass)]; // x is automatic
    MyClass* fPtr3 = new(&x[0]) MyClass;
    fPtr3->~MyClass(); // Requires explicit destructor call
    // no delete because x is on the stack
}
```

## <a name="op_new_arr"></a> `operator new[]`

The allocation function called by a new expression to allocate storage for an array of objects.

```cpp
void* operator new[](std::size_t count);
void* operator new[](std::size_t count, const std::nothrow_t&) noexcept;
void* operator new[](std::size_t count, void* ptr) noexcept;
```

### Parameters

*`count`*\
The number of bytes of storage to be allocated for the array object.

*`ptr`*\
The pointer to be returned.

### Return value

A pointer to the lowest byte address of the newly allocated storage. Or *`ptr`*, when the third form is used.

### Remarks

The first function is called by a `new[]` expression to allocate *`count`* bytes of storage suitably aligned to represent any array object of that size or smaller. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The required behavior is the same as for [`operator new`](../standard-library/new-operators.md#op_new). The default behavior is to return `operator new( count )` if it succeeds. Otherwise, it throws a `std::bad_alloc` exception (or an exception derived from `std::bad_alloc`). To free storage allocated by this form of `operator new[]`, call [`operator delete[]`](../standard-library/new-operators.md#op_delete_arr).

The second function is called by a placement `new[]` expression to allocate *`count`* bytes of storage suitably aligned to represent any array object of that size. The program can define a function with this function signature that replaces the default version defined by the C++ Standard Library. The default behavior is to return `operator new( count )` if that function succeeds. Otherwise, it returns `nullptr`. To free storage allocated by this form of `operator new[]`, call `operator delete[]`. For more information on the throwing or non-throwing behavior of `new`, see [The `new` and `delete` operators](../cpp/new-and-delete-operators.md).

The third function is called by a non-allocating placement `new[]` expression, of the form `new( ptr ) T[ N ]`. This form doesn't allocate memory. It constructs the objects in the memory passed in through the *`ptr`* parameter. The function returns *`ptr`*. You must call the destructor explicitly for each object created. You're responsible for providing sufficient memory for *`ptr`*. Don't invoke `delete[]` on the value returned by the `new` expression. Instead, deallocate *`ptr`*, if necessary, after you call the destructors.

### Example

```cpp
// new_op_array.cpp
// compile with: /EHsc
#include <new>
#include <iostream>

using namespace std;

class MyClass {
    int member{ 0 };
public:
    MyClass() {
        cout << "MyClass at 0x" << this << " constructed.\n";
    };

    ~MyClass() {
        cout << "MyClass at 0x" << this << " destroyed.\n";
    };
};

int main() {
    // The first form of array new / delete
    MyClass* fPtr1 = new MyClass[2];
    delete[] fPtr1;

    // The second form (fail returns nullptr) of array new / delete
    MyClass* fPtr2 = new(nothrow) MyClass[2];
    if (fPtr2)
        delete[] fPtr2;

    // The third form (non-allocating placement) of array new / delete
    char x[2 * sizeof(MyClass) + sizeof(int)]; // x is automatic

    MyClass* fPtr3 = new(&x[0]) MyClass[2];
    fPtr3[1].~MyClass(); // Requires explicit destructor calls
    fPtr3[0].~MyClass(); // Recommended in reverse construction order
    // Don't delete[] fPtr3 here.
    // delete[] &x[0] not required because x is on the stack
}
```
