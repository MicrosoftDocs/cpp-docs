---
title: "Updating Property Values in the Properties Window | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Properties window, updating property values"
  - "property values, updating in Properties window"
ms.assetid: 9358e8c3-b9d2-4fd4-aaab-cf48d1526db4
caps.latest.revision: 9
manager: "douge"
---
# Updating Property Values in the Properties Window
There are two ways to keep the **Properties** window in sync with property value changes. The first is to call the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> interface, which provides access to basic windowing functionality, including access to and creation of tool and document windows provided by the environment. The following steps describe this synchronization process.  
  
## Updating Property Values Using IVsUIShell  
  
#### To update property values using the IVsUIShell interface  
  
1.  Call <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell> (through <xref:Microsoft.VisualStudio.Shell.Interop.SVsUIShell> service) any time that VSPackages, projects, or editors need to create or enumerate tool or document windows.  
  
2.  Implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.RefreshPropertyBrowser%2A> to keep the **Properties** window in sync with property changes for a project (or any other selected object being browsed by the **Properties** window) without implementing <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPointContainer> and firing <xref:Microsoft.VisualStudio.OLE.Interop.IPropertyNotifySink.OnChanged%2A> events.  
  
3.  Implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy> methods <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.AdviseHierarchyEvents%2A> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.UnadviseHierarchyEvents%2A> to establish and disable, respectively, client notification of hierarchy events without requiring the hierarchy to implement <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPointContainer>.  
  
## Updating Property Values Using IConnection  
 The second way to keep the **Properties** window in sync with property value changes is to implement `IConnection` on the connectable object to indicate the existence of the outgoing interfaces. If you wish to localize the property name, derive your object from <xref:System.ComponentModel.ICustomTypeDescriptor>. The <xref:System.ComponentModel.ICustomTypeDescriptor> implementation can modify the property descriptors it returns and change the name of a property. To localize the description, create an attribute which derives from <xref:System.ComponentModel.DescriptionAttribute> and override the Description property.  
  
#### Considerations in implementing the IConnection interface  
  
1.  `IConnection` provides access to an enumerator sub-object with the <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints> interface. It also provides access to all the connection point sub-objects, each of which implements the <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> interface.  
  
2.  Any browse object is responsible for implementing an <xref:Microsoft.VisualStudio.OLE.Interop.IPropertyNotifySink> event. The **Properties** window will advise for the event set through `IConnection`.  
  
3.  A connection point controls how many connections (one or more) it allows in its implementation of <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint.Advise%2A>. A connection point that allows only one interface can return <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL> from the <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint.EnumConnections%2A> method.  
  
4.  A client can call the `IConnection` interface to obtain access to an enumerator sub-object with the <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints> interface. The <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnectionPoints> interface can then be called to enumerate connection points for each outgoing interface ID (IID).  
  
5.  `IConnection` can also be called to obtain access to connection point sub-objects with the <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> interface for each outgoing IID. Through the <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> interface, a client starts or terminates an advisory loop with the connectable object and the client's own sync. The client can also call the <xref:Microsoft.VisualStudio.OLE.Interop.IConnectionPoint> interface to obtain an enumerator object with the <xref:Microsoft.VisualStudio.OLE.Interop.IEnumConnections> interface to enumerate the connections that it knows about.  
  
## See Also  
 [Announcing Property Window Selection Tracking](../misc/announcing-property-window-selection-tracking.md)   
 [Extending Properties](http://msdn.microsoft.com/library/68e2cbd4-861c-453f-8c9f-4ab6afc80e67)