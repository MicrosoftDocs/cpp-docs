---
title: "marshal_context Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["marshal_context"]
dev_langs: ["C++"]
helpviewer_keywords: ["marshal_context class [C++]"]
ms.assetid: 241b0cf6-4ca4-4812-aaee-d671c11dc034
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# marshal_context Class
This class converts data between native and managed environments.  
  
## Syntax  
  
```  
class marshal_context  
```  
  
## Remarks  
 Use the `marshal_context` class for data conversions that require a context. See [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md) for more information about which conversions require a context and which marshaling file has to be included. The result of marshaling when you use a context is valid only until the `marshal_context` object is destroyed. To preserve your result, you must copy the data.  
  
 The same `marshal_context` can be used for multiple data conversions. Reusing the context in this manner will not affect the results from previous marshaling calls.  
  
## Requirements  
 **Header file:** \<msclr\marshal.h>, \<msclr\marshal_windows.h>, \<msclr\marshal_cppstd.h>, or \<msclr\marshal_atl.h>  
  
 **Namespace:** msclr::interop  
  
## See Also  
 [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_as](../dotnet/marshal-as.md)