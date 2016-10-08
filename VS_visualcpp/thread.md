---
title: "thread"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
caps.latest.revision: 7
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
# thread
**Microsoft Specific**  
  
 The **thread** extended storage-class modifier is used to declare a thread local variable. For the portable equivalent in C++11, use the [thread_local](../VS_visualcpp/Storage-classes--C---.md#thread_local) storage class specifier.  
  
## Syntax  
  
```  
  
__declspec( thread ) declarator  
```  
  
## Remarks  
 Thread Local Storage (TLS) is the mechanism by which each thread in a multithreaded process allocates storage for thread-specific data. In standard multithreaded programs, data is shared among all threads of a given process, whereas thread local storage is the mechanism for allocating per-thread data. For a complete discussion of threads, see [Multithreading](../VS_visualcpp/Multithreading-Support-for-Older-Code--Visual-C---.md).  
  
 Declarations of thread local variables must use [extended attribute syntax](../VS_visualcpp/__declspec.md) and the `__declspec` keyword with the **thread** keyword. For example, the following code declares an integer thread local variable and initializes it with a value:  
  
```  
__declspec( thread ) int tls_i = 1;  
```  
  
 You must observe these guidelines when declaring thread local objects and variables:  
  
-   You can apply the **thread** attribute only to class and data declarations and definitions; **thread** cannot be used on function declarations or definitions.  
  
-   The use of the **thread** attribute may interfere with [delay loading](../VS_visualcpp/Linker-Support-for-Delay-Loaded-DLLs.md) of DLL imports**.**  
  
-   On XP systems, `thread` may not function correctly if a DLL uses __declspec(thread) data and it is loaded dynamically via LoadLibrary.  
  
-   You can specify the **thread** attribute only on data items with static storage duration. This includes global data objects (both **static** and `extern`), local static objects, and static data members of classes. You cannot declare automatic data objects with the **thread** attribute.  
  
-   You must use the **thread** attribute for the declaration and the definition of a thread local object, whether the declaration and definition occur in the same file or separate files.  
  
-   You cannot use the **thread** attribute as a type modifier.  
  
-   Because the declaration of objects that use the **thread** attribute is permitted, these two examples are semantically equivalent:  
  
    ```  
    // declspec_thread_2.cpp  
    // compile with: /LD  
    __declspec( thread ) class B {  
    public:  
       int data;  
    } BObject;   // BObject declared thread local.  
  
    class B2 {  
    public:  
       int data;  
    };  
    __declspec( thread ) B2 BObject2;   // BObject2 declared thread local.  
    ```  
  
-   Standard C permits initialization of an object or variable with an expression involving a reference to itself, but only for objects of nonstatic extent. Although C++ normally permits such dynamic initialization of an object with an expression involving a reference to itself, this type of initialization is not permitted with thread local objects. For example:  
  
    ```  
    // declspec_thread_3.cpp  
    // compile with: /LD  
    #define Thread __declspec( thread )  
    int j = j;   // Okay in C++; C error  
    Thread int tls_i = sizeof( tls_i );   // Okay in C and C++  
    ```  
  
     Note that a `sizeof` expression that includes the object being initialized does not constitute a reference to itself and is allowed in C and C++.  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [Thread Local Storage (TLS)](../VS_visualcpp/Thread-Local-Storage--TLS-.md)