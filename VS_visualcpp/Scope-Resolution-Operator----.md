---
title: "Scope Resolution Operator: ::"
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
ms.assetid: fd5de9d3-c716-4e12-bae9-03a16fd79a50
caps.latest.revision: 8
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
# Scope Resolution Operator: ::
The scope resolution operator `::` is used to identify and disambiguate identifiers used in different scopes. For more information about scope, see [Scope](../VS_visualcpp/Scope--Visual-C---.md).  
  
## Syntax  
  
```  
:: identifier  
class-name :: identifier  
namespace :: identifier  
enum class :: identifier  
enum struct :: identifier  
```  
  
## Remarks  
 The `identifier` can be a variable, a function, or an enumeration value.  
  
## With Classes and Namespaces  
 The following example shows how the scope resolution operator is used with namespaces and classes:  
  
```cpp  
namespace NamespaceA{  
    int x;  
    class ClassA {  
    public:  
        int x;  
    };  
}  
  
int main() {  
  
    // A namespace name used to disambiguate  
    NamespaceA::x = 1;  
  
    // A class name used to disambiguate  
    NamespaceA::ClassA a1;  
    a1.x = 2;  
  
}  
  
```  
  
 A scope resolution operator without a scope qualifier refers to the global namespace.  
  
```cpp  
namespace NamespaceA{  
    int x;  
}  
  
int x;   
  
int main() {  
    int x;  
  
    // the x in main()  
    x = 0;   
    // The x in the global namespace  
    ::x = 1;   
  
    // The x in the A namespace  
    NamespaceA::x = 2;   
}  
```  
  
 You can use the scope resolution operator to identify a member of a namespace, or to identify a namespace that nominates the member’s namespace in a using-directive. In the example below, you can use `NamespaceC` to qualify `ClassB`, even though `ClassB` was declared in namespace `NamespaceB`, because `NamespaceB` was nominated in `NamespaceC` by a using directive.  
  
```cpp  
namespace NamespaceB {  
    class ClassB {  
    public:  
        int x;  
    };  
}  
  
namespace NamespaceC{  
    using namespace B;  
  
}  
int main() {  
    NamespaceB::ClassB c_b;  
    NamespaceC::ClassB c_c;  
  
    c_b.x = 3;  
    c_c.x = 4;  
}  
  
```  
  
 You can use chains of scope resolution operators. In the following example, `NamespaceD::NamespaceD1` identifies the nested namespace `NamespaceD1`, and `NamespaceE::ClassE::ClassE1` identifies the nested class `ClassE1`.  
  
```cpp  
namespace NamespaceD{  
    namespace NamespaceD1{  
        int x;  
    }  
}  
  
namespace NamespaceE{  
  
    class ClassE{  
    public:  
        class ClassE1{  
        public:  
            int x;  
        };  
    };  
}  
  
int main() {  
    NamespaceD:: NamespaceD1::x = 6;  
    NamespaceE::ClassE::ClassE1 e1;  
    e1.x = 7  ;  
}  
  
```  
  
## With Static Members  
 You must use the scope resolution operator to call static members of classes.  
  
```cpp  
class ClassG {  
public:  
    static int get_x() { return x;}  
    static int x;  
};  
  
int ClassG::x = 6;  
  
int main() {  
  
    int gx1 = ClassG::x;  
    int gx2 = ClassG::get_x();   
}  
  
```  
  
## With Scoped Enumerations  
 The scoped resolution operator is also used with the values of a scoped enumeration [Enumeration Declarations](../VS_visualcpp/Enumerations--C---.md), as in the following example:  
  
```cpp  
enum class EnumA{  
    First,  
    Second,  
    Third  
};  
  
int main() {  
  
    EnumA enum_value = EnumA::First;  
}  
  
```  
  
## See Also  
 [C++ Built-in Operators, Precedence and Associativity](../VS_visualcpp/C---Built-in-Operators--Precedence-and-Associativity.md)   
 [Namespaces](../VS_visualcpp/Namespaces--C---.md)   
 [Names and Qualified Names](../Topic/Names%20and%20Qualified%20Names.md)