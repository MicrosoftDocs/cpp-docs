---
title: "auto_ptr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::auto_ptr"
  - "std.auto_ptr"
  - "auto_ptr"
  - "memory/std::auto_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_ptr class"
ms.assetid: 7f9108b6-9eb3-4634-b615-cf7aa814f23b
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# auto_ptr Class
Wraps a smart pointer around a resource that ensures the resource is destroyed automatically when control leaves a block.  
  
 The more capable `unique_ptr` class supersedes `auto_ptr`. For more information, see [unique_ptr Class](../standard-library/unique-ptr-class.md).  
  
 For more information about `throw()` and exception handling, see [Exception Specifications (throw)](../cpp/exception-specifications-throw-cpp.md).  
  
## Syntax  
 ```   
class auto_ptr {
public:
    typedef Type element_type;
    explicit auto_ptr(Type* ptr = 0) throw();
    auto_ptr(auto_ptr<Type>& right) throw()
        ;
    template <class Other>
    operator auto_ptr<Other>() throw();
    template <class Other>
    auto_ptr<Type>& operator=(auto_ptr<Other>& right) throw();
    template <class Other>
    auto_ptr(auto_ptr<Other>& right);
    auto_ptr<Type>& operator=(auto_ptr<Type>& right);
    ~auto_ptr();
    Type& operator*() const throw();
    Type * operator->()const throw();
    Type *get() const throw();
    Type *release()throw();
    void reset(Type* ptr = 0);
};
```  
#### Parameters  
 ` right`  
 The `auto_ptr` from which to get an existing resource.  
  
 ` ptr`  
 The pointer specified to replace the stored pointer.  
  
## Remarks  
 The template class describes a smart pointer, called an `auto_ptr,` to an allocated object. The pointer must be either null or designate an object allocated by `new`. The `auto_ptr` transfers ownership if its stored value is assigned to another object. (It replaces the stored value after a transfer with a null pointer.) The destructor for `auto_ptr<Type>` deletes the allocated object. The `auto_ptr<Type>` ensures that an allocated object is automatically deleted when control leaves a block, even through a thrown exception. You should not construct two `auto_ptr<Type>` objects that own the same object.  
  
 You can pass an `auto_ptr<Type>` object by value as an argument to a function call. An `auto_ptr` cannot be an element of any Standard Library container. You cannot reliably manage a sequence of `auto_ptr<Type>` objects with a Standard Template Library container.  
  
## Members  
  
### Constructors  
  
|||  
|-|-|  
|[auto_ptr](#auto_ptr__auto_ptr)|The constructor for objects of type `auto_ptr`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[element_type](#auto_ptr__element_type)|The type is a synonym for the template parameter `Type`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[get](#auto_ptr__get)|The member function returns the stored pointer `myptr`.|  
|[release](#auto_ptr__release)|The member replaces the stored pointer `myptr` with a null pointer and returns the previously stored pointer.|  
|[reset](#auto_ptr__reset)|The member function evaluates the expression `deleteÂ myptr`, but only if the stored pointer value `myptr` changes as a result of function call. It then replaces the stored pointer with `ptr`.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#auto_ptr__operator_eq)|An assignment operator that transfers ownership from one `auto_ptr` object to another.|  
|[operator*](#auto_ptr__operator_star)|The dereferencing operator for objects of type `auto_ptr`.|  
|[operator->](#auto_ptr__operator-_gt_)|The operator for allowing member access.|  
|[operator auto_ptr\<Other>](#auto_ptr__operator_auto_ptr_lt_other_gt_)|Casts from one kind of `auto_ptr` to another kind of `auto_ptr`.|  
|[operator auto_ptr_ref\<Other>](#auto_ptr__operator_auto_ptr_ref_lt_other_gt_)|Casts from an `auto_ptr` to an `auto_ptr_ref`.|  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
##  <a name="auto_ptr__auto_ptr"></a>  auto_ptr::auto_ptr  
 The constructor for objects of type `auto_ptr`.  
  
```   
explicit auto_ptr(Type* ptr  = 0) throw();

auto_ptr(auto_ptr<Type>& right) throw();

auto_ptr(auto _ptr_ref<Type> right) throw();

template <class Other>  
auto _ptr(auto _ptr<Other>& right) throw();
```  
  
### Parameters  
 ` ptr`  
 The pointer to the object that `auto_ptr` encapsulates.  
  
 ` right`  
 The `auto_ptr` object to be copied by the constructor.  
  
### Remarks  
 The first constructor stores ` ptr` in **myptr**, the stored pointer to the allocated object. The second constructor transfers ownership of the pointer stored in ` right`, by storing ` right`. [release](#auto_ptr__release) in **myptr**.  
  
 The third constructor behaves the same as the second, except that it stores **right**. `ref`. **release** in **myptr**, where `ref` is the reference stored in ` right`.  
  
 The template constructor behaves the same as the second constructor, provided that a pointer to **Other** can be implicitly converted to a pointer to **Type**.  
  
### Example  
  
```cpp  
// auto_ptr_auto_ptr.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
class Int   
{  
public:  
   Int(int i)   
   {  
      cout << "Constructing " << ( void* )this  << endl;   
      x = i;  
      bIsConstructed = true;  
   };  
   ~Int( )   
   {  
      cout << "Destructing " << ( void* )this << endl;   
      bIsConstructed = false;  
   };  
   Int &operator++( )   
   {  
      x++;  
      return *this;  
   };  
   int x;  
private:  
   bool bIsConstructed;  
};  
  
void function ( auto_ptr<Int> &pi )  
{  
   ++( *pi );  
   auto_ptr<Int> pi2( pi );  
   ++( *pi2 );  
   pi = pi2;  
}  
  
int main( )   
{  
   auto_ptr<Int> pi ( new Int( 5 ) );  
   cout << pi->x << endl;  
   function( pi );  
   cout << pi->x << endl;  
}  
```  
  
```Output  
Constructing 00311AF8  
5  
7  
Destructing 00311AF8  
```  
  
##  <a name="auto_ptr__element_type"></a>  auto_ptr::element_type  
 The type is a synonym for the template parameter **Type**.  
  
```  
 
typedef Type element  _type;  
```  
  
##  <a name="auto_ptr__get"></a>  auto_ptr::get  
 The member function returns the stored pointer **myptr**.  
  
```   
Type *get() const throw();
```  
  
### Return Value  
 The stored pointer **myptr**.  
  
### Example  
  
```cpp  
// auto_ptr_get.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
class Int   
{  
public:  
   Int(int i)   
   {  
      x = i;  
      cout << "Constructing " << ( void* )this  << " Value: " << x << endl;   
   };  
   ~Int( )   
   {  
      cout << "Destructing " << ( void* )this << " Value: " << x << endl;   
   };  
  
   int x;  
  
};  
  
int main( )   
{  
   auto_ptr<Int> pi ( new Int( 5 ) );  
   pi.reset( new Int( 6 ) );  
   Int* pi2 = pi.get ( );  
   Int* pi3 = pi.release ( );  
   if (pi2 == pi3)  
      cout << "pi2 == pi3" << endl;  
   delete pi3;  
}  
```  
  
```Output  
Constructing 00311AF8 Value: 5  
Constructing 00311B88 Value: 6  
Destructing 00311AF8 Value: 5  
pi2 == pi3  
Destructing 00311B88 Value: 6  
```  
  
##  <a name="auto_ptr__operator_eq"></a>  auto_ptr::operator=  
 An assignment operator that transfers ownership from one `auto_ptr` object to another.  
  
```  
template <class Other>  
auto_ptr<Type>& operator=(auto_ptr<Other>& right) throw();
auto_ptr<Type>& operator=(auto_ptr<Type>& right) throw();
auto_ptr<Type>& operator=(auto_ptr_ref<Type> right) throw();
```  
  
### Parameters  
 ` right`  
 An object of type `auto_ptr`.  
  
### Return Value  
 A reference to an object of type `auto_ptr`\< **Type**>.  
  
### Remarks  
 The assignment evaluates the expression **delete myptr**, but only if the stored pointer **myptr** changes as a result of the assignment. It then transfers ownership of the pointer stored in _ *Right*, by storing \_ *Right*. [release](#auto_ptr__release) in **myptr**. The function returns **\*this**.  
  
### Example  
  For an example of the use of the member operator, see [auto_ptr::auto_ptr](#auto_ptr__auto_ptr).  
  
##  <a name="auto_ptr__operator_star"></a>  auto_ptr::operator*  
 The dereferencing operator for objects of type `auto_ptr`.  
  
```   
Type& operator*() const throw();
```  
  
### Return Value  
 A reference to an object of type **Type** that the pointer owns.  
  
### Remarks  
 The indirection operator returns `*`[get](#auto_ptr__get). Hence, the stored pointer must not be null.  
  
### Example  
  For an example of how to use the member function, see [auto_ptr::auto_ptr](#auto_ptr__auto_ptr).  
  
##  <a name="auto_ptr__operator-_gt_"></a>  auto_ptr::operator-&gt;  
 The operator for allowing member access.  
  
```   
Type * operator->() const throw();
```  
  
### Return Value  
 A member of the object that **auto_ptr** owns.  
  
### Remarks  
 The selection operator returns [get](#auto_ptr__get)`( )`, so that the expression *ap*-> **member** behaves the same as ( *ap*. **get**( ) )-> **member**, where *ap* is an object of class `auto_ptr`\< **Type**>. Hence, the stored pointer must not be null, and **Type** must be a class, struct, or union type with a **member** member.  
  
### Example  
  For an example of how to use the member function, see [auto_ptr::auto_ptr](#auto_ptr__auto_ptr).  
  
##  <a name="auto_ptr__operator_auto_ptr_lt_other_gt_"></a>  auto_ptr::operator auto_ptr&lt;Other&gt;  
 Casts from one kind of `auto_ptr` to another kind of `auto_ptr`.  
  
```   
template <class Other>  
operator auto _ptr<Other>() throw();
```  
  
### Return Value  
 The type cast operator returns `auto_ptr` \< **Other**>( **\*this**).  
  
### Example  
  
```cpp  
// auto_ptr_op_auto_ptr.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
int main()  
{  
   auto_ptr<int> pi ( new int( 5 ) );  
   auto_ptr<const int> pc = ( auto_ptr<const int> )pi;  
}  
```  
  
##  <a name="auto_ptr__operator_auto_ptr_ref_lt_other_gt_"></a>  auto_ptr::operator auto_ptr_ref&lt;Other&gt;  
 Casts from an `auto_ptr` to an **auto_ptr_ref**.  
  
```   
template <class Other>  
operator auto _ptr  _ref<Other>() throw();
```  
  
### Return Value  
 The type cast operator returns **auto_ptr_ref**\< **Other**>( **\*this**).  
  
### Example  
  
```cpp  
// auto_ptr_op_auto_ptr_ref.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
class C {
public:
    C(int _i) : m_i(_i) {
    }
    ~C() {
        cout << "~C:  " << m_i << "\n";
    }
    C &operator =(const int &x) {
        m_i = x;
        return *this;
    }
    int m_i;
};
void f(auto_ptr<C> arg) {
};
int main()
{
    const auto_ptr<C> ciap(new C(1));
    auto_ptr<C> iap(new C(2));

    // Error: this implies transfer of ownership of iap's pointer  
    // f(ciap);   
    f(iap); // compiles, but gives up ownership of pointer  

            // here, iap owns a destroyed pointer so the following is bad:  
            // *iap = 5; // BOOM  

    cout << "main exiting\n";
}
```  
  
```Output  
~C:  2  
main exiting  
~C:  1  
```  
  
##  <a name="auto_ptr__release"></a>  auto_ptr::release  
 The member replaces the stored pointer **myptr** with a null pointer and returns the previously stored pointer.  
  
```   
Type *release() throw();
```  
  
### Return Value  
 The previously stored pointer.  
  
### Remarks  
 The member replaces the stored pointer **myptr** with a null pointer and returns the previously stored pointer.  
  
### Example  
  
```cpp  
// auto_ptr_release.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
class Int
{
public:
    Int(int i)
    {
        x = i;
        cout << "Constructing " << (void*)this << " Value: " << x << endl;
    };
    ~Int() {
        cout << "Destructing " << (void*)this << " Value: " << x << endl;
    };

    int x;

};

int main()
{
    auto_ptr<Int> pi(new Int(5));
    pi.reset(new Int(6));
    Int* pi2 = pi.get();
    Int* pi3 = pi.release();
    if (pi2 == pi3)
        cout << "pi2 == pi3" << endl;
    delete pi3;
}
```  
  
```Output  
Constructing 00311AF8 Value: 5  
Constructing 00311B88 Value: 6  
Destructing 00311AF8 Value: 5  
pi2 == pi3  
Destructing 00311B88 Value: 6  
```  
  
##  <a name="auto_ptr__reset"></a>  auto_ptr::reset  
 The member function evaluates the expression **delete**Â **myptr**, but only if the stored pointer value **myptr** changes as a result of a function call. It then replaces the stored pointer with **ptr**.  
  
```   
void reset(Type* ptr = 0);
```  
  
### Parameters  
 ` ptr`  
 The pointer specified to replace the stored pointer **myptr**.  
  
### Example  
  
```cpp  
// auto_ptr_reset.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
#include <vector>  
  
using namespace std;

class Int
{
public:
    Int(int i)
    {
        x = i;
        cout << "Constructing " << (void*)this << " Value: " << x << endl;
    };
    ~Int()
    {
        cout << "Destructing " << (void*)this << " Value: " << x << endl;
    };

    int x;
};

int main()
{
    auto_ptr<Int> pi(new Int(5));
    pi.reset(new Int(6));
    Int* pi2 = pi.get();
    Int* pi3 = pi.release();
    if (pi2 == pi3)
        cout << "pi2 == pi3" << endl;
    delete pi3;
}
```  
  
```Output  
Constructing 00311AF8 Value: 5  
Constructing 00311B88 Value: 6  
Destructing 00311AF8 Value: 5  
pi2 == pi3  
Destructing 00311B88 Value: 6  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [unique_ptr Class](../standard-library/unique-ptr-class.md)

