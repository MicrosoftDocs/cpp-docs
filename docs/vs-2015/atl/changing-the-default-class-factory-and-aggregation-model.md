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
  
-   [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4) Declares the class factory to be [CComClassFactory](../atl/reference/ccomclassfactory-class.md).  
  
-   [DECLARE_AGGREGATABLE](http://msdn.microsoft.com/library/e7e568d7-04e0-4226-b5dc-224deed229ab) Declares that your object can be aggregated.  
  
 You can override either of these defaults by specifying another macro in your class definition. For example, to use [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) instead of `CComClassFactory`, specify the [DECLARE_CLASSFACTORY2](http://msdn.microsoft.com/library/38a6c969-7297-4bb1-9ba6-1fe2d355b285) macro:  
  
 [!code-cpp[NVC_ATL_COM#2](../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MyClass.h#2)]  
  
 Two other macros that define a class factory are [DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) and [DECLARE_CLASSFACTORY_SINGLETON](http://msdn.microsoft.com/library/0e4a3964-c03d-463e-884c-fe3b416db478).  
  
 ATL also uses the `typedef` mechanism to implement default behavior. For example, the `DECLARE_AGGREGATABLE` macro uses `typedef` to define a type called **_CreatorClass**, which is then referenced throughout ATL. Note that in a derived class, a `typedef` using the same name as the base class's `typedef` results in ATL using your definition and overriding the default behavior.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)   
 [Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)





