---
title: "Changing the Default Class Factory and Aggregation Model"
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
ms.assetid: 6e040e95-0f38-4839-8a8b-c9800dd47e8c
caps.latest.revision: 9
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
# Changing the Default Class Factory and Aggregation Model
ATL uses [CComCoClass](../VS_visualcpp/CComCoClass-Class.md) to define the default class factory and aggregation model for your object. `CComCoClass` specifies the following two macros:  
  
-   [DECLARE_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md) Declares the class factory to be [CComClassFactory](../VS_visualcpp/CComClassFactory-Class.md).  
  
-   [DECLARE_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md) Declares that your object can be aggregated.  
  
 You can override either of these defaults by specifying another macro in your class definition. For example, to use [CComClassFactory2](../VS_visualcpp/CComClassFactory2-Class.md) instead of `CComClassFactory`, specify the [DECLARE_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) macro:  
  
 [!CODE [NVC_ATL_COM#2](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#2)]  
  
 Two other macros that define a class factory are [DECLARE_CLASSFACTORY_AUTO_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) and [DECLARE_CLASSFACTORY_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md).  
  
 ATL also uses the `typedef` mechanism to implement default behavior. For example, the `DECLARE_AGGREGATABLE` macro uses `typedef` to define a type called **_CreatorClass**, which is then referenced throughout ATL. Note that in a derived class, a `typedef` using the same name as the base class's `typedef` results in ATL using your definition and overriding the default behavior.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Aggregation and Class Factory Macros](../VS_visualcpp/Aggregation-and-Class-Factory-Macros.md)