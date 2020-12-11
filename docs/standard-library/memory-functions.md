---
description: "Learn more about: &lt;memory&gt; functions"
title: "&lt;memory&gt; functions"
ms.date: "08/05/2019"
f1_keywords: ["memory/std::addressof", "memory/std::align", "memory/std::allocate_shared", "memory/std::const_pointer_cast", "memory/std::declare_no_pointers", "memory/std::declare_reachable", "memory/std::dynamic_pointer_cast", "memory/std::get_deleter", "memory/std::get_pointer_safety", "memory/std::get_temporary_buffer", "xmemory/std::get_temporary_buffer", "memory/std::make_shared", "memory/std::make_unique", "memory/std::owner_less", "memory/std::reinterpret_pointer_cast", "memory/std::return_temporary_buffer", "xmemory/std::return_temporary_buffer", "memory/std::static_pointer_cast", "memory/std::swap", "memory/std::undeclare_no_pointers", "memory/std::undeclare_reachable", "memory/std::uninitialized_copy", "memory/std::uninitialized_copy_n", "memory/std::uninitialized_fill", "memory/std::uninitialized_fill_n"]
ms.assetid: 3e1898c2-44b7-4626-87ce-84962e4c6f1a
helpviewer_keywords: ["std::addressof [C++]", "std::align [C++]", "std::allocate_shared [C++]", "std::const_pointer_cast [C++]", "std::declare_no_pointers [C++]", "std::declare_reachable [C++]", "std::default_delete [C++]", "std::dynamic_pointer_cast [C++]", "std::get_deleter [C++]", "std::get_pointer_safety [C++]", "std::get_temporary_buffer [C++]", "std::make_shared [C++]", "std::make_unique [C++]", "std::owner_less [C++]", "std::return_temporary_buffer [C++]", "std::static_pointer_cast [C++]", "std::swap [C++]", "std::undeclare_no_pointers [C++]", "std::undeclare_reachable [C++]", "std::uninitialized_copy [C++]", "std::uninitialized_copy_n [C++]", "std::uninitialized_fill [C++]", "std::uninitialized_fill_n [C++]", "std::addressof [C++]", "std::align [C++]", "std::allocate_shared [C++]", "std::const_pointer_cast [C++]", "std::declare_no_pointers [C++]", "std::declare_reachable [C++]", "std::default_delete [C++]", "std::dynamic_pointer_cast [C++]", "std::get_deleter [C++]", "std::get_pointer_safety [C++]", "std::get_temporary_buffer [C++]", "std::make_shared [C++]", "std::make_unique [C++]", "std::owner_less [C++]", "std::return_temporary_buffer [C++]", "std::static_pointer_cast [C++]", "std::undeclare_no_pointers [C++]", "std::undeclare_reachable [C++]", "std::uninitialized_copy [C++]", "std::uninitialized_copy_n [C++]", "std::uninitialized_fill [C++]", "std::uninitialized_fill_n [C++]"]
---
# &lt;memory&gt; functions

## <a name="addressof"></a> addressof

Gets the true address of an object.

```cpp
template <class T>
T* addressof(
    T& value) noexcept;    // before C++17

template <class T>
constexpr T* addressof(
    T& value) noexcept;    // C++17

template <class T>
const T* addressof(
    const T&& value) = delete;   // C++17
```

### Parameters

*value*\
The object or function for which to obtain the true address.

### Return Value

The actual address of the object or function referenced by *value*, even if an overloaded `operator&()` exists.

### Remarks

## <a name="align"></a> align

Fits storage of the given size, aligned by the given alignment specification, into the first possible address of the given storage.

```cpp
void* align(
    size_t alignment, // input
    size_t size,      // input
    void*& ptr,       // input/output
    size_t& space     // input/output
);
```

### Parameters

*alignment*\
The alignment bound to attempt.

*size*\
The size in bytes for the aligned storage.

*ptr*\
The starting address of the available contiguous storage pool to use. This parameter is also an output parameter, and is set to contain the new starting address if the alignment is successful. If `align()` is unsuccessful, this parameter isn't modified.

*space*\
The total space available to `align()` to use in creating the aligned storage. This parameter is also an output parameter, and contains the adjusted space left in the storage buffer after the aligned storage and any associated overhead is subtracted.

If `align()` is unsuccessful, this parameter isn't modified.

### Return Value

A null pointer if the requested aligned buffer wouldn't fit into the available space; otherwise, the new value of *ptr*.

### Remarks

The modified *ptr* and *space* parameters enable you to call `align()` repeatedly on the same buffer, possibly with different values for *alignment* and *size*. The following code snippet shows one use of `align()`.

```cpp
#include <type_traits> // std::alignment_of()
#include <memory>
//...
char buffer[256]; // for simplicity
size_t alignment = std::alignment_of<int>::value;
void * ptr = buffer;
std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer

while (std::align(alignment, sizeof(MyObj), ptr, space)) {
    // You now have storage the size of MyObj, starting at ptr, aligned on
    // int boundary. Use it here if you like, or save off the starting address
    // contained in ptr for later use.
    // ...
    // Last, move starting pointer and decrease available space before
    // the while loop restarts.
    ptr = reinterpret_cast<char*>(ptr) + sizeof(MyObj);
    space -= sizeof(MyObj);
}
// At this point, align() has returned a null pointer, signaling it is not
// possible to allow more aligned storage in this buffer.
```

## <a name="allocate_shared"></a> allocate_shared

Creates a [shared_ptr](shared-ptr-class.md) to objects that are allocated and constructed for a given type by using a specified allocator. Returns the `shared_ptr`.

```cpp
template <class T, class Allocator, class... Args>
shared_ptr<T> allocate_shared(
    Allocator alloc,
    Args&&... args);
```

### Parameters

*alloc*\
The allocator used to create objects.

*args*\
The zero or more arguments that become the objects.

### Remarks

The function creates the object `shared_ptr<T>`, a pointer to `T(args...)` as allocated and constructed by *alloc*.

## <a name="atomic_compare_exchange_strong"></a> atomic_compare_exchange_strong

```cpp
template<class T>
bool atomic_compare_exchange_strong(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w);
```

## <a name="atomic_compare_exchange_weak"></a> atomic_compare_exchange_weak

```cpp
template<class T>
bool atomic_compare_exchange_weak(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w);
```

## <a name="atomic_compare_exchange_strong_explicit"></a> atomic_compare_exchange_strong_explicit

```cpp
template<class T>
bool atomic_compare_exchange_strong_explicit(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w,
    memory_order success,
    memory_order failure);
```

## <a name="atomic_compare_exchange_weak_explicit"></a> atomic_compare_exchange_weak_explicit

```cpp
template<class T>
bool atomic_compare_exchange_weak_explicit(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w,
    memory_order success,
    memory_order failure);
```

## <a name="atomic_exchange"></a> atomic_exchange

```cpp
template<class T>
shared_ptr<T> atomic_exchange(
    shared_ptr<T>* u,
    shared_ptr<T> r);
```

## <a name="atomic_exchange_explicit"></a> atomic_exchange_explicit

```cpp
template<class T>
shared_ptr<T> atomic_exchange_explicit(
    shared_ptr<T>* u,
    shared_ptr<T> r,
    memory_order mo);
```

## <a name="atomic_is_lock_free"></a> atomic_is_lock_free

```cpp
template<class T>
bool atomic_is_lock_free(
    const shared_ptr<T>* u);
```

## <a name="atomic_load"></a> atomic_load

```cpp
template<class T>
shared_ptr<T> atomic_load(
    const shared_ptr<T>* u);
```

## <a name="atomic_load_explicit"></a> atomic_load_explicit

```cpp
template<class T>
shared_ptr<T> atomic_load_explicit(
    const shared_ptr<T>* u,
    memory_order mo);
```

## <a name="atomic_store"></a> atomic_store

```cpp
template<class T>
void atomic_store(
    shared_ptr<T>* u,
    shared_ptr<T> r);
```

## <a name="atomic_store_explicit"></a> atomic_store_explicit

```cpp
template<class T>
void atomic_store_explicit(
    shared_ptr<T>* u,
    shared_ptr<T> r,
    memory_order mo);
```

## <a name="const_pointer_cast"></a> const_pointer_cast

Const cast to [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> const_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> const_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### Parameters

*T*\
The type controlled by the returned shared pointer.

*Other*\
The type controlled by the argument shared pointer.

*sp*\
The argument shared pointer.

### Remarks

The template function returns an empty `shared_ptr` object if `const_cast<T*>(sp.get())` returns a null pointer; otherwise it returns a `shared_ptr<T>` object that owns the resource that is owned by *sp*. The expression `const_cast<T*>(sp.get())` must be valid.

### Example

```cpp
// std__memory__const_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int);
    std::shared_ptr<const int> sp1 =
        std::const_pointer_cast<const int>(sp0);

    *sp0 = 3;
    std::cout << "sp1 == " << *sp1 << std::endl;

    return (0);
}
```

```Output
sp1 == 3
```

## <a name="declare_no_pointers"></a> declare_no_pointers

Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size contains no traceable pointers.

```cpp
void declare_no_pointers(
    char* ptr,
    size_t size);
```

### Parameters

*ptr*\
Address of first character that no longer contains traceable pointers.

*size*\
Size of block that starts at *ptr* that contains no traceable pointers.

### Remarks

The function informs any garbage collector that the addresses in the range `[ ptr, ptr + size)` no longer contain traceable pointers. (Any pointers to allocated storage must not be dereferenced unless made reachable.)

## <a name="declare_reachable"></a> declare_reachable

Informs garbage collection that the indicated address is to allocated storage and is reachable.

```cpp
void declare_reachable(
    void* ptr);
```

### Parameters

*ptr*\
A pointer to a reachable, allocated, valid storage area.

### Remarks

If *ptr* is not null, the function informs any garbage collector that *ptr* is now reachable, that is, it points to valid allocated storage.

## <a name="default_delete"></a> default_delete

Deletes objects allocated with **operator new**. Suitable for use with [unique_ptr](unique-ptr-class.md).

```cpp
struct default_delete
{
    constexpr default_delete() noexcept = default;

    template <class Other, class = typename enable_if<is_convertible<Other*, T*>::value, void>::type>>
    default_delete(const default_delete<Other>&) noexcept;

    void operator()(T* ptr) const noexcept;
};
```

### Parameters

*ptr*\
Pointer to the object to delete.

*Other*\
The type of elements in the array to be deleted.

### Remarks

The class template describes a deleter that deletes scalar objects allocated with **operator new**, suitable for use with class template `unique_ptr`. It also has the explicit specialization `default_delete<T[]>`.

## <a name="destroy_at"></a> destroy_at

```cpp
template <class T>
void destroy_at(
    T* location);
```

Same as `location->~T()`.

## <a name="destroy"></a> destroy

```cpp
template <class ForwardIterator>
void destroy(
    ForwardIterator first,
    ForwardIterator last);
```

Same as:

```cpp
for (; first != last; ++first)
    destroy_at(addressof(*first));
```

## <a name="destroy_n"></a> destroy_n

```cpp
template <class ForwardIterator, class Size>
ForwardIterator destroy_n(
    ForwardIterator first,
    Size count);
```

Same as:

```cpp
for (; count > 0; (void)++first, --count)
    destroy_at(addressof(*first));
return first;
```

## <a name="dynamic_pointer_cast"></a> dynamic_pointer_cast

Dynamic cast to [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> dynamic_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> dynamic_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### Parameters

*T*\
The type controlled by the returned shared pointer.

*Other*\
The type controlled by the argument shared pointer.

*sp*\
The argument shared pointer.

### Remarks

The template function returns an empty `shared_ptr` object if `dynamic_cast<T*>(sp.get())` returns a null pointer; otherwise it returns a `shared_ptr<T>` object that owns the resource that is owned by *sp*. The expression `dynamic_cast<T*>(sp.get())` must be valid.

### Example

```cpp
// std__memory__dynamic_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    virtual ~base() {}
    int value;
};

struct derived
    : public base
{
};

int main()
{
    std::shared_ptr<base> sp0(new derived);
    std::shared_ptr<derived> sp1 =
        std::dynamic_pointer_cast<derived>(sp0);

    sp0->value = 3;
    std::cout << "sp1->value == " << sp1->value << std::endl;

    return (0);
}
```

```Output
sp1->value == 3
```

## <a name="get_deleter"></a> get_deleter

Get the deleter from a [shared_ptr](shared-ptr-class.md).

```cpp
template <class Deleter, class T>
Deleter* get_deleter(
    const shared_ptr<T>& sp) noexcept;
```

### Parameters

*Deleter*\
The type of the deleter.

*T*\
The type controlled by the shared pointer.

*sp*\
The shared pointer.

### Remarks

The template function returns a pointer to the deleter of type *Deleter* that belongs to the `shared_ptr` object *sp*. If *sp* has no deleter, or if its deleter is not of type *Deleter*, the function returns 0.

### Example

```cpp
// std__memory__get_deleter.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    int value;
};

struct deleter
{
    void operator()(base *pb)
    {
        delete pb;
    }
};

int main()
{
    std::shared_ptr<base> sp0(new base);

    sp0->value = 3;
    std::cout << "get_deleter(sp0) != 0 == " << std::boolalpha
        << (std::get_deleter<deleter>(sp0) != 0) << std::endl;

    std::shared_ptr<base> sp1(new base, deleter());

    sp0->value = 3;
    std::cout << "get_deleter(sp1) != 0 == " << std::boolalpha
        << (std::get_deleter<deleter>(sp1) != 0) << std::endl;

    return (0);
}
```

```Output
get_deleter(sp0) != 0 == false
get_deleter(sp1) != 0 == true
```

## <a name="get_pointer_safety"></a> get_pointer_safety

Returns the type of pointer safety assumed by any garbage collector.

```cpp
pointer_safety get_pointer_safety() noexcept;
```

### Remarks

The function returns the type of pointer safety assumed by any automatic garbage collector.

## <a name="get_temporary_buffer"></a> get_temporary_buffer

Allocates temporary storage for a sequence of elements that doesn't exceed a specified number of elements.

```cpp
template <class T>
pair<T *, ptrdiff_t> get_temporary_buffer(
    ptrdiff_t count);
```

### Parameters

*count*\
The maximum number of elements requested for which memory is to be allocated.

### Return Value

A `pair` whose first component is a pointer to the memory that was allocated, and whose second component gives the size of the buffer, indicating the largest number of elements that it could store.

### Remarks

The function makes a request for memory and it may not succeed. If no buffer is allocated, then the function returns a pair, with the second component equal to zero and the first component equal to the null pointer.

Only use this function for memory that is temporary.

### Example

```cpp
// memory_get_temp_buf.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

int main( )
{
    // Create an array of ints
    int intArray [] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };
    int count = sizeof ( intArray ) / sizeof ( int );
    cout << "The number of integers in the array is: "
        << count << "." << endl;

    pair<int *, ptrdiff_t> resultPair;
    resultPair = get_temporary_buffer<int>( count );

    cout << "The number of elements that the allocated memory\n"
        << "could store is given by: resultPair.second = "
        << resultPair.second << "." << endl;
}
```

```Output
The number of integers in the array is: 9.
The number of elements that the allocated memory
could store is given by: resultPair.second = 9.
```

## <a name="make_shared"></a> make_shared

Creates and returns a [shared_ptr](shared-ptr-class.md) that points to the allocated objects that are constructed from zero or more arguments by using the default allocator. Allocates and constructs both an object of the specified type and a `shared_ptr` to manage shared ownership of the object, and returns the `shared_ptr`.

```cpp
template <class T, class... Args>
shared_ptr<T> make_shared(
    Args&&... args);
```

### Parameters

*args*\
Zero or more constructor arguments. The function infers which constructor overload to invoke based on the arguments that are provided.

### Remarks

Use `make_shared` as a simple and more efficient way to create an object and a `shared_ptr` to manage shared access to the object at the same time. Semantically, these two statements are equivalent:

```cpp
auto sp = std::shared_ptr<Example>(new Example(argument));
auto msp = std::make_shared<Example>(argument);
```

However, the first statement makes two allocations, and if the allocation of the `shared_ptr` fails after the allocation of the `Example` object has succeeded, then the unnamed `Example` object is leaked. The statement that uses `make_shared` is simpler because there's only one function call involved. It's more efficient because the library can make a single allocation for both the object and the smart pointer. This function is both faster and leads to less memory fragmentation, and there's no chance of an exception on one allocation but not the other. Performance is improved by better locality for code that references the object and updates the reference counts in the smart pointer.

Consider using [make_unique](memory-functions.md#make_unique) if you don't need shared access to the object. Use [allocate_shared](memory-functions.md#allocate_shared) if you need to specify a custom allocator for the object. You can't use `make_shared` if your object requires a custom deleter, because there's no way to pass the deleter as an argument.

The following example shows how to create shared pointers to a type by invoking specific constructor overloads.

### Example

```cpp
// stl_make_shared.cpp
// Compile by using: cl /W4 /EHsc stl_make_shared.cpp
#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Song {
public:
    std::wstring title_;
    std::wstring artist_;

    Song(std::wstring title, std::wstring artist) : title_(title), artist_(artist) {}
    Song(std::wstring title) : title_(title), artist_(L"Unknown") {}
};

void CreateSharedPointers()
{
    // Okay, but less efficient to have separate allocations for
    // Song object and shared_ptr control block.
    auto song = new Song(L"Ode to Joy", L"Beethoven");
    std::shared_ptr<Song> sp0(song);

    // Use make_shared function when possible. Memory for control block
    // and Song object are allocated in the same call:
    auto sp1 = std::make_shared<Song>(L"Yesterday", L"The Beatles");
    auto sp2 = std::make_shared<Song>(L"Blackbird", L"The Beatles");

    // make_shared infers which constructor to use based on the arguments.
    auto sp3 = std::make_shared<Song>(L"Greensleeves");

    // The playlist vector makes copies of the shared_ptr pointers.
    std::vector<std::shared_ptr<Song>> playlist;
    playlist.push_back(sp0);
    playlist.push_back(sp1);
    playlist.push_back(sp2);
    playlist.push_back(sp3);
    playlist.push_back(sp1);
    playlist.push_back(sp2);
    for (auto&& sp : playlist)
    {
        std::wcout << L"Playing " << sp->title_ <<
            L" by " << sp->artist_ << L", use count: " <<
            sp.use_count() << std::endl;
    }
}

int main()
{
    CreateSharedPointers();
}
```

The example produces this output:

```Output
Playing Ode to Joy by Beethoven, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3
Playing Greensleeves by Unknown, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3
```

## <a name="make_unique"></a> make_unique

Creates and returns a [unique_ptr](unique-ptr-class.md) to an object of the specified type, which is constructed by using the specified arguments.

```cpp
// make_unique<T>
template <class T, class... Args>
unique_ptr<T> make_unique(Args&&... args);

// make_unique<T[]>
template <class T>
unique_ptr<T> make_unique(size_t size);

// make_unique<T[N]> disallowed
template <class T, class... Args>
/* unspecified */ make_unique(Args&&...) = delete;
```

### Parameters

*T*\
The type of the object that the `unique_ptr` will point to.

*Args*\
The types of the constructor arguments specified by *args*.

*args*\
The arguments to be passed to the constructor of the object of type *T*.

*elements*\
An array of elements of type *T*.

*size*\
The number of elements to allocate space for in the new array.

### Remarks

The first overload is used for single objects. The second overload is invoked for arrays. The third overload prevents you from specifying an array size in the type argument (make_unique\<T[N]>); this construction isn't supported by the current standard. When you use `make_unique` to create a `unique_ptr` to an array, you have to initialize the array elements separately. Rather than using this overload, perhaps a better choice is to use a [std::vector](vector-class.md).

Because `make_unique` is carefully implemented for exception safety, we recommend that you use `make_unique` instead of directly calling `unique_ptr` constructors.

### Example

The following example shows how to use `make_unique`. For more examples, see [How to: Create and Use unique_ptr Instances](../cpp/how-to-create-and-use-unique-ptr-instances.md).

[!code-cpp[stl_smart_pointers#214](../cpp/codesnippet/CPP/memory-functions_1.cpp)]

When you see error C2280 in connection with a `unique_ptr`, it is almost certainly because you are attempting to invoke its copy constructor, which is a deleted function.

## <a name="owner_less"></a> owner_less

Allows ownership-based mixed comparisons of shared and weak pointers. Returns **`true`** if the left parameter is ordered before right parameter by the member function `owner_before`.

```cpp
template <class T>
    struct owner_less; // not defined

template <class T>
struct owner_less<shared_ptr<T>>
{
    bool operator()(
        const shared_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;

    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;

    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;
};

template <class T>
struct owner_less<weak_ptr<T>>
    bool operator()(
        const weak_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;

    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;

    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;
};

template<> struct owner_less<void>
{
    template<class T, class U>
    bool operator()(
        const shared_ptr<T>& left,
        const shared_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const weak_ptr<T>& left,
        const weak_ptr<U>& right) const noexcept;
};
```

### Parameters

*left*\
A shared or weak pointer.

*right*\
A shared or weak pointer.

### Remarks

The class templates define all their member operators as returning `left.owner_before(right)`.

## <a name="reinterpret_pointer_cast"></a> reinterpret_pointer_cast

Creates a new `shared_ptr` from an existing shared pointer by using a cast.

```cpp
template<class T, class U>
shared_ptr<T> reinterpret_pointer_cast(
    const shared_ptr<U>& ptr) noexcept;

template<class T, class U>
shared_ptr<T> reinterpret_pointer_cast(
    shared_ptr<U>&& ptr) noexcept;
```

### Parameters

*ptr*\
An reference to a `shared_ptr<U>`.

### Remarks

If *ptr* is empty, the new `shared_ptr` is also empty, otherwise it shares ownership with *ptr*. The new shared pointer is the result of evaluating `reinterpret_cast<Y*>(ptr.get())`, where `Y` is `typename std::shared_ptr<T>::element_type`. The behavior is undefined if `reinterpret_cast<T*>((U*)nullptr)` is not well-formed.

The template function that takes an lvalue reference is new in C++17. The template function that takes an rvalue reference is new in C++20.

## <a name="return_temporary_buffer"></a> return_temporary_buffer

Deallocates the temporary memory that was allocated using the `get_temporary_buffer` template function.

```cpp
template <class T>
void return_temporary_buffer(
    T* buffer);
```

### Parameters

*buffer*\
A pointer to the memory to be deallocated.

### Remarks

Only use this function for memory that is temporary.

### Example

```cpp
// memory_ret_temp_buf.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

int main( )
{
    // Create an array of ints
    int intArray [] = { 10, 20, 30, 40, 100, 200, 300 };
    int count = sizeof ( intArray ) / sizeof ( int );
    cout << "The number of integers in the array is: "
         << count << "." << endl;

    pair<int *, ptrdiff_t> resultPair;
    resultPair = get_temporary_buffer<int>( count );

    cout << "The number of elements that the allocated memory\n"
         << " could store is given by: resultPair.second = "
         << resultPair.second << "." << endl;

    int* tempBuffer = resultPair.first;

    // Deallocates memory allocated with get_temporary_buffer
    return_temporary_buffer( tempBuffer );
}
```

```Output
The number of integers in the array is: 7.
The number of elements that the allocated memory
could store is given by: resultPair.second = 7.
```

## <a name="static_pointer_cast"></a> static_pointer_cast

Static cast to [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> static_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> static_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### Parameters

*T*\
The type controlled by the returned shared pointer.

*Other*\
The type controlled by the argument shared pointer.

*sp*\
The argument shared pointer.

### Remarks

The template function returns an empty `shared_ptr` object if *sp* is an empty `shared_ptr` object; otherwise it returns a `shared_ptr<T>` object that owns the resource that is owned by *sp*. The expression `static_cast<T*>(sp.get())` must be valid.

### Example

```cpp
// std__memory__static_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    int value;
};

struct derived
    : public base
{
};

int main()
{
    std::shared_ptr<base> sp0(new derived);
    std::shared_ptr<derived> sp1 =
        std::static_pointer_cast<derived>(sp0);

    sp0->value = 3;
    std::cout << "sp1->value == " << sp1->value << std::endl;

    return (0);
}
```

```Output
sp1->value == 3
```

## <a name="swap"></a> swap

Swap two [shared_ptr](shared-ptr-class.md), [unique_ptr](unique-ptr-class.md), or [weak_ptr](weak-ptr-class.md) objects.

```cpp
template <class T>
void swap(
    shared_ptr<T>& left,
    shared_ptr<T>& right) noexcept;

template <class T, class Deleter>
void swap(
    unique_ptr<T, Deleter>& left,
    unique_ptr<T, Deleter>& right) noexcept;

template <class T>
void swap(
    weak_ptr<T>& left,
    weak_ptr<T>& right) noexcept;

```

### Parameters

*T*\
The type controlled by the argument pointer.

*Deleter*\
The deleter of the unique pointer type.

*left*\
The left pointer.

*right*\
The right pointer.

### Remarks

The template functions call `left.swap(right)`.

### Example

```cpp
// std__memory__swap.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::shared_ptr<int> sp2(new int(10));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    sp1.swap(sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;

    swap(sp1, sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << std::endl;

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    wp1.swap(wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    swap(wp1, wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    return (0);
}
```

```Output
*sp1 == 5
*sp1 == 10
*sp1 == 5

*wp1 == 5
*wp1 == 10
*wp1 == 5
```

## <a name="undeclare_no_pointers"></a> undeclare_no_pointers

Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size may now contain traceable pointers.

```cpp
void undeclare_no_pointers(
    char* ptr,
    size_t size);
```

### Parameters

*ptr*\
A pointer to the memory address previously marked using [declare_no_pointers](#declare_no_pointers).

*size*\
The number of bytes in the memory range. This value must equal the number used in the `declare_no_pointers` call.

### Remarks

The function informs any garbage collector that the range of addresses `[ptr, ptr + size)` may now contain traceable pointers.

## <a name="undeclare_reachable"></a> undeclare_reachable

Revokes a declaration of reachability for a specified memory location.

```cpp
template <class T>
T *undeclare_reachable(
    T* ptr);
```

### Parameters

*ptr*\
A pointer to the memory address previously marked using [declare_reachable](#declare_reachable).

### Remarks

If *ptr* is not **`nullptr`**, the function informs any garbage collector that *ptr* is no longer reachable. It returns a safely derived pointer that compares equal to *ptr*.

## <a name="uninitialized_copy"></a> uninitialized_copy

Copies objects from a specified source range into an uninitialized destination range.

```cpp
template <class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(
    ExecutionPolicy&& policy,
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An input iterator addressing the first element in the source range.

*last*\
An input iterator addressing the last element in the source range.

*dest*\
A forward iterator addressing the first element in the destination range.

### Return Value

A forward iterator addressing the first position beyond the destination range, unless the source range was empty.

### Remarks

This algorithm allows the decoupling of memory allocation from object construction.

The template function effectively executes:

```cpp
while (first != last)
{
    new (static_cast<void*>(&* dest++))
        typename iterator_traits<InputIterator>::value_type(*first++);
}
return dest;
```

unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.

The overload with an execution policy is new in C++17.

### Example

```cpp
// memory_uninit_copy.cpp
// compile with: /EHsc /W3
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    Integer(int x) : value(x) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    int Array[] = { 10, 20, 30, 40 };
    const int N = sizeof(Array) / sizeof(int);

    cout << "The initialized Array contains " << N << " elements: ";
    for (int i = 0; i < N; i++)
    {
        cout << " " << Array[i];
    }
    cout << endl;

    Integer* ArrayPtr = (Integer*)malloc(N * sizeof(int));
    Integer* LArrayPtr = uninitialized_copy(
        Array, Array + N, ArrayPtr);  // C4996

    cout << "Address of position after the last element in the array is: "
        << &Array[0] + N << endl;
    cout << "The iterator returned by uninitialized_copy addresses: "
        << (void*)LArrayPtr << endl;
    cout << "The address just beyond the last copied element is: "
        << (void*)(ArrayPtr + N) << endl;

    if ((&Array[0] + N) == (void*)LArrayPtr)
        cout << "The return value is an iterator "
        << "pointing just beyond the original array." << endl;
    else
        cout << "The return value is an iterator "
        << "not pointing just beyond the original array." << endl;

    if ((void*)LArrayPtr == (void*)(ArrayPtr + N))
        cout << "The return value is an iterator "
        << "pointing just beyond the copied array." << endl;
    else
        cout << "The return value is an iterator "
        << "not pointing just beyond the copied array." << endl;

    free(ArrayPtr);

    cout << "Note that the exact addresses returned will vary\n"
        << "with the memory allocation in individual computers."
        << endl;
}
```

## <a name="uninitialized_copy_n"></a> uninitialized_copy_n

Creates a copy of a specified number of elements from an input iterator. The copies are put in a forward iterator.

```cpp
template <class InputIterator, class Size, class ForwardIterator>
ForwardIterator uninitialized_copy_n(
    InputIterator first,
    Size count,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class Size, class ForwardIterator>
ForwardIterator uninitialized_copy_n(
    ExecutionPolicy&& policy,
    InputIterator first,
    Size count,
    ForwardIterator dest);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An input iterator that refers to the object to copy.

*count*\
A signed or unsigned integer type specifying the number of times to copy the object.

*dest*\
A forward iterator that refers to where the new copies go.

### Return Value

A forward iterator that addresses the first position beyond the destination. If the source range was empty, the iterator addresses *first*.

### Remarks

The template function effectively executes the following code:

```cpp
    for (; 0 < count; --count)
        new (static_cast<void*>(&* dest++))
            typename iterator_traits<InputIterator>::value_type(*first++);
    return dest;
```

unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.

The overload with an execution policy is new in C++17.

## <a name="uninitialized_default_construct"></a> uninitialized_default_construct

Default constructs objects of the iterators' `value_type` in the specified range.

```cpp
template <class ForwardIterator>
void uninitialized_default_construct(
    ForwardIterator first,
    ForwardIterator last);

template <class ExecutionPolicy, class ForwardIterator>
void uninitialized_default_construct(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An iterator addressing the first element in the range to construct.

*last*\
An iterator addressing one past the last element in the range to construct.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; first != last; ++first)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type;
```

If an exception is thrown, previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

These functions are new in C++17.

## <a name="uninitialized_default_construct_n"></a> uninitialized_default_construct_n

Default constructs a specified number of objects of the iterator's `value_type`, starting at the specified location.

```cpp
template <class ForwardIterator, class Size>
ForwardIterator uninitialized_default_construct_n(
    ForwardIterator first,
    Size count);

template <class ExecutionPolicy, class ForwardIterator, class Size>
ForwardIterator uninitialized_default_construct_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An iterator addressing the first element in the destination range to construct.

*count*\
The count of elements in the destination range to construct.

### Return Value

A forward iterator addressing the first position beyond the destination range, unless the source range was empty.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; count>0; (void)++first, --count)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type;
return first;
```

If an exception is thrown, previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

These functions are new in C++17.

## <a name="uninitialized_fill"></a> uninitialized_fill

Copies objects of a specified value into an uninitialized destination range.

```cpp
template <class ForwardIterator, class T>
void uninitialized_fill(
    ForwardIterator first,
    ForwardIterator last,
    const T& value);

template <class ExecutionPolicy, class ForwardIterator, class T>
void uninitialized_fill(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last,
    const T& value);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
A forward iterator addressing the first element in the destination range to initialize.

*last*\
A forward iterator addressing the last element in the destination range to initialize.

*value*\
The value to be used to initialize the destination range.

### Remarks

This algorithm allows the decoupling of memory allocation from object construction.

The template function effectively executes:

```cpp
while (first != last)
    new (static_cast<void*>(&* first ++))
        typename iterator_traits<ForwardIterator>::value_type (value);
```

unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.

The overload with an execution policy is new in C++17.

### Example

```cpp
// memory_uninit_fill.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    // No default constructor
    Integer( int x ) : value( x ) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    const int N = 10;
    Integer value ( 25 );
    Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
    uninitialized_fill( Array, Array + N, value );
    cout << "The initialized Array contains: ";
    for ( int i = 0; i < N; i++ )
        {
            cout << Array[ i ].get() << " ";
        }
    cout << endl;
}
```

```Output
The initialized Array contains: 25 25 25 25 25 25 25 25 25 25
```

## <a name="uninitialized_fill_n"></a> uninitialized_fill_n

Copies objects of a specified value into the specified number of elements of an uninitialized destination range.

```cpp
template <class ForwardIterator, class Size, class T>
ForwardIterator uninitialized_fill_n(
    ForwardIterator first,
    Size count,
    const T& value);

template <class ExecutionPolicy, class ForwardIterator, class Size, class T>
ForwardIterator uninitialized_fill_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count,
    const T& value);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
A forward iterator addressing the first element in the destination range to initialize.

*count*\
The number of elements to initialize.

*value*\
The value to use to initialize the destination range.

### Remarks

This algorithm allows the decoupling of memory allocation from object construction.

The template function effectively executes:

```cpp
while (0 < count--)
    new (static_cast<void*>(&* first++))
        typename iterator_traits<ForwardIterator>::value_type(value);
return first;
```

unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.

The overload with an execution policy is new in C++17.

### Example

```cpp
// memory_uninit_fill_n.cpp
// compile with: /EHsc /W3
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    // No default constructor
    Integer( int x ) : value( x ) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    const int N = 10;
    Integer value( 60 );
    Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
    uninitialized_fill_n( Array, N, value );  // C4996
    cout << "The uninitialized Array contains: ";
    for ( int i = 0; i < N; i++ )
        cout << Array[ i ].get() <<  " ";
}
```

## <a name="uninitialized_move"></a> uninitialized_move

Moves elements from a source range to an uninitialized destination memory area.

```cpp
template <class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_move(
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_move(
    ExecutionPolicy&& policy,
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An input iterator addressing the first element in the source range to move.

*last*\
An input iterator addressing one past the last element in the source range to move.

*dest*\
The beginning of the destination range.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; first != last; (void)++dest, ++first)
    ::new (static_cast<void*>(addressof(*dest)))
        typename iterator_traits<ForwardIterator>::value_type(std::move(*first));
return dest;
```

If an exception is thrown, some objects in the source range might be left in a valid but unspecified state. Previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

These functions are new in C++17.

## <a name="uninitialized_move_n"></a> uninitialized_move_n

Moves a specified number of elements from a source range to an uninitialized destination memory area.

```cpp
template <class InputIterator, class Size, class ForwardIterator>
pair<InputIterator, ForwardIterator> uninitialized_move_n(
    InputIterator first,
    Size count,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class Size, class ForwardIterator>
pair<InputIterator, ForwardIterator> uninitialized_move_n(
    ExecutionPolicy&& policy,
    InputIterator first,
    Size count,
    ForwardIterator dest);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An input iterator addressing the first element in the source range to move.

*count*\
The count of elements in the source range to move.

*dest*\
The beginning of the destination range.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; count > 0; ++dest, (void) ++first, --count)
    ::new (static_cast<void*>(addressof(*dest)))
        typename iterator_traits<ForwardIterator>::value_type(std::move(*first));
return {first, dest};
```

If an exception is thrown, some objects in the source range might be left in a valid but unspecified state. Previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

These functions are new in C++17.

## <a name="uninitialized_value_construct"></a> uninitialized_value_construct

Constructs objects of the iterators' `value_type` by value initialization, in the specified range.

```cpp
template <class ForwardIterator>
void uninitialized_value_construct(
    ForwardIterator first,
    ForwardIterator last);

template <class ExecutionPolicy, class ForwardIterator>
void uninitialized_value_construct(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An iterator addressing the first element in the range to value construct.

*last*\
An iterator addressing one past the last element in the range to value construct.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; first != last; ++first)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type();
```

If an exception is thrown, previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

If a memory allocation failure occurs, a `std::bad_alloc` exception is thrown.

These functions are new in C++17.

## <a name="uninitialized_value_construct_n"></a> uninitialized_value_construct_n

Constructs a specified number of objects of the iterator's `value_type` by value initialization, starting at the specified location.

```cpp
template <class ForwardIterator, class Size>
ForwardIterator uninitialized_value_construct_n(
    ForwardIterator first,
    Size count);

template <class ExecutionPolicy, class ForwardIterator, class Size>
ForwardIterator uninitialized_value_construct_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count);
```

### Parameters

*policy*\
The execution policy to use.

*first*\
An iterator addressing the first element in the destination range to construct.

*count*\
The count of elements in the destination range to construct.

### Remarks

The version without an execution policy is effectively the same as:

```cpp
for (; count > 0; (void)++first, --count)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type();
return first;
```

If an exception is thrown, previously constructed objects are destroyed in unspecified order.

The version with an execution policy has the same result, but executes according to the specified *policy*.

If a memory allocation failure occurs, a `std::bad_alloc` exception is thrown.

These functions are new in C++17.

## <a name="uses_allocator_v"></a> uses_allocator_v

A helper variable template to access the value of the `uses_allocator` template.

```cpp
template <class T, class Alloc>
inline constexpr bool uses_allocator_v = uses_allocator<T, Alloc>::value;
```

## See also

[\<memory>](memory.md)
