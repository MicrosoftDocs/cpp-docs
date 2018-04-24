---
title: "Requirements for STL-CLR Container Elements | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Requirements for STL/CLR Container Elements
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Requirements for STL/CLR Container Elements](https://docs.microsoft.com/cpp/dotnet/requirements-for-stl-clr-container-elements).  
  
  
All reference types that are inserted into STL/CLR containers must have, at a minimum, the following elements:  
  
-   A public copy constructor.  
  
-   A public assignment operator.  
  
-   A public destructor.  
  
 Furthermore, associative containers such as [set](../dotnet/set-stl-clr.md) and [map](../dotnet/map-stl-clr.md) must have a public comparison operator defined, which is `operator<` by default. Some operations on containers might also require a public default constructor and a public equivalence operator to be defined.  
  
 Like reference types, value types and handles to reference types that are to be inserted into an associative container must have a comparison operator such as `operator<` defined. The requirements for a public copy constructor, public assignment operator, and a public destructor do not exist for value types or handles to reference types.  
  
## See Also  
 [Standard Template Library](../misc/standard-template-library.md)

