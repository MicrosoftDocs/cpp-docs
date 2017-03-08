---
title: "Platform::Type Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
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
Contains run-time information about a type—specifically, a string name and a typecode. Obtained by calling [Object::GetType Method](../cppcx/platform-object-class.md#gettype) on any object or  or using the [typeid](../windows/typeid-cpp-component-extensions.md) operator on a class or struct name.  
  
## Syntax  
  
```cpp  
public ref class Platform::Type :      
    Platform::Object, Platform::Details::IEquatable,
    Platform::Details::IPrintable  
```  
  
### Remarks  
 The `Type` class is useful in applications that must direct processing by using an `if` or `switch` statement that branches based on the run-time type of an object. The type code that describes the category of a type is retrieved by using the [Type::GetTypeCode Method](#gettypecode) member function.  
  
## Public methods  
  
|||  
|-|-|  
|[Type::GetTypeCode Method](#gettypecode)|Returns a [Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md) value for the object.|  
  
## Public properties  
  
|||  
|-|-|  
|[Type::FullName Property](#fullname)|Returns a [Platform::String Class](../cppcx/platform-string-class.md)^ that represents the fully qualified name of the type, and uses . (dot) as a separator, not :: (double colon)—for example, “MyNamespace.MyClass”.|  
  
## Conversion operators  
  
|||  
|-|-|  
|[operator Type^](../cppcx/operator-subtracttype-hat.md)|Enables conversion from `Windows::UI::Xaml::Interop::TypeName` to `Platform::Type`.|  
|[operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-subtractwindows-ui-xaml-interop-typename.md)|Enables conversion from `Platform::Type` to `Windows::UI::Xaml::Interop::TypeName`.|  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  

 
## <a name="fullname"></a> Type::FullName Property
Retrieves the fully-qualified name of the current type in the form “Namespace.Type”.  
  
### Syntax  
  
```cpp  
String^ FullName();  
```  
  
### Return Value  
 The name of the type.  
### Example  
  
```  
  
//  namespace is TestApp  
MainPage::MainPage()  
{  
    InitializeComponent();  
    Type^ t = this->GetType();  
    auto s = t->FullName; // returns “TestApp.MainPage”  
    auto s2 = t->ToString(); //also returns “TestApp.MainPage”  
}  
```  
  


## <a name="gettypecode"></a> Type::GetTypeCode Method
Retrieves a built-in types numerical type category.  
  
### Syntax  
  
```cpp  
Platform::TypeCode GetTypeCode();  
```  
  
### Return Value  
 One of the Platform::TypeCode enumerated values.  
  
### Remarks  
 The equivalent of the GetTypeCode() member method is the `typeid` property.  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)