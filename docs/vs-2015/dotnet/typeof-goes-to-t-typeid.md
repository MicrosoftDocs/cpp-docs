---
title: "typeof Goes to T::typeid | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "typeid operator"
  - "__typeof keyword"
  - "typeid keyword [C++]"
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# typeof Goes to T::typeid
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [typeof Goes to T::typeid](https://docs.microsoft.com/cpp/dotnet/typeof-goes-to-t-typeid).  
  
  
The `typeof` operator used in Managed Extensions for C++ has been supplanted by the `typeid` keyword in [!INCLUDE[cpp_current_long](../includes/cpp-current-long-md.md)].  
  
 In Managed Extensions, the `__typeof()` operator returns the associated `Type*` object when passed the name of a managed type. For example:  
  
```  
// Creates and initializes a new Array instance.  
Array* myIntArray =   
   Array::CreateInstance( __typeof(Int32), 5 );  
```  
  
 In the new syntax, `__typeof` has been replaced by an additional form of `typeid` that returns a `Type^` when a managed type is specified.  
  
```  
// Creates and initializes a new Array instance.  
Array^ myIntArray =   
   Array::CreateInstance( Int32::typeid, 5 );  
```  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [typeid](../windows/typeid-cpp-component-extensions.md)

