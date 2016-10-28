---
title: "ComPtr::ReleaseAndGetAddressOf Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseAndGetAddressOf method"
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
caps.latest.revision: 4
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
# ComPtr::ReleaseAndGetAddressOf Method
Releases the interface associated with this ComPtr and then retrieves the address of the [ptr_](../windows/comptr--ptr_-data-member.md) data member, which contains a pointer to the interface that was released.  
  
## Syntax  
  
```  
T** ReleaseAndGetAddressOf();  
```  
  
## Return Value  
 The address of the [ptr_](../windows/comptr--ptr_-data-member.md) data member of this ComPtr.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)   
 [ComPtr::ptr_ Data Member](../windows/comptr--ptr_-data-member.md)