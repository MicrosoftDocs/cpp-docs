---
title: "Compiler COM Support"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler COM Support
## Microsoft Specific  
 The Visual C++ compiler can directly read component object model (COM) type libraries and translate the contents into C++ source code that can be included in the compilation. Language extensions are available to facilitate COM programming on the client side.  
  
 By using the [#import preprocessor directive](../VS_visualcpp/#import-Directive--C---.md), the compiler can read a type library and convert it into a C++ header file that describes the COM interfaces as classes. A set of `#import` attributes is available for user control of the content for the resulting type library header files.  
  
 You can use the [__declspec](../VS_visualcpp/__declspec.md) extended attribute [uuid](../VS_visualcpp/uuid--C---.md) to assign a globally unique identifier (GUID) to a COM object. The keyword [__uuidof](../VS_visualcpp/__uuidof-Operator.md) can be used to extract the GUID associated with a COM object. Another `__declspec` attribute, [property](../VS_visualcpp/property--C---.md), can be used to specify the **get** and **set** methods for a data member of a COM object.  
  
 A set of COM support global functions and classes is provided to support the **VARIANT** and `BSTR` types, implement smart pointers, and encapsulate the error object thrown by `_com_raise_error`:  
  
-   [Compiler COM Global Functions](../VS_visualcpp/Compiler-COM-Global-Functions.md)  
  
-   [_bstr_t](../VS_visualcpp/_bstr_t-Class.md)  
  
-   [_com_error](../VS_visualcpp/_com_error-Class.md)  
  
-   [_com_ptr_t](../VS_visualcpp/_com_ptr_t-Class.md)  
  
-   [_variant_t](../VS_visualcpp/_variant_t-Class.md)  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler COM Support Classes](../VS_visualcpp/Compiler-COM-Support-Classes.md)   
 [Compiler COM Global Functions](../VS_visualcpp/Compiler-COM-Global-Functions.md)