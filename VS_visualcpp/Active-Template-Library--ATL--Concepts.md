---
title: "Active Template Library (ATL) Concepts"
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
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
caps.latest.revision: 16
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
# Active Template Library (ATL) Concepts
The Active Template Library (ATL) is a set of template-based C++ classes that let you create small, fast Component Object Model (COM) objects. It has special support for key COM features, including stock implementations, dual interfaces, standard COM enumerator interfaces, connection points, tear-off interfaces, and ActiveX controls.  
  
 If you do a lot of ATL programming, you will want to learn more about attributes, a new feature in Visual C++ .NET that is designed to simplify COM programming. For more information, see [Attributed Programming](../VS_visualcpp/Attributed-Programming-Concepts.md).  
  
## In This Section  
 [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md)  
 Leads you through the creation of a control and demonstrates some ATL fundamentals in the process.  
  
 [Introduction to COM and ATL](../VS_visualcpp/Introduction-to-COM-and-ATL.md)  
 Introduces the major concepts behind the Component Object Model (COM). This article also briefly explains what ATL is and when you should use it.  
  
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)  
 Discusses the relationship among various ATL classes and how those classes are implemented.  
  
 [Dual Interfaces and ATL](../VS_visualcpp/Dual-Interfaces-and-ATL.md)  
 Describes dual interfaces from an ATL perspective.  
  
 [ATL Collections and Enumerators](../VS_visualcpp/ATL-Collections-and-Enumerators.md)  
 Describes the implementation and creation of collections and enumerators in ATL.  
  
 [Composite Control Fundamentals](../VS_visualcpp/ATL-Composite-Control-Fundamentals.md)  
 Provides step-by-step instructions for creating a composite control. A composite control is a type of ActiveX control that can contain other ActiveX controls or Windows controls.  
  
 [ATL Control Containment FAQ](../VS_visualcpp/ATL-Control-Containment-FAQ.md)  
 Covers the fundamental questions related to hosting controls with ATL.  
  
 [ATL COM Property Pages](../VS_visualcpp/ATL-COM-Property-Pages.md)  
 Shows you how to specify and implement COM property pages.  
  
 [ATL Support for DHTML Controls](../VS_visualcpp/ATL-Support-for-DHTML-Controls.md)  
 Provides step-by-step instructions for creating a DHTML control.  
  
 [ATL Connection Points](../VS_visualcpp/ATL-Connection-Points.md)  
 Explains what connection points are and how ATL implements them.  
  
 [Event Handling and ATL](../VS_visualcpp/Event-Handling-and-ATL.md)  
 Describes the steps that you need to take to handle COM events using ATL's [IDispEventImpl](../VS_visualcpp/IDispEventImpl-Class.md) and [IDispEventSimpleImpl](../VS_visualcpp/IDispEventSimpleImpl-Class.md) classes.  
  
 [ATL and the Free Threaded Marshaler](../VS_visualcpp/ATL-and-the-Free-Threaded-Marshaler.md)  
 Provides details on the ATL Simple Object Wizard's option that allows your class to aggregate the free threaded marshaler (FTM).  
  
 [Specifying the Project's Threading Model](../VS_visualcpp/Specifying-the-Threading-Model-for-a-Project--ATL-.md)  
 Describes the macros that are available to control run-time performance related to threading in your project.  
  
 [ATL Module Classes](../VS_visualcpp/ATL-Module-Classes.md)  
 Discusses the module classes new for ATL 7.0. Module classes implement the basic functionality required by ATL.  
  
 [ATL Services](../VS_visualcpp/ATL-Services.md)  
 Covers the series of events that occur when a service is implemented. Also talks about some of the concepts related to developing a service.  
  
 [ATL Window Classes](../VS_visualcpp/ATL-Window-Classes.md)  
 Describes how to create, superclass, and subclass windows in ATL. The ATL window classes are not COM classes.  
  
 [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md)  
 Describes how to use arrays and maps in ATL.  
  
 [The ATL Registry Component (Registrar)](../VS_visualcpp/ATL-Registry-Component--Registrar-.md)  
 Discusses ATL scripting syntax and replaceable parameters. It also explains how to set up a static link to the Registrar.  
  
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)  
 Discusses the benefits of linking statically or dynamically to the C Run-Time Library (CRT).  
  
 [Programming with CComBSTR](../VS_visualcpp/Programming-with-CComBSTR--ATL-.md)  
 Discusses several situations that require caution when programming with `CComBSTR`.  
  
 [Encoding Reference](../VS_visualcpp/ATL-Encoding-Reference.md)  
 Provides functions and macros that support encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 in atlenc.h.  
  
 [Utilities Reference](../VS_visualcpp/ATL-Utilities-Reference.md)  
 Provides code for manipulating paths and URLs in the form of [CPathT](../VS_visualcpp/CPathT-Class.md) and [CUrl](../VS_visualcpp/CUrl-Class.md). A thread pool, [CThreadPool](../VS_visualcpp/CThreadPool-Class.md), can be used in your own applications. This code can be found in atlpath.h and atlutil.h.  
  
## Related Sections  
 [ATL Samples](../VS_visualcpp/Visual-C---Samples.md)  
 Provides descriptions of and links to the ATL sample programs.  
  
 [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)  
 Contains information on the ATL Project Wizard.  
  
 [ATL Control Wizard](../VS_visualcpp/ATL-Control-Wizard.md)  
 Discusses how to add classes.  
  
 [Attributed Programming](../VS_visualcpp/Attributed-Programming-Concepts.md)  
 Provides an overview on using attributes to simplify COM programming plus a list of links to more detailed topics.  
  
 [ATL Class Overview](../VS_visualcpp/ATL-Class-Overview.md)  
 Provides reference information and links to the ATL classes.