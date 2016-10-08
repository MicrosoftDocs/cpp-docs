---
title: "Member Declarations within a Class or Interface (C++-CLI)"
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
ms.topic: article
H1: Member Declarations within a Class or Interface (C++/CLI)
ms.assetid: 95d312a4-198b-46f0-b8f5-15253807c55e
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
# Member Declarations within a Class or Interface (C++-CLI)
The declaration of properties and operators has been extensively reworked from Managed Extensions for C++ to Visual C++, hiding the underlying implementation details that were exposed in the Managed Extensions design. Event declarations have been modified as well.  
  
 Under the category of changes that have no Managed Extensions support, static constructors can now be defined out-of-line (they were required to be defined inline within Managed Extensions), and the notion of a delegating constructor has been introduced.  
  
## In This Section  
 [Property Declaration](../VS_visualcpp/Property-Declaration.md)  
 Discusses changes to property declarations.  
  
 [Property Index Declaration](../VS_visualcpp/Property-Index-Declaration.md)  
 Discusses changes to indexed property declarations.  
  
 [Delegates and Events](../VS_visualcpp/Delegates-and-Events.md)  
 Discusses changes to the syntax for declaring delegates and events.  
  
 [Sealing a Virtual Function](../VS_visualcpp/Sealing-a-Virtual-Function.md)  
 Discusses changes to the syntax for sealing a function.  
  
 [Overloaded Operators](../VS_visualcpp/Overloaded-Operators.md)  
 Discusses changes to operator overloading.  
  
 [Changes to Conversion Operators](../VS_visualcpp/Changes-to-Conversion-Operators.md)  
 Discusses changes to conversion operators.  
  
 [Explicit Override of an Interface Member](../VS_visualcpp/Explicit-Override-of-an-Interface-Member.md)  
 Discusses changes to the method for explicitly overriding an interface member.  
  
 [Private Virtual Functions](../VS_visualcpp/Private-Virtual-Functions.md)  
 Discusses changes in the way private virtual functions are handled in derived classes.  
  
 [Static Const Int Linkage Is No Longer Literal](../VS_visualcpp/Static-Const-Int-Linkage-Is-No-Longer-Literal.md)  
 Discusses changes in the way `static const` integral members are linked and how to explicitly declare a constant using the new `literal` keyword.  
  
## See Also  
 [C++/CLI Migration Primer](../VS_visualcpp/C---CLI-Migration-Primer.md)