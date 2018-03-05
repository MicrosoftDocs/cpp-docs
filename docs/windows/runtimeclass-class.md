---
title: "RuntimeClass Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass"]
dev_langs: ["C++"]
helpviewer_keywords: ["RuntimeClass class"]
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass Class
Represents a WinRT or COM class that inherits the specified interfaces and provides the specified Windows Runtime, classic COM, and weak reference support.  
  
This class provides the boilerplate implementation of WinRT and COM classes, providing the implementation of `QueryInterface`, `AddRef`, `Release` etc., manages the reference count of the module and has support for providing the class factory for activatable objects.
  
## Syntax  
  
```
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```
  
#### Parameters  
 `classFlags`  
Optional paramater. A combination of one or more [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration values. The `__WRL_CONFIGURATION_LEGACY__` macro can be defined to change the default value of classFlags for all runtime classes in the project. If defined, RuntimeClass instances are non-agile by default. When not defined, RuntimeClass instances are agile by default. To avoid ambiguity always specify the Microsoft::WRL::FtmBase in `TInterfaces` or RuntimeClassType::InhibitFtmBase. Note, if InhibitFtmBase and FtmBase are both used the object will be agile.
 
 `TInterfaces`  
The list of interfaces the object implements beyond IUnknown, IInspectable or other interfaces controlled by [RuntimeClassType](../windows/runtimeclasstype-enumeration.md). It also may list other classes to be derived from, notably Microsoft::WRL::FtmBase to make the object agile and cause it to implement IMarshal.
  
## Members  
`RuntimeClassInitialize`
A function which initializes the object if the MakeAndInitialize template function is used to construct the object. It returns S_OK if the object was successfully initialized, or a COM error code if initialization failed. The COM error code is propagated as the return value of MakeAndInitialize. Note that the RuntimeClassInitialize method is not called if the Make template function is used to construct the object.

### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[RuntimeClass::RuntimeClass Constructor](../windows/runtimeclass-runtimeclass-constructor.md)|Initializes the current instance of the RuntimeClass class.|  
|[RuntimeClass::~RuntimeClass Destructor](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinitializes the current instance of the RuntimeClass class.|  
  
## Inheritance Hierarchy  
This is an implementation detail.
  
## Requirements  
**Header:** implements.h  
  
**Namespace:** Microsoft::WRL  
  
## See Also  
[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)
