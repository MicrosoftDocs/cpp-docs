---
title: "Platform::Object Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Object class"
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Object Class
Provides common behavior for ref classes and ref structs in Windows Store apps. All ref class and ref struct instances are implicitly convertible to Platform::Object^ and can override its virtual ToString method.  
  
## Syntax  
  
```cpp  
public ref class Object : Object  
```  
  
### Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Object::Object Constructor](#ctor)|Initializes a new instance of the Object class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Object::Equals Method](#equals)|Determines whether the specified object is equal to the current object.|  
|[Object::GetHashCode Method](#gethashcode)|Returns the hash code for this instance.|  
|[Object::ReferenceEquals Method](#referenceequals)|Determines whether the specified Object instances are the same instance.|  
|[ToString Method](#tostring)|Returns a string that represents the current object. Can be overridden.|  
|[GetType Method](#gettype)|Gets a [Platform::Type](../cppcx/platform-type-class.md) that describes the current instance.|  
  
## Inheritance Hierarchy  
 `Object`  
  
 `Object`  
  
### Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  

  
## <a name="equals"></a> Object::Equals Method
Determines whether the specified object is equal to the current object.  
  
### Syntax  
  
```cpp  
  
bool Equals(  
    Object^ obj  
)  
```  
  
### Parameters  
 obj  
 The object to compare.  
  
### Return Value  
 `true` if the objects are equal, otherwise `false`.  
  


## <a name="gethashcode"></a>  Object::GetHashCode Method
Returns the `IUnknown`* identity value for this instance if it is a COM object, or a computed hash value if it is not a COM object.  
  
### Syntax  
  
```cpp  
public:int GetHashCode()  
```  
  
### Return Value  
 A numeric value that uniquely identifies this object.  
  
### Remarks  
 You can use GetHashCode to create keys for objects in maps. You can compare hash codes by using [Object::Equals Method](#equals). If the code path is extremely critical and `GetHashCode` and `Equals` are not sufficiently fast, then you can drop down to the underlying COM layer and do native `IUnknown` pointer comparisons.  
  


## <a name="gettype"></a>  Object::GetType Method
Returns a [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of an object.  
  
### Syntax  
  
```cpp  
Object::GetType()  
```  

  
### Property Value/Return Value  
 A [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of the object.  
  
### Remarks  
 The static [Type::GetTypeCode Method](../cppcx/platform-type-class.md#gettypecode) can be used to get a [Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md) value that represents the current type. This is mostly useful for built-in types. The type code for any ref class besides [Platform::String](../cppcx/platform-string-class.md) is Object (1).  
  
 The [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) class is used in the Windows APIs as a language-independent way of passing type information between Windows components and apps. The T[Platform::Type Class](../cppcx/platform-type-class.md) has operators for converting between `Type` and `TypeName`.  
  
 Use the [typeid](../windows/typeid-cpp-component-extensions.md) operator to return a `Platform::Type` object for a class name, for example when navigating between XAML pages:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## See Also  
 [Platform::Type Class](../cppcx/platform-type-class.md)   
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)   
 [Type System](../cppcx/type-system-c-cx.md
  
## <a name="ctor"></a>  Object::Object Constructor
Initializes a new instance of the Object class.  
  
### Syntax  
  
```cpp  
public:Object()  
```  

## <a name="referenceequals"></a>  Object::ReferenceEquals Method
Determines whether the specified Object instances are the same instance.  
  
### Syntax  
  
```cpp  
public:static bool ReferenceEquals(  Object^ obj1,   Object^ obj2)  
```  
  
### Parameters  
 obj1  
 The first object to compare.  
  
 obj2  
 The second object to compare.  
  
### Return Value  
 `true` if the two objects are the same; otherwise, `false`.  
 
## <a name="tostring"></a>  Object::ToString Method (C++/CX)
Returns a string that represents the current object.  
  
### Syntax  
  
```cpp  
public:  
virtual String^ ToString()  
```  
  
### Return Value  
 A string that represents the current object. You can override this method to provide a custom string message in your ref class or struct:  
  
```cpp  
public ref class Tree sealed  
{  
public:  
    Tree(){}  
    virtual Platform::String^ ToString() override  
    {  
      return "I’m a Tree";  
    };  
};  
```  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)