---
title: "Active Template Library (ATL) Concepts | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, about ATL"
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
caps.latest.revision: 18
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
# Active Template Library (ATL) Concepts
The Active Template Library (ATL) is a set of template-based C++ classes that let you create small, fast Component Object Model (COM) objects. It has special support for key COM features, including stock implementations, dual interfaces, standard COM enumerator interfaces, connection points, tear-off interfaces, and ActiveX controls.  
  
 If you do a lot of ATL programming, you will want to learn more about attributes, a new feature in Visual C++ .NET that is designed to simplify COM programming. For more information, see [Attributed Programming](../windows/attributed-programming-concepts.md).  
  
## In This Section  
 [ATL Tutorial](../atl/active-template-library-atl-tutorial.md)  
 Leads you through the creation of a control and demonstrates some ATL fundamentals in the process.  
  
 [Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)  
 Introduces the major concepts behind the Component Object Model (COM). This article also briefly explains what ATL is and when you should use it.  
  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)  
 Discusses the relationship among various ATL classes and how those classes are implemented.  
  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)  
 Describes dual interfaces from an ATL perspective.  
  
 [ATL Collections and Enumerators](../atl/atl-collections-and-enumerators.md)  
 Describes the implementation and creation of collections and enumerators in ATL.  
  
 [Composite Control Fundamentals](../atl/atl-composite-control-fundamentals.md)  
 Provides step-by-step instructions for creating a composite control. A composite control is a type of ActiveX control that can contain other ActiveX controls or Windows controls.  
  
 [ATL Control Containment FAQ](../atl/atl-control-containment-faq.md)  
 Covers the fundamental questions related to hosting controls with ATL.  
  
 [ATL COM Property Pages](../atl/atl-com-property-pages.md)  
 Shows you how to specify and implement COM property pages.  
  
 [ATL Support for DHTML Controls](../atl/atl-support-for-dhtml-controls.md)  
 Provides step-by-step instructions for creating a DHTML control.  
  
 [ATL Connection Points](../atl/atl-connection-points.md)  
 Explains what connection points are and how ATL implements them.  
  
 [Event Handling and ATL](../atl/event-handling-and-atl.md)  
 Describes the steps that you need to take to handle COM events using ATL's [IDispEventImpl](../atl/reference/idispeventimpl-class.md) and [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classes.  
  
 [ATL and the Free Threaded Marshaler](../atl/atl-and-the-free-threaded-marshaler.md)  
 Provides details on the ATL Simple Object Wizard's option that allows your class to aggregate the free threaded marshaler (FTM).  
  
 [Specifying the Project's Threading Model](../atl/specifying-the-threading-model-for-a-project-atl.md)  
 Describes the macros that are available to control run-time performance related to threading in your project.  
  
 [ATL Module Classes](../atl/atl-module-classes.md)  
 Discusses the module classes new for ATL 7.0. Module classes implement the basic functionality required by ATL.  
  
 [ATL Services](../atl/atl-services.md)  
 Covers the series of events that occur when a service is implemented. Also talks about some of the concepts related to developing a service.  
  
 [ATL Window Classes](../atl/atl-window-classes.md)  
 Describes how to create, superclass, and subclass windows in ATL. The ATL window classes are not COM classes.  
  
 [ATL Collection Classes](../atl/atl-collection-classes.md)  
 Describes how to use arrays and maps in ATL.  
  
 [The ATL Registry Component (Registrar)](../atl/atl-registry-component-registrar.md)  
 Discusses ATL scripting syntax and replaceable parameters. It also explains how to set up a static link to the Registrar.  
  
 [Programming with ATL and C Run-Time Code](../atl/programming-with-atl-and-c-run-time-code.md)  
 Discusses the benefits of linking statically or dynamically to the C Run-Time Library (CRT).  
  
 [Programming with CComBSTR](../atl/programming-with-ccombstr-atl.md)  
 Discusses several situations that require caution when programming with `CComBSTR`.  
  
 [Encoding Reference](../atl/atl-encoding-reference.md)  
 Provides functions and macros that support encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 in atlenc.h.  
  
 [Utilities Reference](../atl/atl-utilities-reference.md)  
 Provides code for manipulating paths and URLs in the form of [CPathT](../atl/reference/cpatht-class.md) and [CUrl](../atl/reference/curl-class.md). A thread pool, [CThreadPool](../atl/reference/cthreadpool-class.md), can be used in your own applications. This code can be found in atlpath.h and atlutil.h.  
  
## Related Sections  
 [ATL Samples](../visual-cpp-samples.md)  
 Provides descriptions of and links to the ATL sample programs.  
  
 [Creating an ATL Project](../atl/reference/creating-an-atl-project.md)  
 Contains information on the ATL Project Wizard.  
  
 [ATL Control Wizard](../atl/reference/atl-control-wizard.md)  
 Discusses how to add classes.  
  
 [Attributed Programming](../windows/attributed-programming-concepts.md)  
 Provides an overview on using attributes to simplify COM programming plus a list of links to more detailed topics.  
  
 [ATL Class Overview](../atl/atl-class-overview.md)  
 Provides reference information and links to the ATL classes.

