---
title: "Compiler COM Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_raise_error"]
dev_langs: ["C++"]
helpviewer_keywords: ["cl.exe compiler, COM support", "COM, compiler support"]
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Compiler COM Support Classes
**Microsoft Specific**  
  
 Standard classes are used to support some of the COM types. The classes are defined in \<comdef.h> and the header files generated from the type library.  
  
|Class|Purpose|  
|-----------|-------------|  
|[_bstr_t](../cpp/bstr-t-class.md)|Wraps the `BSTR` type to provide useful operators and methods.|  
|[_com_error](../cpp/com-error-class.md)|Defines the error object thrown by [_com_raise_error](../cpp/com-raise-error.md) in most failures.|  
|[_com_ptr_t](../cpp/com-ptr-t-class.md)|Encapsulates COM interface pointers, and automates the required calls to `AddRef`, `Release`, and `QueryInterface`.|  
|[_variant_t](../cpp/variant-t-class.md)|Wraps the `VARIANT` type to provide useful operators and methods.|  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler COM Support](../cpp/compiler-com-support.md)   
 [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)