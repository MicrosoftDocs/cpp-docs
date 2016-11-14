---
title: "Static Const Int Linkage Is No Longer Literal | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "literal attribute [C++]"
  - "constants, declaring"
  - "integral constant expressions"
ms.assetid: d2a5e3d2-ffb0-4b61-8114-bec5993a1195
caps.latest.revision: 8
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
# Static Const Int Linkage Is No Longer Literal
Declaration of a constant member of a class has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Although `static const` integral members are still supported, their linkage attribute has changed. Their former linkage attribute is now carried in a literal integral member. For example, consider the following Managed Extensions class:  
  
```  
public __gc class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 This generates the following underlying CIL attributes for the field (note the literal attribute):  
  
```  
.field public static literal int32   
modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 While this still compiles under the new syntax:  
  
```  
public ref class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 it no longer emits the literal attribute, and therefore is not viewed as a constant by the CLR runtime:  
  
```  
.field public static int32 modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 In order to have the same inter-language literal attribute, the declaration should be changed to the newly supported `literal` data member, as follows,  
  
```  
public ref class Constants {  
public:  
   literal int LOG_DEBUG = 4;  
};  
```  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [literal](../windows/literal-cpp-component-extensions.md)