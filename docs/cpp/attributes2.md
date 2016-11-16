---
title: "Attributes2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
caps.latest.revision: 11
manager: "ghogen"
---
# Attributes
In C++11, attributes provide a standardized way to annotate C++ constructs (including but not limited to classes, functions, variables, and blocks) with additional information that may or may not be vendor-specific. A compiler can use this information to generate informational messages, or to apply special logic when compiling the attributed code. The compiler ignores any attributes that it does not recognize, which means that you cannot define your own custom attributes using this syntax. Attributes are enclosed by double square brackets:  
  
```  
[[deprecated]]  
void Foo(int);  
  
```  
  
 Attributes represent a standardized alternative to vendor-specific extensions such as #pragma directives,  __declspec() (Visual C++),  or \__attribute\_\_ (GNU). However,  you will still need to use the vendor-specific constructs for most purposes.  The standard currently specifies three attributes that a conforming compiler should recognize:  
  
-   `noreturn` -- specifies that a function never returns; in other words it always throws an exception. The compiler can adjust its compilation rules for [[noreturn]] entities.  
  
-   `carries_dependency`--specifies that the function propagates data dependency ordering with respect to thread synchronization. The attribute can be applied to one or more parameters, to specify that the passed-in argument carries a dependency into the function body. The attribute can be applied to the function itself, to specify that the return value carries a dependency out of the function.   The compiler can use this information to generate more efficient code.  
  
-   `deprecated` – specifies that a function is not intended to be used, and might not exist in future versions of a library interface. The compiler can use this to generate an informational message when client code attempts to call the function. Can be applied to declaration of a class, a typedef-name, a variable, a non-static data member, a function, a namespace, an enumeration, an enumerator, or a template specialization.  
  
-   `gsl::suppress`  -- this Microsoft-specific attribute is used for suppressing warnings from checkers that enforce [Guidelines Support Library (GSL)](https://github.com/Microsoft/GSL) rules in code. For example, consider the code snippet below  
  
    ```cpp  
    void main()  
    {  
        int arr[10]; // GSL warning 26494 will be fired  
        int* p = arr; // GSL warning 26485 will be fired  
        [[gsl::suppress(bounds.1)]] // This attribute suppresses Bounds rule #1  
        {  
            int* q = p + 1; // GSL warning 26481 suppressed  
            p = q--; // GSL warning 26481 suppressed   
        }  
    }  
    ```  
  
     The example raises these warnings:  
  
    -   26494 (Type Rule 5: Always initialize an object.)  
  
    -   26485 (Bounds Rule 3: No array to pointer decay.)  
  
    -   26481 (Bounds Rule 1: Don't use pointer arithmetic. Use span instead.)  
  
     The first two warnings fire when you compile this code with the CppCoreCheck code analysis tool installed and activated. But the third warning doesn't fire because of the attribute. You can suppress the entire bounds profile by writing [[gsl::suppress(bounds)]] without including a specific rule number. The C++ Core Guidelines are designed to help you write better and safer code. The suppress attribute makes it easy to turn off the warnings when they are not wanted.  
  
 The C++ standard allows compiler vendors to define their own attribute parameters (within a vendor-specific namespace), but compilers are required to recognize only those attributes defined in the standard. In Visual C++, you can use the [[deprecated]] attribute instead of using declspec (deprecated) and the attribute will be recognized by any conformant compiler. For all other declspec parameters such as dllimport and dllexport, there is as yet no standard attribute equivalent so you must continue to use declspec syntax. Attributes do not affect the type system, and they don’t change the meaning of a program. Compilers ignore attribute values they don't recognize.