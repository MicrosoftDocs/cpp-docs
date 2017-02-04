---
title: "Attributes (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 4438e03c-4de3-433d-abcc-31aa863bc0e0
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Attributes (C++-CX)
An attribute is a special kind of ref class that can be prepended in square brackets to [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types and methods to specify certain behaviors in metadata creation. Several predefined attributes—for example,  [Windows::Foundation::Metadata::WebHostHidden](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.webhosthiddenattribute.aspx)—are commonly used in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] code. This example shows how the attribute is applied to a class:  
  
 [!code-cpp[cx_attributes#01](../cppcx/codesnippet/CPP/cx_attributes/class1.h#01)]  
  
## Custom attributes  
 You can also define custom attributes. Custom attributes must conform to these [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] rules:  
  
-   Custom attributes can contain only public fields.  
  
-   Custom attribute fields can be initialized when the attribute is applied to a class.  
  
-   A field may be one of these types:  
  
    -   int32 (int)  
  
    -   uint32 (unsigned int)  
  
    -   bool  
  
    -   Platform::String^  
  
    -   Windows::Foundation::HResult  
  
    -   Platform::Type^  
  
    -   public enum class (includes user-defined enums)  
  
 The next example shows how to define a custom attribute and then initialize it when you use it.  
  
 [!code-cpp[cx_attributes#02](../cppcx/codesnippet/CPP/cx_attributes/class1.h#02)]  
  
## See Also  
 [Type System (C++/CX)](../cppcx/type-system-c-cx.md)   
 [Visual C++ Language Reference](../cppcx/visual-c-language-reference-c-cx.md)   
 [Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)