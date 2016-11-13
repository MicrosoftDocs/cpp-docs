---
title: "Compiler COM Support | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, COM support"
  - "COM, compiler support"
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
caps.latest.revision: 7
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
# Compiler COM Support
## Microsoft Specific  
 The Visual C++ compiler can directly read component object model (COM) type libraries and translate the contents into C++ source code that can be included in the compilation. Language extensions are available to facilitate COM programming on the client side.  
  
 By using the [#import preprocessor directive](../preprocessor/hash-import-directive-cpp.md), the compiler can read a type library and convert it into a C++ header file that describes the COM interfaces as classes. A set of `#import` attributes is available for user control of the content for the resulting type library header files.  
  
 You can use the [__declspec](../cpp/declspec.md) extended attribute [uuid](../cpp/uuid-cpp.md) to assign a globally unique identifier (GUID) to a COM object. The keyword [__uuidof](../cpp/uuidof-operator.md) can be used to extract the GUID associated with a COM object. Another `__declspec` attribute, [property](../cpp/property-cpp.md), can be used to specify the **get** and **set** methods for a data member of a COM object.  
  
 A set of COM support global functions and classes is provided to support the **VARIANT** and `BSTR` types, implement smart pointers, and encapsulate the error object thrown by `_com_raise_error`:  
  
-   [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)  
  
-   [_bstr_t](../cpp/bstr-t-class.md)  
  
-   [_com_error](../cpp/com-error-class.md)  
  
-   [_com_ptr_t](../cpp/com-ptr-t-class.md)  
  
-   [_variant_t](../cpp/variant-t-class.md)  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)   
 [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)