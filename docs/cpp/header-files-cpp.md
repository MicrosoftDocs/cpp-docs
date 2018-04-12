---
title: "Header files (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "04/20/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["header files [C++]"]
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---

The names of program elements such as variables, functions, classes, and so on must be declared before they can be used. For example, you can't just write `x = 42` in a .cpp file without first declaring 'x'. The declaration tells the compiler whether is an int, a double, a function, or some other thing.  Furthermore, each name must be declared (directly or indirectly) in every .cpp file in which it is used. When you compile your program, each .cpp file is compiled independently by the compiler. That means that if you define a class or function or global variable, you must provide a declaration of that thing in each additional .cpp file that uses it. Each declaration of that thing must be exactly identical in all files. A slight inconsistency will cause the linker to see the name as representing a different entity than what you intended, and errors will result. 
To minimize the potential for errors, C++ has adopted the convention of using *header files* to contain declarations. You make the declarations in a single header file, then use the #include directive in every .cpp file or other header file requires that declaration. The #include directive inserts a copy of the header file directly into the .cpp file prior to compilation.  Typically, header files have an *include guard* such as #pragma once to ensure that they are not inserted multiple times into a single .cpp file. 
## Example
The following example shows a common a common way to use a header file. Suppose we want to create a class and then use it in a different source file. We'll start with the header file, **my_class.h**. It contains a class definition, but note that the definition is incomplete; the member function `do_something` is not defined. 

```cpp
// my_class.h
#pragma once // include guard
namespace N
{
    class my_class
    {
    public:
        void do_something();
    };

}
```
Next, we create a .cpp file called my_class.cpp and provide a definition for the member declaration. We add an #include directive for "my_class.h" file in order to have the my_class declaration inserted at this point in the .cpp file, and we include <iostream> to pull in the declaration for std::cout. Note that quotes are used for header files in the same directory as the source file, and angle brackets are used for standard library headers. Also, many standard library headers do not have .h or any other file extension.
In a .cpp file, we can optionally use a **using** statement to avoid having to qualify every mention of "my_class" or "cout" with "N::" or "std::".  Don't put **using** statements in your header files!
```cpp
// my_class.cpp
#include "my_class.h"
#include <iostream>

using namespace N;
using namespace std;

void my_class::do_something()
{
    cout << "Doing something!" << endl;
}
```
Now we can use my_class in another .cpp file. We #include the header file so that the compiler pulls in the declaration. All the compiler needs to know is that my_class is a class that has a public member function called do_something(). After the compiler finishes compiling each .cpp file into .obj files, it passes the .obj files to the linker. The linker's job is to merge the object files into a single program: my_program.exe. For each name that is declared in each .obj file, the linker looks for exactly one definition of that name in all the .obj files. In our example, it finds the definition for my_class in the .obj file produced for my_class.cpp, and the build succeeds.

```cpp
// my_program.cpp
#include "my_class.h"

using namespace N;

int main()
{
    my_class mc;
    mc.do_something();
    return 0;
}
```
## What to put in a header file
Because a header file might potentially be included by multiple .cpp files, in general it must contain only declarations, not definitions. The only definitions allowed are inline functions, const variables and constexpr expressions.
A header file may contain any kind of declaration or definition EXCEPT the following:
non-inline function definitions
non-const variable definitions
aggregate definitions
unnamed namespaces
using directives

Use of the using directive will not necessarily an error, but can potentially cause a problem because it brings the namespace into scope in every .cpp file that directly or indirectly includes that header. 







