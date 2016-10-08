---
title: "Class Member Overview"
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
ms.assetid: 8802cfa9-705d-4f37-acde-245d6838010c
caps.latest.revision: 9
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
# Class Member Overview
A class or struct consists of its members. The work that a class does is performed by its member functions. The state that it maintains is stored in its data members. Initialization of members is done by constructors, and cleanup work such as freeing of memory and releasing of resources is done by constructors. In C++11 and later, data members can (and usually should) be initialized at the point of declaration.  
  
## Kinds of class members  
 The full list of member categories is as follows:  
  
-   Special Member functions.  
  
-   [Member functions](../Topic/Member%20Functions%20\(C++\).md).  
  
-   [Data members](../VS_visualcpp/Static-Members--C---.md) including built-in types and other user defined types.  
  
-   Operators  
  
-   [Nested Class Declarations](../VS_visualcpp/Nested-Class-Declarations.md) and.)  
  
-   [Unions](../VS_visualcpp/Unions.md)  
  
-   [Enumerations](../VS_visualcpp/Enumerations--C---.md).  
  
-   [Bit fields](../VS_visualcpp/C---Bit-Fields.md).  
  
-   [Friends](../VS_visualcpp/friend--C---.md).  
  
-   [Aliases and typedefs](../VS_visualcpp/Aliases-and-typedefs--C---.md).  
  
    > [!NOTE]
    >  Friends are included in the preceding list because they are contained in the class declaration. However, they are not true class members, because they are not in the scope of the class.  
  
## Example class declaration  
 The following example shows a simple class declaration:  
  
```  
// TestRun.h  
  
class TestRun  
{  
    // Start member list.  
  
    //The class interface accessible to all callers.  
public:  
    // Use compiler-generated default constructor:  
    TestRun() = default;   
    // Don't generate a copy constructor:  
    TestRun(const TestRun&) = delete;    
    TestRun(std::string name);  
    void DoSomething();  
    int Calculate(int a, double d);  
    virtual ~TestRun();  
    enum class State { Active, Suspended };  
  
    // Accessible to this class and derived classes only.  
protected:  
    virtual void Initialize();  
    virtual void Suspend();  
    State GetState();  
  
    // Accessible to this class only.  
private:  
    // Default brace-initialization of instance members:  
    State _state{ State::Suspended };   
    std::string _testName{ "" };   
    int _index{ 0 };  
  
    // Non-const static member:  
    static int _instances;  
    // End member list.  
};  
  
// Define and initialize static member.  
int TestRun::_instances{ 0 };  
```  
  
## Member accessibility  
 The members of a class are declared in the member list. The member list of a class may be divided into any number of `private`, `protected` and **public** sections using keywords known as access specifiers.  A colon **:** must follow the access specifier.  These sections need not be contiguous, that is, any of these keywords may appear several times in the member list.  The keyword designates the access of all members up until the next access specifier or the closing brace. For more information, see [Member Access Control (C++)](../VS_visualcpp/Member-Access-Control--C---.md).  
  
## Static members  
 A data member may be declared as static, which means all objects of the class have access to the same copy of it. A member function may be declared as static, in which case it can only access static data members of the class (and has no *this* pointer). For more information, see [Static Data Members](../VS_visualcpp/Static-Members--C---.md).  
  
## Special member functions  
 Special member functions are functions that are automatically provided by the compiler if you do not specify them in your source code.  
  
1.  Default constructor  
  
2.  Copy constructor  
  
3.  **(C++11)** Move constructor  
  
4.  Copy assignment operator  
  
5.  **(C++11)** Move assignment operator  
  
6.  Destructor  
  
## Memberwise initialization  
 In C++11 and later, non-static member declarators can contain initializers.  
  
```  
  
class CanInit  
{  
public:  
    long num {7};       // OK in C++11  
    int k = 9;          // OK in C++11  
    static int i = 9; // Error: must be defined and initialized  
                      // outside of class declaration.  
  
    // initializes num to 7 and k to 9  
    CanInit(){}  
  
    // overwrites original initialized value of num:  
    CanInit(int val) : num(val) {}  
};  
int main()  
{  
}  
```  
  
 If a member is assigned a value in a constructor, that value overwrites the value with which the member was initialized at the point of declaration.  
  
 There is only one shared copy of static data members for all objects of a given class type. Static data members must be defined and can be initialized at file scope. (For more information about static data members, see [Static Data Members](../VS_visualcpp/Static-Members--C---.md).) The following example shows how to perform these initializations:  
  
```  
// class_members2.cpp  
class CanInit2  
{  
public:  
    CanInit2() {} // Initializes num to 7 when new objects of type   
                 //  CanInit are created.  
    long     num {7};  
    static int i;  
    static int j;  
};  
  
// At file scope:  
  
// i is defined at file scope and initialized to 15.  
// The initializer is evaluated in the scope of CanInit.  
int CanInit2::i = 15;  
  
// The right side of the initializer is in the scope   
// of the object being initialized  
int CanInit2::j = i;  
```  
  
> [!NOTE]
>  The class name, `CanInit2`, must precede `i` to specify that the `i` being defined is a member of class `CanInit2`.  
  
## See Also  
 [Classes and Structs](../VS_visualcpp/Classes-and-Structs--C---.md)