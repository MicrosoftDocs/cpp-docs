---
title: "Deprecating types and members (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
ms.assetid: b20b01c1-a439-4ff0-8cf3-d7280c492813
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Deprecating types and members (C++/CX)
In C++/CX, deprecation of Windows Runtime types and members for producers and consumers by using the [Deprecated](http://msdn.microsoft.com/en-us/8b02ad36-3b5f-4361-888b-e6a99040e57c) attribute is supported. If you consume an API to which this attribute has been applied, you get a compile-time warning message that indicates that the API is deprecated and also recommends an alternative API to use. In your own public types and methods, you can apply this attribute and supply your own custom message.  
  
> [!CAUTION]
>  The [Deprecated](http://msdn.microsoft.com/en-us/8b02ad36-3b5f-4361-888b-e6a99040e57c) attribute is for use only with Windows Runtime types. For standard C++ classes and members, use [__declspec(deprecated)](http://msdn.microsoft.com/library/044swk7y.aspx).  
  
### Example  
 The following example shows how to deprecate your own public APIs—for example, in a Windows Runtime component. The second parameter, of type [Windows:Foundation::Metadata::DeprecationType](http://msdn.microsoft.com/en-us/ee01e63d-37d0-4273-accc-fca174f88bfa) specifies whether the API is being deprecated or removed. Currently only the DeprecationType::Deprecated value is supported. The third parameter in the attribute specifies the [Windows::Foundation::Metadata::Platform](http://msdn.microsoft.com/en-us/1eae292d-1ab7-4d97-a58c-b0beffd51ef5) to which the attribute applies.  
  
```  
  
namespace wfm = Windows::Foundation::Metadata;  
  
public ref class Bicycle sealed  
{  
  
public:  
    property double Speed;  
  
    [wfm::Deprecated("Use the Speed property to compute the angular speed of the wheel", wfm::DeprecationType::Deprecate, 0x0)]  
    double ComputeAngularVelocity();  
};  
```  
  
## Supported targets  
 The following table lists the constructs to which the Deprecated attribute may be applied:  
  
||  
|-|  
|XAML control|  
|delegate|  
|event|  
|enum field|  
|enum|  
|struct|  
|method|  
|class|  
|interface|  
|property|  
|struct field|  
|parameterized constructor|  
  
## See Also  
 [Type System](../cppcx/type-system-c-cx.md)   
 [Visual C++ Language Reference](../cppcx/visual-c-language-reference-c-cx.md)   
 [Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)