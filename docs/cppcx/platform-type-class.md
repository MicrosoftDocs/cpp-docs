---
title: "Platform::Type Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Type Class"
ms.assetid: d6b03f1e-b240-49b9-a08e-53a460030475
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Type Class
Contains run-time information about a type—specifically, a string name and a typecode. Obtained by calling [Object::GetType Method](../cppcx/object-gettype-method.md) on any object or  or using the [typeid](../Topic/typeid%20%20\(C++%20Component%20Extensions\).md) operator on a class or struct name.  
  
## Syntax  
  
```cpp  
public ref class Platform::Type :      Platform::Object,      Platform::Details::IEquatable,      Platform::Details::IPrintable  
```  
  
## Remarks  
 The `Type` class is useful in applications that must direct processing by using an `if` or `switch` statement that branches based on the run-time type of an object. The type code that describes the category of a type is retrieved by using the [Type::GetTypeCode Method](../cppcx/type-gettypecode-method.md) member function..  
  
## Public methods  
  
|||  
|-|-|  
|[Type::GetTypeCode Method](../cppcx/type-gettypecode-method.md)|Returns a [Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md) value for the object.|  
  
## Public properties  
  
|||  
|-|-|  
|[Type::FullName Property](../cppcx/type-fullname-property.md)|Returns a [Platform::String Class](../cppcx/platform-string-class.md)^ that represents the fully qualified name of the type, and uses . (dot) as a separator, not :: (double colon)—for example, “MyNamespace.MyClass”.|  
  
## Conversion operators  
  
|||  
|-|-|  
|[operator Type^](../cppcx/operator-subtracttype-hat.md)|Enables conversion from `Windows::UI::Xaml::Interop::TypeName` to `Platform::Type`.|  
|[operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)|Enables conversion from `Platform::Type` to `Windows::UI::Xaml::Interop::TypeName`.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)