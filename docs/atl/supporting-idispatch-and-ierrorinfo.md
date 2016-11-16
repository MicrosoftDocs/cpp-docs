---
title: "Supporting IDispatch and IErrorInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IErrorInfo"
  - "IDispatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISupportErrorInfoImpl method"
  - "IErrorInfo class suppor in ATL"
  - "IDispatchImpl class"
  - "IDispatch class support in ATL"
ms.assetid: 7db2220f-319d-4ce9-9382-d340019f14f7
caps.latest.revision: 16
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
# Supporting IDispatch and IErrorInfo
You can use the template class [IDispatchImpl](../atl/reference/idispatchimpl-class.md) to provide a default implementation of the `IDispatch Interface` portion of any dual interfaces on your object.  
  
 If your object uses the `IErrorInfo` interface to report errors back to the client, then your object must support the `ISupportErrorInfo Interface` interface. The template class [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) provides an easy way to implement this if you only have a single interface that generates errors on your object.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)

