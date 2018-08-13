---
title: "Module::Create Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::Create"]
dev_langs: ["C++"]
helpviewer_keywords: ["Create method"]
ms.assetid: bfa97fd7-5226-4604-92a5-3b9697053e64
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::Create Method
Creates an instance of a module.  
  
## Syntax  
  
```cpp  
WRL_NOTHROW static Module& Create();  
template<typename T>  
WRL_NOTHROW static Module& Create(  
   T callback  
);  
template<typename T>  
WRL_NOTHROW static Module& Create(  
   _In_ T* object,  
   _In_ void (T::* method)()  
);  
```  
  
### Parameters  
 *T*  
 Module type.  
  
 *callback*  
 Called when the last instance object of the module is released.  
  
 *object*  
 The *object* and *method* parameters are used in combination. Points to the last instance object when the last instance object in the module is released.  
  
 *method*  
 The *object* and *method* parameters are used in combination. Points to the method of the last instance object when the last instance object in the module is released.  
  
## Return Value  
 Reference to the module.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
[Module Class](../windows/module-class.md)