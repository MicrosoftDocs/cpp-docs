---
title: "ComPtr::operator&amp; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::operator&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator& operator"
ms.assetid: 2d77fda6-f4b2-45c1-8a0e-fbc355013531
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtr::operator&amp; Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtr::operator&amp; Operator](https://docs.microsoft.com/cpp/windows/comptr-operator-ampersand-operator).  
  
  
Releases the interface associated with this `ComPtr` object and then retrieves the address of the `ComPtr` object.  
  
## Syntax  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&()  
  
const Details::ComPtrRef<const WeakRef> operator&() const  
```  
  
## Return Value  
 A weak reference to the current `ComPtr`.  
  
## Remarks  
 This method differs from [ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md) in that this method releases a reference to the interface pointer. Use `ComPtr::GetAddressOf` when you require the address of the interface pointer but do not want to release that interface.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)

