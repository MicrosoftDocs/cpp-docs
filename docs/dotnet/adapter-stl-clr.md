---
title: "adapter (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/adapter>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<adapter> header [STL/CLR]"
  - "adapter [STL/CLR]"
  - "<cliext/adapter> header [STL/CLR]"
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "dotnet"
---
# adapter (STL/CLR)
The STL/CLR header `<cliext/adapter>` specifies two template classes (`collection_adapter` and `range_adapter`), and the template function `make_collection`.  
  
## Syntax  
  
```  
#include <cliext/adapter>  
```  
  
## Remarks  
  
|Class|Description|  
|-----------|-----------------|  
|[collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)|Wraps the Base Class Library (BCL) collection as a range.|  
|[range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)|Wraps the range as a BCL collection.|  
  
|Function|Description|  
|--------------|-----------------|  
|[make_collection (STL/CLR)](../dotnet/make-collection-stl-clr.md)|Creates a range adapter using an iterator pair.|  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)