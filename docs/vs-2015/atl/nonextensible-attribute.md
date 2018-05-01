---
title: "nonextensible Attribute | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "nonextensible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nonextensible attribute"
  - "dual interfaces, nonextensible attribute"
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# nonextensible Attribute
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [nonextensible Attribute](https://docs.microsoft.com/cpp/atl/nonextensible-attribute).  
  
  
If a dual interface will not be extended at run time (that is, you won't provide methods or properties via **IDispatch::Invoke** that are not available via the vtable), you should apply the **nonextensible** attribute to your interface definition. This attribute provides information to client languages (such as Visual Basic) that can be used to enable full code verification at compile time. If this attribute is not supplied, bugs may remain hidden in the client code until run time.  
  
 For more information on the **nonextensible** attribute and an example, see [nonextensible](../windows/nonextensible.md).  
  
## See Also  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)





