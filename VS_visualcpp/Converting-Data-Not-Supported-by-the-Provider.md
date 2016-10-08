---
title: "Converting Data Not Supported by the Provider"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Converting Data Not Supported by the Provider
When the consumer requests a data type that is not supported by the provider, the OLE DB provider template code for `IRowsetImpl::GetData` calls Msdadc.dll to convert the data type.  
  
 If you implement an interface like `IRowsetChange` that requires data conversion, you can call Msdaenum.dll to do the conversion. Use `GetData`, defined in Atldb.h, as an example.  
  
## See Also  
 [Working with OLE DB Provider Templates](../VS_visualcpp/Working-with-OLE-DB-Provider-Templates.md)