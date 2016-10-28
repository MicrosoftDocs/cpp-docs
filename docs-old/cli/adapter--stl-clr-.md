---
title: "adapter (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
# adapter (STL/CLR)
The STL/CLR header `<cliext/adapter>` specifies two template classes (`collection_adapter` and `range_adapter`), and the template function `make_collection`.  
  
## Syntax  
  
```  
#include <cliext/adapter>  
```  
  
## Remarks  
  
|Class|Description|  
|-----------|-----------------|  
|[collection_adapter (STL/CLR)](../cli/collection_adapter--stl-clr-.md)|Wraps the Base Class Library (BCL) collection as a range.|  
|[range_adapter (STL/CLR)](../cli/range_adapter--stl-clr-.md)|Wraps the range as a BCL collection.|  
  
|Function|Description|  
|--------------|-----------------|  
|[make_collection (STL/CLR)](../cli/make_collection--stl-clr-.md)|Creates a range adapter using an iterator pair.|  
  
## Requirements  
 **Header:** \<cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [STL/CLR Library Reference](../cli/stl-clr-library-reference.md)