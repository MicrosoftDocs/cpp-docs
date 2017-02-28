---
title: "Object::GetType Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::GetType"
ms.assetid: f633d71a-ff80-49f9-931d-189c00b1f6c5
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Object::GetType Method
Returns a [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of an object.  
  
## Syntax  
  
```cpp  
Object::GetType()  
```  

  
## Property Value/Return Value  
 A [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of the object.  
  
## Remarks  
 The static [Type::GetTypeCode Method](../cppcx/type-gettypecode-method.md) can be used to get a [Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md) value that represents the current type. This is mostly useful for built-in types. The type code for any ref class besides [Platform::String](../cppcx/platform-string-class.md) is Object (1).  
  
 The [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) class is used in the Windows APIs as a language-independent way of passing type information between Windows components and apps. The T[Platform::Type Class](../cppcx/platform-type-class.md) has operators for converting between `Type` and `TypeName`.  
  
 Use the [typeid](../windows/typeid-cpp-component-extensions.md) operator to return a `Platform::Type` object for a class name, for example when navigating between XAML pages:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## See Also  
 [Platform::Type Class](../cppcx/platform-type-class.md)   
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)   
 [Type System](../cppcx/type-system-c-cx.md)