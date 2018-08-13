---
title: "ComPtr::operator&amp; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::operator&"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator& operator"]
ms.assetid: 2d77fda6-f4b2-45c1-8a0e-fbc355013531
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::operator&amp; Operator
Releases the interface associated with this **ComPtr** object and then retrieves the address of the **ComPtr** object.  
  
## Syntax  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&()  
  
const Details::ComPtrRef<const WeakRef> operator&() const  
```  
  
## Return Value  
 A weak reference to the current **ComPtr**.  
  
## Remarks  
 This method differs from [ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md) in that this method releases a reference to the interface pointer. Use `ComPtr::GetAddressOf` when you require the address of the interface pointer but do not want to release that interface.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)