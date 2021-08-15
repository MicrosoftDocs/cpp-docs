---
description: "Learn more about: Changing the Default Class Factory and Aggregation Model"
title: "Changing the Default Class Factory and Aggregation Model"
ms.date: "11/04/2016"
helpviewer_keywords: ["CComClassFactory class, making the default", "aggregation [C++], using ATL", "aggregation [C++], aggregation models", "defaults [C++], aggregation model in ATL", "default class factory", "class factories, changing default", "CComCoClass class, default class factory and aggregation model", "default class factory, ATL", "defaults [C++], class factory"]
ms.assetid: 6e040e95-0f38-4839-8a8b-c9800dd47e8c
---
# Changing the Default Class Factory and Aggregation Model

ATL uses [CComCoClass](../atl/reference/ccomcoclass-class.md) to define the default class factory and aggregation model for your object. `CComCoClass` specifies the following two macros:

- [DECLARE_CLASSFACTORY](reference/aggregation-and-class-factory-macros.md#declare_classfactory) Declares the class factory to be [CComClassFactory](../atl/reference/ccomclassfactory-class.md).

- [DECLARE_AGGREGATABLE](reference/aggregation-and-class-factory-macros.md#declare_aggregatable) Declares that your object can be aggregated.

You can override either of these defaults by specifying another macro in your class definition. For example, to use [CComClassFactory2](../atl/reference/ccomclassfactory2-class.md) instead of `CComClassFactory`, specify the [DECLARE_CLASSFACTORY2](reference/aggregation-and-class-factory-macros.md#declare_classfactory2) macro:

[!code-cpp[NVC_ATL_COM#2](../atl/codesnippet/cpp/changing-the-default-class-factory-and-aggregation-model_1.h)]

Two other macros that define a class factory are [DECLARE_CLASSFACTORY_AUTO_THREAD](reference/aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) and [DECLARE_CLASSFACTORY_SINGLETON](reference/aggregation-and-class-factory-macros.md#declare_classfactory_singleton).

ATL also uses the **`typedef`** mechanism to implement default behavior. For example, the DECLARE_AGGREGATABLE macro uses **`typedef`** to define a type called `_CreatorClass`, which is then referenced throughout ATL. Note that in a derived class, a **`typedef`** using the same name as the base class's **`typedef`** results in ATL using your definition and overriding the default behavior.

## See also

[Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)
