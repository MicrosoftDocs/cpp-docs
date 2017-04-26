---
title: "Compiler Error C2280 | Microsoft Docs"
ms.custom: ""
ms.date: "04/25/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2280"
helpviewer_keywords: 
  - "C2280"
dev_langs: 
  - "C++"
ms.assetid: e6c5b1fb-2b9b-4554-8ff9-775eeb37161b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C2280  
  
'*declaration*': attempting to reference a deleted function  
  
The compiler detected an attempt to reference a deleted function. This error can be caused by a call to a member function that has been explicitly marked as `= deleted` in the source code. This error can also be caused by a call to an implicit special member function of a struct or class that is automatically declared and marked as deleted by the compiler. For more information about when the compiler automatically generates default or deleted special member functions, see [Special member functions](../../cpp/special-member-functions.md).  
  
## Example: Explicitly deleted functions  

A call to an explicitly deleted function causes this error. An explicitly deleted member function implies that the class or struct is intentionally designed to prevent its use, so to fix this issue, you should change your code to avoid it.  
  
```cpp  
// C2280_explicit.cpp
// compile with: cl /c /W4 C2280_explicit.cpp
struct A {
	A();
	A(int) = delete;
};

struct B {
	A a1;
	A a2 = A(3); // C2280, calls deleted A::A(int)
	// To fix, remove the call to A(int)
};

void foo() {
	B b;    // calls implicit B::B(void)
}
```  
  
## Example: Uninitialized data members  
  
An uninitialized `const` data member or reference type data member causes the compiler to implicitly declare a deleted default constructor. To fix this issue, initialize the data member when it is declared.  
  
```cpp  
// C2280_uninit.cpp
// compile with: cl /c C2280_uninit.cpp
struct A {
	const int i; // uninitialized const-qualified data
    // causes implicit default constructor to be deleted.
    // To fix, initialize the value in the declaration:
    // const int i = 42;
} a;    // C2280
```  
  
## Example: Reference data members  
  
A reference type data member causes the compiler to declare a deleted default constructor, copy constructor, and assignment operator. To fix this issue, explicitly declare the required functions.  
  
```cpp  
// C2280_ref.cpp
// compile with: cl /c C2280_ref.cpp
int k = 42;
struct A {
    A();
	int& ri = k; // reference data member
    // causes implicit assignment operator to be deleted.
    // To fix, declare it explicitly;
    // A& operator=(const A& ra) { this->ri = ra.ri; return *this; };
};

struct B {
    A a;
};

void f() {
    B b1, b2;
    b2 = b1;    // C2280
}
```  

## Example: Variant and volatile members  
  
Versions of the compiler before Visual Studio 2015 Update 2 generated default constructors and destructors for anonymous unions. These are now implicitly declared as deleted. Previous versions of the compiler also allowed non-conforming implicit definition of default copy and move constructors and default copy and move assignment operators in classes that have `volatile` member variables. The compiler now considers classes and structs that have volatile member variables to have non-trivial constructors and assignment operators, which prevents automatic generation of default implementations. When such a class is a member of a union, or an anonymous union inside of a class, the copy and move constructors and copy and move assignment operators of the union, or the class containing the anonymous union, are implicitly defined as deleted. To fix error C2280 when you attempt to construct or copy such a union or class, you must explicitly declare these operators.  
  
```cpp  
// C2280_variant.cpp
// compile with: cl /c C2280_variant.cpp
struct A {  
    A() = default;
    A(A&);
};  

struct B {  
    union {  
        A a;  
        int i;  
    };
    // To fix this issue, define any needed 
    // default, copy, and move constructors
    // and copy and move assignment operators:
    // B(); 
    // B(const B& b);
};  

int main() {
    B b1;  
    B b2(b1);  // C2280  
}
```  
  
## Example: Movable deletes implicit copy  
  
If a class declares a move constructor or move assignment operator, but does not explicitly declare a copy constructor, the compiler implicitly declares a copy constructor and defines it as deleted. Similarly, if a class declares a move constructor or move assignment operator, but does not explicitly declare a copy assignment operator, the compiler implicitly declares a copy assignment operator and defines it as deleted. To fix this issue, you must explicitly declare these members.  
 
When you see error C2280 in connection with a `unique_ptr`, it is almost certainly because you are attempting to invoke its copy constructor, which is a deleted function. By design, a `unique_ptr` cannot be copied. Use a move constructor to transfer ownership instead.  

```cpp  
// C2280_move.cpp
// compile with: cl /c C2280_move.cpp
class base  
{  
public:  
    base();  
    ~base(); 
    base(base&&); 
    // Move constructor causes copy constructor to be
    // implicitly declared as deleted. To fix this 
    // issue, you can explicitly declare a copy constructor:
    // base(base&);
    // If you want the compiler default version, do this:
    // base(base&) = default;
};  

void copy(base *p)  
{  
    base b{*p};  // C2280
}  
```  
  
## Example: Indirect base members deleted  
  
Previous versions of the compiler allowed a derived class to call member functions of indirectly-derived `private virtual` base classes. This behavior was incorrect and does not conform to the C++ standard. The compiler now issues compiler error C2280 when such a call is made.  
  
In this example, class `top` indirectly derives from private virtual `base`. This makes the members of `base` inaccessible to `top`; an object of type `top` can't be instantiated or destroyed.  

```cpp  
// C2280a.cpp
// compile with: cl /c C2280a.cpp
class base  
{  
protected:  
    base();  
    ~base();  
};  

class middle : private virtual base {}; 
class top : public virtual middle {};   

void destroy(top *p)  
{  
    delete p;  // C2280  
}  
```  
  
You can fix this issue by changing class `middle` to use `protected virtual` derivation, or by directly deriving class `top` from private virtual `base`:  
  
```cpp  
// C2280b.cpp
// compile with: cl /c C2280b.cpp
class base  
{  
protected:  
    base();  
    ~base();  
};  

class middle : private virtual base {}; 
class top : public virtual middle, private virtual base {};   

void destroy(top *p)  
{  
    delete p;  // OK  
}  
```  
  
Alternatively: 
  
```cpp  
// C2280c.cpp
// compile with: cl /c C2280c.cpp
class base  
{  
protected:  
    base();  
    ~base();  
};  

class middle : protected virtual base {}; 
class top : public virtual middle {};   

void destroy(top *p)  
{  
    delete p;  // OK  
}  
```  
  