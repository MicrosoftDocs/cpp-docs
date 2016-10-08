---
title: "Welcome Back to C++ (Modern C++)"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
caps.latest.revision: 23
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Welcome Back to C++ (Modern C++)
C++ is one of the most widely used programming languages in the world. Well-written C++ programs are fast and efficient. The language is more flexible than other languages because you can use it to create a wide range of apps—from fun and exciting games, to high-performance scientific software, to device drivers, embedded programs, and Windows client apps. For more than 20 years, C++ has been used to solve problems like these and many others. What you might not know is that an increasing number of C++ programmers have folded up the dowdy C-style programming of yesterday and have donned modern C++ instead.  
  
 One of the original requirements for C++ was backward compatibility with the C language. Since then, C++ has evolved through several iterations—C with Classes, then the original C++ language specification, and then the many subsequent enhancements. Because of this heritage, C++ is often referred to as a multi-paradigm programming language. In C++, you can do purely procedural C-style programming that involves raw pointers, arrays, null-terminated character strings, custom data structures, and other features that may enable great performance but can also spawn bugs and complexity.  Because C-style programming is fraught with perils like these, one of the founding goals for C++ was to make programs both type-safe and easier to write, extend, and maintain. Early on, C++ embraced programming paradigms such as object-oriented programming. Over the years, features have been added to the language, together with highly-tested standard libraries of data structures and algorithms. It's these additions that have made the modern C++ style possible.  
  
 Modern C++ emphasizes:  
  
-   Stack-based scope instead of heap or static global scope.  
  
-   Auto type inference instead of explicit type names.  
  
-   Smart pointers instead of raw pointers.  
  
-   `std::string` and `std::wstring` types (see [<string\>](../VS_visualcpp/-string-.md)) instead of raw `char[]` arrays.  
  
-   [Standard template library](../VS_visualcpp/C---Standard-Library-Header-Files.md) (STL) containers like `vector`, `list`, and `map` instead of raw arrays or custom containers. See [<vector\>](../VS_visualcpp/-vector-.md), [<list\>](../VS_visualcpp/-list-.md), and [<map\>](../VS_visualcpp/-map-.md).  
  
-   [STL algorithms](../VS_visualcpp/-algorithm-.md) instead of manually coded ones.  
  
-   Exceptions, to report and handle error conditions.  
  
-   Lock-free inter-thread communication using STL `std::atomic<>` (see [<atomic\>](../VS_visualcpp/-atomic-.md)) instead of other inter-thread communication mechanisms.  
  
-   Inline [lambda functions](../VS_visualcpp/Lambda-Expressions-in-C--.md) instead of small functions implemented separately.  
  
-   Range-based for loops to write more robust loops that work with arrays, STL containers, and Windows Runtime collections in the form `for ( for-range-declaration : expression )`. This is part of the Core Language support. For more information, see [Range-based for Statement (C++)](../VS_visualcpp/Range-based-for-Statement--C---.md).  
  
 The C++ language itself has also evolved. Compare the following code snippets. This one shows how things used to be in C++:  
  
```cpp  
  
// circle and shape are user-defined types  
circle* p = new circle( 42 );   
vector<shape*> v = load_shapes();  
  
for( vector<circle*>::iterator i = v.begin(); i != v.end(); ++i ) {  
    if( *i && **i == *p )  
        cout << **i << “ is a match\n”;  
}  
  
for( vector<circle*>::iterator i = v.begin();  
        i != v.end(); ++i ) {  
    delete *i; // not exception safe  
}  
  
delete p;  
  
```  
  
 Here's how the same thing is accomplished in modern C++:  
  
```cpp  
  
#include <memory>  
#include <vector>  
// ...  
// circle and shape are user-defined types  
auto p = make_shared<circle>( 42 );  
vector<shared_ptr<shape>> v = load_shapes();  
  
for_each( begin(v), end(v), [&](const shared_ptr<shape>& s) {  
    if( s && *s == *p )  
        cout << *s << " is a match\n";  
} );  
  
```  
  
 In modern C++, you don't have to use new/delete or explicit exception handling because you can use smart pointers instead. When you use the `auto` type deduction and [lambda function](../VS_visualcpp/Lambda-Expressions-in-C--.md), you can write code quicker, tighten it, and understand it better. And `for_each` is cleaner, easier to use, and less prone to unintended errors than a `for` loop. You can use boilerplate together with minimal lines of code to write your app. And you can make that code exception-safe and memory-safe, and have no allocation/deallocation or error codes to deal with.  
  
 Modern C++ incorporates two kinds of polymorphism: compile-time, through templates, and run-time, through inheritance and virtualization. You can mix the two kinds of polymorphism to great effect. The STL template `shared_ptr` uses internal virtual methods to accomplish its apparently effortless type erasure. But don't over-use virtualization for polymorphism when a template is the better choice. Templates can be very powerful.  
  
 If you're coming to C++ from another language, especially from a managed language in which most of the types are reference types and very few are value types, know that C++ classes are value types by default. But you can specify them as reference types to enable polymorphic behavior that supports object-oriented programming. A helpful perspective: value types are more about memory and layout control, reference types are more about base classes and virtual functions to support polymorphism. By default, value types are copyable—they each have a copy constructor and a copy assignment operator. When you specify a reference type, make the class non-copyable—disable the copy constructor and copy assignment operator—and use a virtual destructor, which supports the polymorphism. Value types are also about the contents, which, when they are copied, give you two independent values that you can modify separately. But reference types are about identity—what kind of object it is—and for this reason are sometimes referred to as polymorphic types.  
  
 C++ is experiencing a renaissance because power is king again. Languages like Java and C# are good when programmer productivity is important, but they show their limitations when power and performance are paramount. For high efficiency and power, especially on devices that have limited hardware, nothing beats modern C++.  
  
 Not only the language is modern, the development tools are, too. Visual Studio makes all parts of the development cycle robust and efficient. It includes Application Lifecycle Management (ALM) tools, IDE enhancements like IntelliSense, tool-friendly mechanisms like XAML, and building, debugging, and many other tools.  
  
 The articles in this part of the documentation provide high-level guidelines and best practices for the most important features and techniques for writing modern C++ programs.  
  
-   [Support For C++11/14/17 Features (Modern C++)](../VS_visualcpp/Support-For-C--11-14-17-Features--Modern-C---.md)  
  
-   [C++ Type System](../VS_visualcpp/C---Type-System--Modern-C---.md)  
  
-   [Uniform Initialization and Delegating Constructors](../VS_visualcpp/Uniform-Initialization-and-Delegating-Constructors.md)  
  
-   [Object Lifetime And Resource Management](../VS_visualcpp/Object-Lifetime-And-Resource-Management--Modern-C---.md)  
  
-   [Objects Own Resources (RAII)](../VS_visualcpp/Objects-Own-Resources--RAII-.md)  
  
-   [Smart Pointers](../VS_visualcpp/Smart-Pointers--Modern-C---.md)  
  
-   [Pimpl For Compile-Time Encapsulation](../VS_visualcpp/Pimpl-For-Compile-Time-Encapsulation--Modern-C---.md)  
  
-   [Containers](../VS_visualcpp/Containers--Modern-C---.md)  
  
-   [Algorithms](../VS_visualcpp/Algorithms--Modern-C---.md)  
  
-   [String and I/O Formatting (Modern C++)](../VS_visualcpp/String-and-I-O-Formatting--Modern-C---.md)  
  
-   [Errors and Exception Handling](../VS_visualcpp/Errors-and-Exception-Handling--Modern-C---.md)  
  
-   [Portability At ABI Boundaries](../VS_visualcpp/Portability-At-ABI-Boundaries--Modern-C---.md)  
  
 For more information, see the StackOverflow article [what C++ idioms are deprecated in C++11](http://go.microsoft.com/fwlink/?LinkId=402836)  
  
## See Also  
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)   
 [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md)   
 [C++ Standard Library](../VS_visualcpp/C---Standard-Library-Reference.md)