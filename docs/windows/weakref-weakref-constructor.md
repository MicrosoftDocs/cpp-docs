---
title: "WeakRef::WeakRef Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::WeakRef::WeakRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WeakRef, constructor"
ms.assetid: 589f87e0-8dcc-4e82-aab2-f2f66f1ec47c
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# WeakRef::WeakRef Constructor
Initializes a new instance of the WeakRef class.  
  
## Syntax  
  
```  
WeakRef();  
WeakRef(  
   decltype(__nullptr)  
);  
  
WeakRef(  
   _In_opt_ IWeakReference* ptr  
);  
  
WeakRef(  
   const ComPtr<IWeakReference>& ptr  
);  
  
WeakRef(  
   const WeakRef& ptr  
);  
  
WeakRef(  
   _Inout_ WeakRef&& ptr  
);  
```  
  
#### Parameters  
 `ptr`  
 A pointer, reference, or rvalue-reference to an existing object that initializes the current WeakRef object.  
  
## Remarks  
 The first constructor initializes an empty WeakRef object. The second constructor initializes a WeakRef object from a pointer to the IWeakReference interface. The third constructor initializes a WeakRef object from a reference to a ComPtr\< IWeakReference> object. The fourth and fifth constructors initializes a WeakRef object from another WeakRef object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [WeakRef Class](../windows/weakref-class.md)