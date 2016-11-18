---
title: "Requirements for STL-CLR Container Elements | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Standard C++ Library, template class containers"
  - "STL/CLR, containers"
  - "containers, STL/CLR"
  - "containers, STL"
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
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
# Requirements for STL/CLR Container Elements
All reference types that are inserted into STL/CLR containers must have, at a minimum, the following elements:  
  
-   A public copy constructor.  
  
-   A public assignment operator.  
  
-   A public destructor.  
  
 Furthermore, associative containers such as [set](../dotnet/set-stl-clr.md) and [map](../dotnet/map-stl-clr.md) must have a public comparison operator defined, which is `operator<` by default. Some operations on containers might also require a public default constructor and a public equivalence operator to be defined.  
  
 Like reference types, value types and handles to reference types that are to be inserted into an associative container must have a comparison operator such as `operator<` defined. The requirements for a public copy constructor, public assignment operator, and a public destructor do not exist for value types or handles to reference types.  
  
## See Also  
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)