---
title: "Member Declarations within a Class or Interface (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["members, declaration syntax", "class members, declaration syntax"]
ms.assetid: 95d312a4-198b-46f0-b8f5-15253807c55e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Member Declarations within a Class or Interface (C++/CLI)
The declaration of properties and operators has been extensively reworked from Managed Extensions for C++ to Visual C++, hiding the underlying implementation details that were exposed in the Managed Extensions design. Event declarations have been modified as well.  
  
 Under the category of changes that have no Managed Extensions support, static constructors can now be defined out-of-line (they were required to be defined inline within Managed Extensions), and the notion of a delegating constructor has been introduced.  
  
## In This Section  
 [Property Declaration](../dotnet/property-declaration.md)  
 Discusses changes to property declarations.  
  
 [Property Index Declaration](../dotnet/property-index-declaration.md)  
 Discusses changes to indexed property declarations.  
  
 [Delegates and Events](../dotnet/delegates-and-events.md)  
 Discusses changes to the syntax for declaring delegates and events.  
  
 [Sealing a Virtual Function](../dotnet/sealing-a-virtual-function.md)  
 Discusses changes to the syntax for sealing a function.  
  
 [Overloaded Operators](../dotnet/overloaded-operators.md)  
 Discusses changes to operator overloading.  
  
 [Changes to Conversion Operators](../dotnet/changes-to-conversion-operators.md)  
 Discusses changes to conversion operators.  
  
 [Explicit Override of an Interface Member](../dotnet/explicit-override-of-an-interface-member.md)  
 Discusses changes to the method for explicitly overriding an interface member.  
  
 [Private Virtual Functions](../dotnet/private-virtual-functions.md)  
 Discusses changes in the way private virtual functions are handled in derived classes.  
  
 [Static Const Int Linkage Is No Longer Literal](../dotnet/static-const-int-linkage-is-no-longer-literal.md)  
 Discusses changes in the way `static const` integral members are linked and how to explicitly declare a constant using the new `literal` keyword.  
  
## See Also  
 [C++/CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md)