---
title: "CAtlAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlAutoThreadModule"
  - "CAtlAutoThreadModule"
  - "ATL::CAtlAutoThreadModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlAutoThreadModule class"
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CAtlAutoThreadModule Class
This class implements a thread-pooled, apartment-model COM server.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAtlAutoThreadModule :  public CAtlAutoThreadModuleT<CAtlAutoThreadModule>
```  
  
## Remarks  
 `CAtlAutoThreadModule` derives from [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) and implements a thread-pooled, apartment-model COM server. `CAtlAutoThreadModule` uses [CComApartment](../../atl/reference/ccomapartment-class.md) to manage an apartment for each thread in the module.  
  
 You must use the [DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) macro in your object's class definition to specify [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) as the class factory. You should then add a single instance of a class derived from `CAtlAutoThreadModuleT` such as `CAtlAutoThreadModule`. For example:  
  
 `CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`  
  
> [!NOTE]
>  This class replaces the obsolete [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) class.  
  
## Inheritance Hierarchy  
 `IAtlAutoThreadModule`  
  
 [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)  
  
 `CAtlAutoThreadModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [CAtlAutoThreadModuleT Class](../../atl/reference/catlautothreadmodulet-class.md)   
 [IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)