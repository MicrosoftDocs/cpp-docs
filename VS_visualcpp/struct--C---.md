---
title: "struct (C++)"
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
ms.assetid: 3c6ba273-e248-4ff1-8c69-d2abcf1263c6
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
# struct (C++)
The `struct` keyword defines a structure type and/or a variable of a structure type.  
  
## Syntax  
  
```  
[template-spec] struct[ms-decl-spec] [tag [: base-list ]]  
{   
   member-list   
} [declarators];  
[struct] tag declarators;  
```  
  
#### Parameters  
 `template-spec`  
 Optional template specifications. For more information, refer to [Template Specifications](../Topic/Template%20Specifications.md).  
  
 `struct`  
 The `struct` keyword.  
  
 `ms-decl-spec`  
 Optional storage-class specification. For more information, refer to the [__declspec](../VS_visualcpp/__declspec.md) keyword.  
  
 `tag`  
 The type name given to the structure. The tag becomes a reserved word within the scope of the structure. The tag is optional. If omitted, an anonymous structure is defined. For more information, see [Anonymous Class Types](../VS_visualcpp/Anonymous-Class-Types.md).  
  
 `base-list`  
 Optional list of classes or structures this structure will derive its members from. See [Base Classes](../VS_visualcpp/Base-Classes.md) for more information. Each base class or structure name can be preceded by an access specifier ([public](../VS_visualcpp/public--C---.md), [private](../VS_visualcpp/private--C---.md), [protected](../VS_visualcpp/protected--C---.md)) and the [virtual](../VS_visualcpp/virtual--C---.md) keyword. See the member-access table in [Controlling Access to Class Members](../Topic/Controlling%20Access%20to%20Class%20Members.md) for more information.  
  
 `member-list`  
 List of structure members. Refer to [Class Member Overview](../VS_visualcpp/Class-Member-Overview.md) for more information. The only difference here is that `struct` is used in place of `class`.  
  
 `declarators`  
 Declarator list specifying the names of the class. Declarator lists declare one or more instances of the structure type. Declarators may include initializer lists if all data members of the class are `public`. Initializer lists are common in structures because data members are `public` by default.  See [Overview of Declarators](../VS_visualcpp/Overview-of-Declarators.md) for more information.  
  
## Remarks  
 A structure type is a user-defined composite type. It is composed of fields or members that can have different types.  
  
 In C++, a structure is the same as a class except that its members are `public` by default.  
  
 For information on managed classes and structs, see [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md).  
  
## Using a Structure  
 In C, you must explicitly use the `struct` keyword to declare a structure. In C++, you do not need to use the `struct` keyword after the type has been defined.  
  
 You have the option of declaring variables when the structure type is defined by placing one or more comma-separated variable names between the closing brace and the semicolon.  
  
 Structure variables can be initialized. The initialization for each variable must be enclosed in braces.  
  
 For related information, see [class](../VS_visualcpp/class--C---.md), [union](../VS_visualcpp/Unions.md), and [enum](../VS_visualcpp/Enumerations--C---.md).  
  
## Example  
  
```  
#include <iostream>  
using namespace std;  
  
struct PERSON {   // Declare PERSON struct type  
    int age;   // Declare member types  
    long ss;  
    float weight;  
    char name[25];  
} family_member;   // Define object of type PERSON  
  
struct CELL {   // Declare CELL bit field  
    unsigned short character  : 8;  // 00000000 ????????  
    unsigned short foreground : 3;  // 00000??? 00000000  
    unsigned short intensity  : 1;  // 0000?000 00000000  
    unsigned short background : 3;  // 0???0000 00000000  
    unsigned short blink      : 1;  // ?0000000 00000000  
} screen[25][80];       // Array of bit fields   
  
int main() {  
    struct PERSON sister;   // C style structure declaration  
    PERSON brother;   // C++ style structure declaration  
    sister.age = 13;   // assign values to members  
    brother.age = 7;  
    cout << "sister.age = " << sister.age << '\n';  
    cout << "brother.age = " << brother.age << '\n';  
  
    CELL my_cell;  
    my_cell.character = 1;  
    cout << "my_cell.character = " << my_cell.character;  
}  
// Output:  
// sister.age = 13  
// brother.age = 7  
// my_cell.character = 1  
```  
  
## See Also  
 [(NOTINBUILD) Defining Class Types](assetId:///e8c65425-0f3a-4dca-afc2-418c3b1e57da)