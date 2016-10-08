---
title: "CAtlAutoThreadModule Class"
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
ms.topic: reference
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
caps.latest.revision: 13
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
# CAtlAutoThreadModule Class
This class implements a thread-pooled, apartment-model COM server.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
class CAtlAutoThreadModule :  
    public CAtlAutoThreadModuleT< CAtlAutoThreadModule >  
```  
  
## Remarks  
 `CAtlAutoThreadModule` derives from [CAtlAutoThreadModuleT](../VS_visualcpp/CAtlAutoThreadModuleT-Class.md) and implements a thread-pooled, apartment-model COM server. `CAtlAutoThreadModule` uses [CComApartment](../VS_visualcpp/CComApartment-Class.md) to manage an apartment for each thread in the module.  
  
 You must use the [DECLARE_CLASSFACTORY_AUTO_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) macro in your object's class definition to specify [CComClassFactoryAutoThread](../VS_visualcpp/CComClassFactoryAutoThread-Class.md) as the class factory. You should then add a single instance of a class derived from `CAtlAutoThreadModuleT` such as `CAtlAutoThreadModule`. For example:  
  
 `CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`  
  
> [!NOTE]
>  This class replaces the obsolete [CComAutoThreadModule](../VS_visualcpp/CComAutoThreadModule-Class.md) class.  
  
## Inheritance Hierarchy  
 `IAtlAutoThreadModule`  
  
 [CAtlAutoThreadModuleT](../VS_visualcpp/CAtlAutoThreadModuleT-Class.md)  
  
 `CAtlAutoThreadModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [CAtlAutoThreadModuleT Class](../VS_visualcpp/CAtlAutoThreadModuleT-Class.md)   
 [IAtlAutoThreadModule Class](../VS_visualcpp/IAtlAutoThreadModule-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Module Classes](../VS_visualcpp/ATL-Module-Classes.md)