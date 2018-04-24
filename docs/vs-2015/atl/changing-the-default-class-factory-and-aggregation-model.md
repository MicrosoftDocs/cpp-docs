---
title: "Changing the Default Class Factory and Aggregation Model | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComClassFactory class, making the default"
  - "aggregation [C++], using ATL"
  - "aggregation [C++], aggregation models"
  - "defaults [C++], aggregation model in ATL"
  - "default class factory"
  - "class factories, changing default"
  - "CComCoClass class, default class factory and aggregation model"
  - "default class factory, ATL"
  - "defaults [C++], class factory"
ms.assetid: 6e040e95-0f38-4839-8a8b-c9800dd47e8c
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing the Default Class Factory and Aggregation Model
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Changing the Default Class Factory and Aggregation Model](https://docs.microsoft.com/cpp/atl/changing-the-default-class-factory-and-aggregation-model).  
  
  
ATL uses [CComCoClass](../atl/reference/ccomcoclass-class.md) to define the default class factory and aggregation model for your object. `CComCoClass` specifies the following two macros:  
  
-   [DECLARE_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md) Declares the class factory to be [CComClassFactory](../atl/reference/ccomclassfactory-class.md).  
  
-   [DECLARE_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md) Declares that your object can be aggregated.  
  
 You can override either of these defaults by specifying another macro in your class definition. For example, to use [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) instead of `CComClassFactory`, specify the [DECLARE_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) macro:  
  
 [!code-cpp[NVC_ATL_COM#2](../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MyClass.h#2)]  
  
 Two other macros that define a class factory are [DECLARE_CLASSFACTORY_AUTO_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) and [DECLARE_CLASSFACTORY_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md).  
  
 ATL also uses the `typedef` mechanism to implement default behavior. For example, the `DECLARE_AGGREGATABLE` macro uses `typedef` to define a type called **_CreatorClass**, which is then referenced throughout ATL. Note that in a derived class, a `typedef` using the same name as the base class's `typedef` results in ATL using your definition and overriding the default behavior.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)   
 [Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)





