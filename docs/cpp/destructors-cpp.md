---
title: "Destructors (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "objects [C++], destroying"
  - "Visual C++, destructors"
  - "destroying objects, destructors"
  - "~ operator, specifying destructors"
  - "destructors, about destructors"
  - "destructors, C++"
ms.assetid: afa859b0-f3bc-4c4d-b250-c68b335b6004
caps.latest.revision: 10
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
# Destructors (C++)
"Destructor" functions are the inverse of constructor functions. They are called when objects are destroyed (deallocated). Designate a function as a class's destructor by preceding the class name with a tilde (`~`). For example, the destructor for class `String` is declared: `~String()`.  
  
 In a /clr compilation, the destructor has a special role in releasing managed and unmanaged resources. See [Destructors and Finalizers in Visual C++](../misc/destructors-and-finalizers-in-visual-cpp.md) for more information.  
  
 The destructor is commonly used to "clean up" when an object is no longer necessary. Consider the following declaration of a `String` class:  
  
```  
// spec1_destructors.cpp  
#include <string.h>  
  
class String {  
public:  
   String( char *ch );  // Declare constructor  
   ~String();           //  and destructor.  
private:  
   char    *_text;  
   size_t  sizeOfText;  
};  
  
// Define the constructor.  
String::String( char *ch ) {  
   sizeOfText = strlen( ch ) + 1;  
  
   // Dynamically allocate the correct amount of memory.  
   _text = new char[ sizeOfText ];  
  
   // If the allocation succeeds, copy the initialization string.  
   if( _text )  
      strcpy_s( _text, sizeOfText, ch );  
}  
  
// Define the destructor.  
String::~String() {  
   // Deallocate the memory that was previously reserved  
   //  for this string.  
   if (_text)  
      delete[] _text;  
}  
  
int main() {  
   String str("The piper in the glen...");  
}  
```  
  
 In the preceding example, the destructor `String::~String` uses the `delete` operator to deallocate the space dynamically allocated for text storage.  
  
## Delcaring destructors  
 Destructors are functions with the same name as the class but preceded by a tilde (`~`)  
  
 The first form of the syntax is used for destructors declared or defined inside a class declaration; the second form is used for destructors defined outside a class declaration.  
  
 Several rules govern the declaration of destructors. Destructors:  
  
-   Do not accept arguments.  
  
-   Cannot specify any return type (including `void`).  
  
-   Cannot return a value using the `return` statement.  
  
-   Cannot be declared as **const**, `volatile`, or **static**. However, they can be invoked for the destruction of objects declared as **const**, `volatile`, or **static**.  
  
-   Can be declared as **virtual**. Using virtual destructors, you can destroy objects without knowing their type — the correct destructor for the object is invoked using the virtual function mechanism. Note that destructors can also be declared as pure virtual functions for abstract classes.  
  
## Using destructors  
 Destructors are called when one of the following events occurs:  
  
-   An object allocated using the **new** operator is explicitly deallocated using the **delete** operator. When objects are deallocated using the **delete** operator, memory is freed for the "most derived object," or the object that is a complete object and not a subobject representing a base class. This "most-derived object" deallocation is guaranteed to work only with virtual destructors. Deallocation may fail in multiple-inheritance situations where the type information does not correspond to the underlying type of the actual object.  
  
-   A local (automatic) object with block scope goes out of scope.  
  
-   The lifetime of a temporary object ends.  
  
-   A program ends and global or static objects exist.  
  
-   The destructor is explicitly called using the destructor function's fully qualified name. (For more information, see [Explicit Destructor Calls](../misc/explicit-destructor-calls.md).)  
  
 The cases described in the preceding list ensure that all objects can be destroyed with user-defined methods.  
  
 If a base class or data member has an accessible destructor, and if a derived class does not declare a destructor, the compiler generates one. This compiler-generated destructor calls the base class destructor and the destructors for members of the derived type. Default destructors are public. (For more information about accessibility, see [Access Specifiers for Base Classes](../misc/access-specifiers-for-base-classes.md).)  
  
 Destructors can freely call class member functions and access class member data. When a virtual function is called from a destructor, the function called is the function for the class currently being destroyed. (For more information, see [Order of Destruction](../misc/order-of-destruction.md).)  
  
 There are two restrictions on the use of destructors. The first restriction is that you cannot take the address of a destructor. The second is that derived classes do not inherit their base class's destructors. Instead, as previously explained, they always override the base class's destructors.  
  
## Order of destruction  
 When an object goes out of scope or is deleted, the sequence of events in its complete destruction is as follows:  
  
1.  The class's destructor is called, and the body of the destructor function is executed.  
  
2.  Destructors for nonstatic member objects are called in the reverse order in which they appear in the class declaration. The optional member initialization list used in construction of these members does not affect the order of (construction or) destruction. (For more information about initializing members, see [Initializing Bases and Members](http://msdn.microsoft.com/en-us/2f71377e-2b6b-49da-9a26-18e9b40226a1).)  
  
3.  Destructors for nonvirtual base classes are called in the reverse order of declaration.  
  
4.  Destructors for virtual base classes are called in the reverse order of declaration.  
  
```  
// order_of_destruction.cpp  
#include <stdio.h>  
  
struct A1      { virtual ~A1() { printf("A1 dtor\n"); } };  
struct A2 : A1 { virtual ~A2() { printf("A2 dtor\n"); } };  
struct A3 : A2 { virtual ~A3() { printf("A3 dtor\n"); } };  
  
struct B1      { ~B1() { printf("B1 dtor\n"); } };  
struct B2 : B1 { ~B2() { printf("B2 dtor\n"); } };  
struct B3 : B2 { ~B3() { printf("B3 dtor\n"); } };  
  
int main() {  
   A1 * a = new A3;  
   delete a;  
   printf("\n");  
  
   B1 * b = new B3;  
   delete b;  
   printf("\n");  
  
   B3 * b2 = new B3;  
   delete b2;  
}  
  
Output: A3 dtor  
A2 dtor  
A1 dtor  
  
B1 dtor  
  
B3 dtor  
B2 dtor  
B1 dtor  
  
```  
  
### Virtual base classes  
 Destructors for virtual base classes are called in the reverse order of their appearance in a directed acyclic graph (depth-first, left-to-right, postorder traversal). the following figure depicts an inheritance graph.  
  
 ![Inheritance graph that shows virtual base classes](../cpp/media/vc392j1.gif "vc392J1")  
Inheritance Graph Showing Virtual Base Classes  
  
 The following lists the class heads for the classes shown in the figure.  
  
```  
class A  
class B  
class C : virtual public A, virtual public B  
class D : virtual public A, virtual public B  
class E : public C, public D, virtual public B  
```  
  
 To determine the order of destruction of the virtual base classes of an object of type `E`, the compiler builds a list by applying the following algorithm:  
  
1.  Traverse the graph left, starting at the deepest point in the graph (in this case, `E`).  
  
2.  Perform leftward traversals until all nodes have been visited. Note the name of the current node.  
  
3.  Revisit the previous node (down and to the right) to find out whether the node being remembered is a virtual base class.  
  
4.  If the remembered node is a virtual base class, scan the list to see whether it has already been entered. If it is not a virtual base class, ignore it.  
  
5.  If the remembered node is not yet in the list, add it to the bottom of the list.  
  
6.  Traverse the graph up and along the next path to the right.  
  
7.  Go to step 2.  
  
8.  When the last upward path is exhausted, note the name of the current node.  
  
9. Go to step 3.  
  
10. Continue this process until the bottom node is again the current node.  
  
 Therefore, for class `E`, the order of destruction is:  
  
1.  The nonvirtual base class `E`.  
  
2.  The nonvirtual base class `D`.  
  
3.  The nonvirtual base class `C`.  
  
4.  The virtual base class `B`.  
  
5.  The virtual base class `A`.  
  
 This process produces an ordered list of unique entries. No class name appears twice. Once the list is constructed, it is walked in reverse order, and the destructor for each of the classes in the list from the last to the first is called.  
  
 The order of construction or destruction is primarily important when constructors or destructors in one class rely on the other component being created first or persisting longer — for example, if the destructor for `A` (in the figure shown above) relied on `B` still being present when its code executed, or vice versa.  
  
 Such interdependencies between classes in an inheritance graph are inherently dangerous because classes derived later can alter which is the leftmost path, thereby changing the order of construction and destruction.  
  
### Nonvirtual base classes  
 The destructors for nonvirtual base classes are called in the reverse order in which the base class names are declared. Consider the following class declaration:  
  
```  
class MultInherit : public Base1, public Base2  
...  
```  
  
 In the preceding example, the destructor for `Base2` is called before the destructor for `Base1`.  
  
## Explicit destructor calls  
 Calling a destructor explicitly is seldom necessary. However, it can be useful to perform cleanup of objects placed at absolute addresses. These objects are commonly allocated using a user-defined **new** operator that takes a placement argument. The **delete** operator cannot deallocate this memory because it is not allocated from the free store (for more information, see [The new and delete Operators](../cpp/new-and-delete-operators.md)). A call to the destructor, however, can perform appropriate cleanup. To explicitly call the destructor for an object, `s`, of class `String`, use one of the following statements:  
  
```  
s.String::~String();     // Nonvirtual call  
ps->String::~String();   // Nonvirtual call  
  
s.~String();       // Virtual call  
ps->~String();     // Virtual call  
```  
  
 The notation for explicit calls to destructors, shown in the preceding, can be used regardless of whether the type defines a destructor. This allows you to make such explicit calls without knowing if a destructor is defined for the type. An explicit call to a destructor where none is defined has no effect.  
  
## See Also  
 [Special Member Functions](../misc/special-member-functions-cpp.md)