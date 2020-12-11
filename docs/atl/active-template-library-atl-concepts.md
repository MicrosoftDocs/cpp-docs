---
description: "Learn more about: Active Template Library (ATL) Concepts"
title: "Active Template Library (ATL) Concepts"
ms.date: "05/06/2019"
helpviewer_keywords: ["ATL, about ATL"]
ms.assetid: a3960991-4d76-4da5-9568-3fa7fde53ff4
---
# Active Template Library (ATL) Concepts

The Active Template Library (ATL) is a set of template-based C++ classes that let you create small, fast Component Object Model (COM) objects. It has special support for key COM features, including stock implementations, dual interfaces, standard COM enumerator interfaces, connection points, tear-off interfaces, and ActiveX controls.

If you do a lot of ATL programming, you will want to learn more about COM and .NET attributes, which is designed to simplify COM programming. For more information, see [Attributed Programming](../windows/attributes/cpp-attributes-com-net.md). (COM and .NET attributes are not to be confused with the \[\[attribute]] feature in the C++ standard.)

## In This Section

[Introduction to COM and ATL](introduction-to-com-and-atl.md)<br/>
Introduces the major concepts behind the Component Object Model (COM). This article also briefly explains what ATL is and when you should use it.

[Fundamentals of ATL COM Objects](fundamentals-of-atl-com-objects.md)<br/>
Discusses the relationship among various ATL classes and how those classes are implemented.

[Dual Interfaces and ATL](dual-interfaces-and-atl.md)<br/>
Describes dual interfaces from an ATL perspective.

[ATL Collections and Enumerators](atl-collections-and-enumerators.md)<br/>
Describes the implementation and creation of collections and enumerators in ATL.

[Composite Control Fundamentals](atl-composite-control-fundamentals.md)<br/>
Provides step-by-step instructions for creating a composite control. A composite control is a type of ActiveX control that can contain other ActiveX controls or Windows controls.

[ATL Control Containment FAQ](atl-control-containment-faq.md)<br/>
Covers the fundamental questions related to hosting controls with ATL.

[ATL COM Property Pages](atl-com-property-pages.md)<br/>
Shows you how to specify and implement COM property pages.

[ATL Support for DHTML Controls](atl-support-for-dhtml-controls.md)<br/>
Provides step-by-step instructions for creating a DHTML control.

[ATL Connection Points](atl-connection-points.md)<br/>
Explains what connection points are and how ATL implements them.

[Event Handling and ATL](event-handling-and-atl.md)<br/>
Describes the steps that you need to take to handle COM events using ATL's [IDispEventImpl](reference/idispeventimpl-class.md) and [IDispEventSimpleImpl](reference/idispeventsimpleimpl-class.md) classes.

[ATL and the Free Threaded Marshaler](atl-and-the-free-threaded-marshaler.md)<br/>
Provides details on the ATL Simple Object Wizard's option that allows your class to aggregate the free threaded marshaler (FTM).

[Specifying the Project's Threading Model](specifying-the-threading-model-for-a-project-atl.md)<br/>
Describes the macros that are available to control run-time performance related to threading in your project.

[ATL Module Classes](atl-module-classes.md)<br/>
Discusses the module classes new for ATL 7.0. Module classes implement the basic functionality required by ATL.

[ATL Services](atl-services.md)<br/>
Covers the series of events that occur when a service is implemented. Also talks about some of the concepts related to developing a service.

[ATL Window Classes](atl-window-classes.md)<br/>
Describes how to create, superclass, and subclass windows in ATL. The ATL window classes are not COM classes.

[ATL Collection Classes](atl-collection-classes.md)<br/>
Describes how to use arrays and maps in ATL.

[The ATL Registry Component (Registrar)](atl-registry-component-registrar.md)<br/>
Discusses ATL scripting syntax and replaceable parameters. It also explains how to set up a static link to the Registrar.

[Programming with ATL and C Run-Time Code](programming-with-atl-and-c-run-time-code.md)<br/>
Discusses the benefits of linking statically or dynamically to the C Run-Time Library (CRT).

[Programming with CComBSTR](programming-with-ccombstr-atl.md)<br/>
Discusses several situations that require caution when programming with `CComBSTR`.

[Encoding Reference](atl-encoding-reference.md)<br/>
Provides functions and macros that support encoding in a range of common Internet standards such as uuencode, hexadecimal, and UTF8 in atlenc.h.

[Utilities Reference](atl-utilities-reference.md)<br/>
Provides code for manipulating paths and URLs in the form of [CPathT](reference/cpatht-class.md) and [CUrl](reference/curl-class.md). A thread pool, [CThreadPool](reference/cthreadpool-class.md), can be used in your own applications. This code can be found in atlpath.h and atlutil.h.

## Related Sections

[ATL Tutorial](active-template-library-atl-tutorial.md)<br/>
Leads you through the creation of a control and demonstrates some ATL fundamentals in the process.

[ATL Samples](../overview/visual-cpp-samples.md)<br/>
Provides descriptions of and links to the ATL sample programs.

[Creating an ATL Project](reference/creating-an-atl-project.md)<br/>
Contains information on the ATL Project Wizard.

[ATL Control Wizard](reference/atl-control-wizard.md)<br/>
Discusses how to add classes.

[Attributed Programming](../windows/attributes/cpp-attributes-com-net.md)<br/>
Provides an overview on using attributes to simplify COM programming plus a list of links to more detailed topics.

[ATL Class Overview](atl-class-overview.md)<br/>
Provides reference information and links to the ATL classes.
