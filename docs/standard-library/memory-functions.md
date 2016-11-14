---
title: "&lt;memory&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3e1898c2-44b7-4626-87ce-84962e4c6f1a
caps.latest.revision: 12
manager: "ghogen"
---
# &lt;memory&gt; functions
||||  
|-|-|-|  
|[addressof](#addressof)|[align](#align)|[allocate_shared](#allocate_shared)|  
|[const_pointer_cast](#const_pointer_cast)|[declare_no_pointers](#declare_no_pointers)|[declare_reachable](#declare_reachable)|  
|[default_delete](#default_delete)|[dynamic_pointer_cast](#dynamic_pointer_cast)|[get_deleter Function](#get_deleter_function)|  
|[get_pointer_safety](#get_pointer_safety)|[get_temporary_buffer](#get_temporary_buffer)|[make_shared](#make_shared)|  
|[make_unique](#make_unique)|[owner_less](#owner_less)|[return_temporary_buffer](#return_temporary_buffer)|  
|[static_pointer_cast](#static_pointer_cast)|[swap (C++ Standard Library)](#swap)|[undeclare_no_pointers](#undeclare_no_pointers)|  
|[undeclare_reachable](#undeclare_reachable)|[uninitialized_copy](#uninitialized_copy)|[uninitialized_copy_n](#uninitialized_copy_n)|  
|[uninitialized_fill](#uninitialized_fill)|[uninitialized_fill_n](#uninitialized_fill_n)|  
  
##  <a name="addressof"></a>  addressof  
 Gets the true address of an object.  
  
```  
template <class T>  
T* addressof(T& Val);
```  
  
### Parameters  
 `Val`  
 The object or function for which to obtain the true address.  
  
### Return Value  
 The actual address of the object or function referenced by `Val`, even if an overloaded `operator&()` exists.  
  
### Remarks  
  
##  <a name="align"></a>  align  
 Fits storage of the given size—aligned by the given alignment specification—into the first possible address of the given storage.  
  
```  
void* align(
    size_t Alignment, // input  
    size_t Size,   // input  
    void*& Ptr        // input/output  
    size_t& Space     // input/output);
```  
  
### Parameters  
 `Alignment`  
 The alignment bound to attempt.  
  
 `Size`  
 The size in bytes for the aligned storage.  
  
 `Ptr`  
 The starting address of the available contiguous storage pool to use. This parameter is also an output parameter, and will contain the new starting address if the alignment is successful.  
  
 If `align()` is unsuccessful, this parameter is not modified.  
  
 `Space`  
 The total space available to `align()` to use in creating the aligned storage. This parameter is also an output parameter, and contains the adjusted space left in the storage buffer after the aligned storage and any associated overhead is subtracted.  
  
 If `align()` is unsuccessful, this parameter is not modified.  
  
### Return Value  
 A null pointer if the requested aligned buffer would not fit into the available space; otherwise, the new value of `Ptr`.  
  
### Remarks  
 The modified `Ptr` and `Space` parameters enable you to call `align()` repeatedly on the same buffer, possibly with different values for `Alignment` and `Size`. The following code snippet shows one use of `align()`.  
  
```cpp  
  
#include <type_traits> // std::alignment_of()  
#include <memory>  
//...  
char buffer[256]; // for simplicity  
size_t alignment = std::alignment_of<int>::value;  
void * ptr = buffer;  
std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer  
  
while (alignment, sizeof(MyObj), ptr, space)) {  
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
  
##  <a name="allocate_shared"></a>  allocate_shared  
 Creates a `shared_ptr` to objects that are allocated and constructed for a given type by using a specified allocator. Returns the `shared_ptr`.  
  
```  
template <class Type, class Allocator, class... Types>  
shared_ptr<Type>  
allocate_shared(Allocator Alloc, Types&&... Args);
```  
  
### Parameters  
 `Alloc`  
 The allocator used to create objects.  
  
 `Args`  
 The zero or more arguments that become the objects.  
  
### Remarks  
 The function creates the object `shared_ptr``<Type>`, a pointer to `Type(``Args``...)` as allocated and constructed by `Alloc`.  
  
##  <a name="const_pointer_cast"></a>  const_pointer_cast  
 Const cast to shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
const_pointer_cast(const shared_ptr<Other>& sp);
```  
  
### Parameters  
 `Ty`  
 The type controlled by the returned shared pointer.  
  
 `Other`  
 The type controlled by the argument shared pointer.  
  
 `Other`  
 The argument shared pointer.  
  
### Remarks  
 The template function returns an empty shared_ptr object if `const_cast<Ty*>(sp.get())` returns a null pointer; otherwise it returns a [shared_ptr Class](../standard-library/shared-ptr-class.md)`<Ty>` object that owns the resource that is owned by `sp`. The expression `const_cast<Ty*>(sp.get())` must be valid.  
  
### Example  
  
```cpp  
// std_tr1__memory__const_pointer_cast.cpp   
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
  
##  <a name="declare_no_pointers"></a>  declare_no_pointers  
 Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size contains no traceable pointers.  
  
```  
void declare_no_pointers(
    char* ptr,   
    size_t _Size);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|` ptr`|Address of first character that no longer contains traceable pointers.|  
|`_Size`|Size of block that starts at ` ptr` that contains no traceable pointers.|  
  
### Remarks  
 The function informs any `garbage collector` that the range of addresses `[`` ptr``,` ` ptr` `+` `_Size``)` no longer contain traceable pointers. (Any pointers to allocated storage must not be dereferenced unless made `reachable`.)  
  
##  <a name="declare_reachable"></a>  declare_reachable  
 Informs garbage collection that the indicated address is to allocated storage and is reachable.  
  
```  
void declare_reachable(void* ptr);
```  
  
### Parameters  
 ` ptr`  
 A pointer to a reachable, allocated, valid storage area.  
  
### Remarks  
 If ` ptr` is not null, the function informs any garbage collector that ` ptr` is hereafter reachable (points to valid allocated storage).  
  
##  <a name="default_delete"></a>  default_delete  
 Deletes objects allocated with `operator new`. Suitable for use with `unique_ptr`.  
```  
struct default_delete {
   constexpr default_delete() noexcept = default;
   template <class Other, class = typename enable_if<is_convertible<Other*, T*>::value, void>::type>>  
   default_delete(const default_delete<Other>&) noexcept;
   void operator()(T* Ptr) const noexcept;     };  
```
### Parameters  
 `Ptr`  
 Pointer to the object to delete.  
  
 Other  
 The type of elements in the array to be deleted.  
  
### Remarks  
 The template class describes a `deleter` that deletes scalar objects allocated with `operator new`, suitable for use with template class `unique_ptr`. It also has the explicit specialization `default_delete<Type[]>`.  
  
##  <a name="dynamic_pointer_cast"></a>  dynamic_pointer_cast  
 Dynamic cast to shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
dynamic_pointer_cast(const shared_ptr`<`Other>& sp);
```  
  
### Parameters  
 `Ty`  
 The type controlled by the returned shared pointer.  
  
 `Other`  
 The type controlled by the argument shared pointer.  
  
 `sp`  
 The argument shared pointer.  
  
### Remarks  
 The template function returns an empty shared_ptr object if `dynamic_cast<Ty*>(sp.get())` returns a null pointer; otherwise it returns a [shared_ptr Class](../standard-library/shared-ptr-class.md)`<Ty>` object that owns the resource that is owned by `sp`. The expression `dynamic_cast<Ty*>(sp.get())` must be valid.  
  
### Example  
  
```cpp  
// std_tr1__memory__dynamic_pointer_cast.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    virtual ~base()   
        {   
        }   
  
    int val;   
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
  
    sp0->val = 3;   
    std::cout << "sp1->val == " << sp1->val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp1->val == 3  
```  
  
##  <a name="get_deleter_function"></a>  get_deleter Function  
 Get deleter from shared_ptr.  
  
```  
template <class D, class Ty>  
D *get_deleter(const shared_ptr<Ty>& sp);
```  
  
### Parameters  
 `D`  
 The type of the deleter.  
  
 `Ty`  
 The type controlled by the shared pointer.  
  
 `Other`  
 The shared pointer.  
  
### Remarks  
 The template function returns a pointer to the deleter of type `D` that belongs to the [shared_ptr Class](../standard-library/shared-ptr-class.md) object `sp`. If `sp` has no deleter or if its deleter is not of type `D` the function returns 0.  
  
### Example  
  
```cpp  
// std_tr1__memory__get_deleter.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct deleter   
    {   
    void operator()(base *p)   
        {   
        delete p;   
        }   
    };   
  
int main()   
    {   
    std::shared_ptr<base> sp0(new base);   
  
    sp0->val = 3;   
    std::cout << "get_deleter(sp0) != 0 == " << std::boolalpha   
        << (std::get_deleter<deleter>(sp0) != 0) << std::endl;   
  
    std::shared_ptr<base> sp1(new base, deleter());   
  
    sp0->val = 3;   
    std::cout << "get_deleter(sp1) != 0 == " << std::boolalpha   
        << (std::get_deleter<deleter>(sp1) != 0) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
get_deleter(sp0) != 0 == false  
get_deleter(sp1) != 0 == true  
```  
  
##  <a name="get_pointer_safety"></a>  get_pointer_safety  
 Returns the type of pointer safety assumed by any garbage collector.  
  
```  
pointer_safety get_pointer_safety();
```  
  
### Remarks  
 The function returns the type of pointer safety assumed by any automatic `garbage collector`.  
  
##  <a name="get_temporary_buffer"></a>  get_temporary_buffer  
 Allocates temporary storage for a sequence of elements that does not exceed a specified number of elements.  
  
```  
template <class Type>  
pair<Type *, ptrdiff_t> get_temporary_buffer(ptrdiff_t count);
```  
  
### Parameters  
 ` count`  
 The maximum number of elements requested for which memory is to be allocated.  
  
### Return Value  
 A `pair` whose first component is a pointer to the memory that was allocated, and whose second component gives the size of the buffer, indicating the largest number of elements that it could store.  
  
### Remarks  
 The function makes a request for memory and it may not succeed. If no buffer is allocated, then the function returns a pair, with the second component equal to zero and the first component equal to the null pointer.  
  
 This function should only be used for memory that is temporary.  
  
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
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };  
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
  
##  <a name="make_shared"></a>  make_shared  
 Creates and returns a `shared_ptr` that points to the allocated objects that are constructed from zero or more arguments by using the default allocator. Allocates and constructs both an object of the specified type and a `shared_ptr` to manage shared ownership of the object, and returns the `shared_ptr`.  
  
```  
template <class Type, class... Types>  
shared_ptr<Type>  
make_shared(
    Types&&... _Args);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Args`|Zero or more constructor arguments. The function infers which constructor overload to invoke based on the arguments that are provided.|  
  
### Remarks  
 Use `make_shared` as a simple and more efficient way to create an object and a `shared_ptr` to manage shared access to the object at the same time. Semantically, these two statements are equivalent:  
  
```cpp  
auto sp = std::shared_ptr<Example>(new Example(argument));
auto msp = std::make_shared<Example>(argument);
```  
  
 However, the first statement makes two allocations, and if the allocation of the `shared_ptr` fails after the allocation of the `Example` object has succeeded, then the unnamed `Example` object is leaked. The statement that uses `make_shared` is simpler because there's only one function call involved. It's more efficient because the library can make a single allocation for both the object and the smart pointer. This is both faster and leads to less memory fragmentation, and there is no chance of an exception on one allocation but not the other. Performance is improved by better locality for code that references the object and updates the reference counts in the smart pointer.  
  
 Consider using [make_unique](../standard-library/memory-functions.md#make_unique) if you do not need shared access to the object. Use [allocate_shared](../standard-library/memory-functions.md#allocate_shared) if you need to specify a custom allocator for the object. You can't use `make_shared` if your object requires a custom deleter, because there is no way to pass the deleter as an argument.  
  
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
  
void CreateSharedPointers() {  
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
   for (auto&& sp : playlist) {  
      std::wcout << L"Playing " << sp->title_ <<   
         L" by " << sp->artist_ << L", use count: " <<   
         sp.use_count() << std::endl;  
   }  
}  
  
int main() {  
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
  
##  <a name="make_unique"></a>  make_unique  
 Creates and returns a [unique_ptr](../standard-library/unique-ptr-class.md) to an object of the specified type, which is constructed by using the specified arguments.  
  
```scr  
// make_unique<T>template <class T,   
    class... Types>  
unique_ptr<T> make_unique(Types&&... Args)  
 {  
    return (unique_ptr<T>(new T(forward<Types>(Args)...)));

 }  
// make_unique<T[]>  
template <class T>  
make_unique(size_t Size)   
 {   
    return (unique_ptr<T>(new Elem[Size]()));

 }  
 
// make_unique<T[N]> disallowed  
template <class T,   
    class... Types>  
typename enable_if<extent<T>::value != 0,   
    void>::type make_unique(Types&&...) = delete;  
```  
  
### Parameters  
 `T`  
 The type of the object that the `unique_ptr` will point to.  
  
 `Types`  
 The types of the constructor arguments specified by `Args`.  
  
 `Args`  
 The arguments to be passed to the constructor of the object of type `T`.  
  
 `Elem`  
 An array of elements of type `T`.  
  
 `Size`  
 The number of elements to allocate space for in the new array.  
  
### Remarks  
 The first overload is used for single objects, the second overload is invoked for arrays, and the third overload prevents the prevents you from specifying an array size in the type argument (make_unique\<T[N]>); this construction is not supported by the current standard. When you use `make_unique` to create a `unique_ptr` to an array, you have to initialize the array elements separately. If you are considering this overload, perhaps a better choice is to use a [std::vector](../standard-library/vector-class.md).  
  
 Because `make_unique` is carefully implemented for exception safety, we recommend that you use `make_unique` instead of directly calling `unique_ptr` constructors.  
  
### Example  
  The following example shows how to use `make_unique`. For more examples, see [How to: Create and Use unique_ptr Instances](../cpp/how-to-create-and-use-unique-ptr-instances.md).  
  
 [!code-cpp[stl_smart_pointers#214](../cpp/codesnippet/CPP/memory-functions_1.cpp)]  
  
  When you see error C2280 in connection with a `unique_ptr`, it is almost certainly because you are attempting to invoke its copy constructor, which is a deleted function.  
  
##  <a name="owner_less"></a>  owner_less  
 Allows ownership-based mixed comparisons of shared and weak pointers. Returns `true` if the left parameter is ordered before right parameter by the member function `owner_before`.  
  
```  
template <class Type>  
struct owner_less; // not defined  
 
template <class Type>  
struct owner_less<shared_ptr<Type>> {  
    bool operator()(
    const shared_ptr<Type>& left,  
    const shared_ptr<Type>& right);

    bool operator()(
    const shared_ptr<Type>& left,  
    const weak_ptr<Type>& right);

    bool operator()(
    const weak_ptr<Type>& left,  
    const shared_ptr<Type>& right);

};  
 
template <class Type>  
struct owner_less<weak_ptr<Type>>  
    bool operator()(
    const weak_ptr<Type>& left,  
    const weak_ptr<Type>& right);

    bool operator()(
    const weak_ptr<Type>& left,  
    const shared_ptr<Ty>& right);

    bool operator()(
    const shared_ptr<Type>& left,  
    const weak_ptr<Type>& right);

};  
```  
  
### Parameters  
 `_left`  
 A shared or weak pointer.  
  
 ` right`  
 A shared or weak pointer.  
  
### Remarks  
 The template classes define all their member operators as returning ` left``.owner_before(`` right``)`.  
  
##  <a name="return_temporary_buffer"></a>  return_temporary_buffer  
 Deallocates the temporary memory that was allocated using the `get_temporary_buffer` template function.  
  
```  
template <class Type>  
void return_temporary_buffer(Type* _Pbuf);
```  
  
### Parameters  
 *_Pbuf*  
 A pointer to the memory to be deallocated.  
  
### Remarks  
 This function should only be used for memory that is temporary.  
  
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
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300 };  
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
   return_temporary_buffer ( tempBuffer );  
}  
```  
  
```Output  
The number of integers in the array is: 7.  
The number of elements that the allocated memory  
 could store is given by: resultPair.second = 7.  
```  
  
##  <a name="static_pointer_cast"></a>  static_pointer_cast  
 Static cast to shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
static_pointer_cast(const shared_ptr<Other>& sp);
```  
  
### Parameters  
 `Ty`  
 The type controlled by the returned shared pointer.  
  
 `Other`  
 The type controlled by the argument shared pointer.  
  
 `Other`  
 The argument shared pointer.  
  
### Remarks  
 The template function returns an empty shared_ptr object if `sp` is an empty `shared_ptr` object; otherwise it returns a [shared_ptr Class](../standard-library/shared-ptr-class.md)`<Ty>` object that owns the resource that is owned by `sp`. The expression `static_cast<Ty*>(sp.get())` must be valid.  
  
### Example  
  
```cpp  
// std_tr1__memory__static_pointer_cast.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    int val;   
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
  
    sp0->val = 3;   
    std::cout << "sp1->val == " << sp1->val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp1->val == 3  
```  
  
##  <a name="swap"></a>  swap (C++ Standard Library)  
 Swap two shared_ptr or weak_ptr objects.  
  
```  
template <class Ty, class Other>  
void swap(shared_ptr<Ty>& left, shared_ptr<Other>& right);

template <class Ty, class Other>  
void swap(weak_ptr<Ty>& left, weak_ptr<Other>& right);
```  
  
### Parameters  
 `Ty`  
 The type controlled by the left shared/weak pointer.  
  
 `Other`  
 The type controlled by the right shared/weak pointer.  
  
 `left`  
 The left shared/weak pointer.  
  
 `right`  
 The right shared/weak pointer.  
  
### Remarks  
 The template functions call `left.swap(right)`.  
  
### Example  
  
```cpp  
// std_tr1__memory__swap.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

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
  
##  <a name="undeclare_no_pointers"></a>  undeclare_no_pointers  
 Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size may now contain traceable pointers.  
  
```  
void undeclare_no_pointers(
    char* ptr,   
    size_t _Size);
```  
  
### Remarks  
 The function informs any `garbage collector` that the range of addresses `[`` ptr``,` ` ptr` `+` `_Size``)` may now contain `traceable pointers`.  
  
##  <a name="undeclare_reachable"></a>  undeclare_reachable  
 Informs a `garbage_collector` that a specified memory location is not reachable.  
  
```  
template <class Type>  
Type *undeclare_reachable(Type* ptr);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|` ptr`|A pointer to the memory address to be declared not reachable.|  
  
### Remarks  
 If ` ptr` is not `null`, the function informs any `garbage collector` that ` ptr` is hereafter not `reachable`. It returns a `safely derived` pointer that compares equal to ` ptr`.  
  
##  <a name="uninitialized_copy"></a>  uninitialized_copy  
 Copies objects from a specified source range into an uninitialized destination range.  
  
```  
template <class InputIterator, class ForwardIterator>  
ForwardIterator uninitialized_copy(InputIterator first, InputIterator last, ForwardIterator dest);
```  
  
### Parameters  
 ` first`  
 An input iterator addressing the first element in the source range.  
  
 ` last`  
 An input iterator addressing the last element in the source range.  
  
 ` dest`  
 A forward iterator addressing the first element in the destination range.  
  
### Return Value  
 A forward iterator addressing the first position beyond the destination range, unless the source range was empty and iterator addresses * first.*  
  
### Remarks  
 This algorithm allows the decoupling of memory allocation from object construction.  
  
 The template function effectively executes:  
  
```  
while (first!= last)  
    new ((void*)&* dest ++)  
    iterator_traits<InputIterator>::value_type (* first ++);

return first;  
```  
  
 unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.  
  
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
    Integer(int x) : val(x) {}
    int get() { return val; }
private:
    int val;
};

int main()
{
    int Array[] = { 10, 20, 30, 40 };
    const int N = sizeof(Array) / sizeof(int);

    int i;
    cout << "The initialized Array contains " << N << " elements: ";
    for (i = 0; i < N; i++)
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
  
##  <a name="uninitialized_copy_n"></a>  uninitialized_copy_n  
 Creates a copy of a specified number of elements from an input iterator. The copies are put in a forward iterator.  
  
```  
template <class InputIterator, class Size, class ForwardIterator>  
ForwardIterator uninitialized_copy_n(
    InputIterator first,   
    Size count,  
    ForwardIterator dest);
```  
  
### Parameters  
 ` first`  
 An input iterator that refers to the object to copy.  
  
 ` count`  
 A signed or unsigned integer type specifying the number of times to copy the object.  
  
 ` dest`  
 A forward iterator that refers to where the new copies go.  
  
### Return Value  
 A forward iterator that addresses the first position beyond the destination. If the source range was empty, the iterator addresses ` first`*.*  
  
### Remarks  
 The template function effectively executes the following:  
  
 `for (; 0 < count; -- count)`  
  
 `new ((void *)&*` ` dest` `++)`  
  
 `iterator_traits<InputIterator>::value_type(*` ` first` `++);`  
  
 `return dest;`  
  
 unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.  
  
##  <a name="uninitialized_fill"></a>  uninitialized_fill  
 Copies objects of a specified value into an uninitialized destination range.  
  
```  
template <class ForwardIterator, class Type>  
void uninitialized_fill(ForwardIterator first, ForwardIterator last, const Type& val);
```  
  
### Parameters  
 ` first`  
 A forward iterator addressing the first element in the destination range that is to be initiated.  
  
 ` last`  
 A forward iterator addressing the last element in the destination range that is to be initiated.  
  
 ` val`  
 The value to be used to initialize the destination range.  
  
### Remarks  
 This algorithm allows the decoupling of memory allocation from object construction.  
  
 The template function effectively executes:  
  
```  
while (first != last)  
    new ((void*)&* first ++)  
    iterator_traits<ForwardIterator>::value_type (_Val);
```  
  
 unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.  
  
### Example  
  
```cpp  
// memory_uninit_fill.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
  
using namespace std;  
  
   class Integer {         // No default constructor  
   public:  
      Integer( int x ) : val( x ) {}  
      int get( ) { return val; }  
   private:  
      int val;  
   };  
  
int main( )  
{  
   const int N = 10;  
   Integer val ( 25 );  
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );  
   uninitialized_fill( Array, Array + N, val );  
   int i;  
   cout << "The initialized Array contains: ";  
      for ( i = 0 ; i < N; i++ )  
      {  
         cout << Array [ i ].get( ) << " ";  
      }  
   cout << endl;  
}  
```  
  
```Output  
The initialized Array contains: 25 25 25 25 25 25 25 25 25 25   
```  
  
##  <a name="uninitialized_fill_n"></a>  uninitialized_fill_n  
 Copies objects of a specified value into specified number of elements into an uninitialized destination range.  
  
```  
template <class FwdIt, class Size, class Type>  
void uninitialized_fill_n(ForwardIterator first, Size count, const Type& val);
```  
  
### Parameters  
 ` first`  
 A forward iterator addressing the first element in the destination range to be initiated.  
  
 ` count`  
 The number of elements to be initialized.  
  
 ` val`  
 The value to be used to initialize the destination range.  
  
### Remarks  
 This algorithm allows the decoupling of memory allocation from object construction.  
  
 The template function effectively executes:  
  
```cpp  
while (0 <count--)  
    new ((void*)&* first ++)  
    iterator_traits<ForwardIterator>::value_type(val);
```  
  
 unless the code throws an exception. In that case, all constructed objects are destroyed and the exception is rethrown.  
  
### Example  
  
```cpp  
// memory_uninit_fill_n.cpp  
// compile with: /EHsc /W3  
#include <memory>  
#include <iostream>  
  
using namespace std;  
  
class Integer {   // No default constructor  
public:  
   Integer( int x ) : val( x ) {}  
   int get( ) { return val; }  
private:  
   int val;  
};  
  
int main() {  
   const int N = 10;  
   Integer val ( 60 );  
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );  
   uninitialized_fill_n( Array, N, val );  // C4996  
   int i;  
   cout << "The uninitialized Array contains: ";  
   for ( i = 0 ; i < N; i++ )  
      cout << Array [ i ].get( ) <<  " ";  
}  
```  
  
## See Also  
 [\<memory>](../standard-library/memory.md)
