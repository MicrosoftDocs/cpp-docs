---
title: "Declarations and Definitions (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 678f1424-e12f-45e0-a957-8169e5fef6cb
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# Declarations and Definitions (C++)
[Declarations](http://msdn.microsoft.com/en-us/2fd0cddb-b64c-4c9f-9aac-9f8e7ef892f4) introduce names in a program, for example the names of variables, namespaces, functions and classes. Declarations also specify type information as well as other characteristics of the object that is being declared. A name must be declared before it can be used; in C++ the point at which a name is declared determines whether it is visible to the compiler. You cannot refer to a function or class that is declared at some later point in the compilation unit; you can use *forward declarations* to get around this limitation.  
  
 [Definitions](http://msdn.microsoft.com/en-us/f96e2c0d-abb5-4414-9ea1-4d5b4048d50a) specify what code or data the name describes. The compiler needs the definition in order to allocate storage space for the thing that is being declared.  
  
## Declarations  
 A declaration introduces one or more names into a program. Declarations can occur more than once in a program. Therefore, classes, structures, enumerated types, and other user-defined types can be declared for each compilation unit. The constraint on this multiple declaration is that all declarations must be identical. Declarations also serve as definitions, except when the declaration:  
  
1.  Is a function prototype (a function declaration with no function body).  
  
2.  Contains the `extern` specifier but no initializer (objects and variables) or function body (functions). This signifies that the definition is not necessarily in the current translation unit and gives the name external linkage.  
  
3.  Is of a static data member inside a class declaration.  
  
     Because static class data members are discrete variables shared by all objects of the class, they must be defined and initialized outside the class declaration. (For more information about classes and class members, see [Classes](../cpp/classes-and-structs-cpp.md).)  
  
4.  Is a class name declaration with no following definition, such as `class T;`.  
  
5.  Is a `typedef` statement.  
  
 Examples of declarations that are also definitions are:  
  
```  
// Declare and define int variables i and j.  
int i;  
int j = 10;  
  
// Declare enumeration suits.  
enum suits { Spades = 1, Clubs, Hearts, Diamonds };  
  
// Declare class CheckBox.  
class CheckBox : public Control  
{  
public:  
            Boolean IsChecked();  
    virtual int     ChangeState() = 0;  
};  
```  
  
 Some declarations that are not definitions are:  
  
```  
  
extern int i;  
char *strchr( const char *Str, const char Target );  
```  
  
 A name is considered to be declared immediately after its declarator but before its (optional) initializer. For more information, see [Point of Declaration](../cpp/point-of-declaration-in-cpp.md).  
  
 Declarations occur in a *scope*. The scope controls the visibility of the name declared and the duration of the object defined, if any. For more information about how scope rules interact with declarations, see [Scope](../cpp/scope-visual-cpp.md).  
  
 An object declaration is also a definition unless it contains the `extern` storage-class specifier described in [Storage-Class Specifiers](http://msdn.microsoft.com/en-us/10b3d22d-cb40-450b-994b-08cf9a211b6c). A function declaration is also a definition unless it is a prototype. A prototype is a function header without a defining function body. The definition of an object causes allocation of storage and appropriate initializations for that object.  
  
## Definitions  
 A definition is a unique specification of an object or variable, function, class, or enumerator. Because definitions must be unique, a program can contain only one definition for a given program element. There can be a many-to-one correspondence between declarations and definitions. There are two cases in which a program element can be declared and not defined:  
  
1.  A function is declared but never referenced with a function call or with an expression that takes the function's address.  
  
2.  A class is used only in a way that does not require its definition be known. However, the class must be declared. The following code illustrates such a case:  
  
    ```  
    // definitions.cpp  
    class WindowCounter;   // Forward declaration; no definition  
  
    class Window  
    {  
       // Definition of WindowCounter not required  
       static WindowCounter windowCounter;  
    };  
  
    int main()  
    {  
    }  
    ```  
  
## See Also  
 [Basic Concepts](../cpp/basic-concepts-cpp.md)   
 [Point of Declaration](../cpp/point-of-declaration-in-cpp.md)