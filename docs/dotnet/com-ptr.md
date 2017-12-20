---
title: "com::ptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["ptr"]
dev_langs: ["C++"]
helpviewer_keywords: ["com::ptr"]
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "dotnet"]
---
# com::ptr
A wrapper for a COM object that can be used as a member of a CLR class. The wrapper also automates lifetime management of the COM object, releasing owned references on the object when its destructor is called. Analogous to [CComPtr Class](../atl/reference/ccomptr-class.md).  
  
## Syntax  
  
```  
#include <msclr\com\ptr.h>  
```  
  
## Remarks  
 [com::ptr Class](../dotnet/com-ptr-class.md) is defined in the \<msclr\com\ptr.h> file.  
  
## See Also  
 [C++ Support Library](../dotnet/cpp-support-library.md)