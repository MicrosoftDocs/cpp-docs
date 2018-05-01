---
title: "Visual Studio Interop Assembly Parameter Marshaling | Microsoft Docs"
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
  - "troubleshooting Visual Studio SDK interop assemblies"
  - "interop assemblies, parameter marshaling"
  - "interop assemblies, troubleshooting"
ms.assetid: 89123eae-0fef-46d5-bd36-3d2a166b14e3
caps.latest.revision: 24
manager: "douge"
---
# Visual Studio Interop Assembly Parameter Marshaling
VSPackages that are written in managed code might have to call or be called by unmanaged COM code. Typically, method arguments are transformed, or marshaled, automatically by the interop marshaler. However, sometimes arguments cannot be transformed in a straightforward manner. In those cases, the interop assembly method prototype parameters are used to match the COM function parameters as closely as possible. For more information, see [Interop Marshaling](http://msdn.microsoft.com/library/115f7a2f-d422-4605-ab36-13a8dd28142a).  
  
## General Suggestions  
  
##### Read the reference documentation  
 An effective way to detect interoperability issues is to read the reference documentation for each method.  
  
 The reference documentation for each method contains three relevant sections:  
  
-   The [!INCLUDE[vcprvc](../includes/vcprvc-md.md)] COM function prototype.  
  
-   The interop assembly method prototype.  
  
-   A list of the COM parameters and a short description of each.  
  
##### Look for differences between the two prototypes  
 Most interoperability issues derive from mismatches between the definition of a particular type in a COM interface and the definition of the same type in the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assemblies. For example, consider the difference in the ability to pass a `null` value in an [out] parameter. You must look for differences between the two prototypes and consider their ramifications for the data being passed.  
  
##### Read the parameter definitions  
 Read the parameter definitions. COM is less strict than the common language runtime (CLR) about mixing different types of data in a single parameter. The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] COM interfaces take full advantage of this flexibility. Any parameter that can pass or require a non-standard value or type of data, such as a constant value in a pointer parameter, should be described as such in the documentation.  
  
### IUnknown Objects Passed as Type void**  
 Look for [out] parameters that are defined as type `void **` in the COM interface, but that are defined as `[``iid_is``]` in the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly method prototype.  
  
 Sometimes, a COM interface generates an `IUnknown` object, and the COM interface then passes it as type `void **`. These interfaces are especially important because if the variable is defined as [out] in the IDL, then the `IUnknown` object is reference-counted with the `AddRef` method. A memory leak occurs if the object is not handled correctly.  
  
> [!NOTE]
>  An `IUnknown` object created by the COM interface and returned in an [out] variable causes a memory leak if it is not explicitly released.  
  
 Managed methods that handle such objects should treat <xref:System.IntPtr> as a pointer to an `IUnknown` object, and call the <xref:System.Runtime.InteropServices.Marshal.GetObjectForIUnknown%2A> method to obtain the object. The caller should then cast the return value to whatever type is appropriate. When the object is no longer needed, call <xref:System.Runtime.InteropServices.Marshal.Release%2A> to release it.  
  
 Following is an example of calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.QueryViewInterface%2A> method and handling the `IUnknown` object correctly:  
  
```  
MyClass myclass;  
Object object;  
IntPtr pObj;  
Guid iid = Typeof(MyClass).Guid;  
int hr = windowFrame.QueryViewInterface(ref iid, out pObj);     
if (NativeMethods.Succeeded(hr))   
{  
    try   
    {  
        object = Marshal.GetObjectForIUnknown(pObj);  
        myclass = object;  
    }  
    finally   
    {  
        Marshal.Release(pObj);  
    }  
}  
else   
{  
    // error calling QueryViewInterface  
}  
```  
  
> [!NOTE]
>  The following methods are known to pass `IUnknown` object pointers as type <xref:System.IntPtr>. Handle them as described in this section.  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CreateProject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsOwnedProjectFactory.InitializeForOwner%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetNestedHierarchy%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolution.CreateProject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.QueryViewInterface%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectCfg2.get_CfgType%2A>  
  
### Optional [out] Parameters  
 Look for parameters that are defined as an [out] data type (`int`, `object`, and so on) in the COM interface, but that are defined as arrays of the same data type in the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly method prototype.  
  
 Some COM interfaces, such as <xref:Microsoft.VisualStudio.Shell.Interop.IVsCfgProvider2.GetCfgs%2A>, treat [out] parameters as optional. If an object is not required, these COM interfaces return a `null` pointer as the value of that parameter instead of creating the [out] object. This is by design. For these interfaces, `null` pointers are assumed as part of the correct behavior of the VSPackage, and no error is returned.  
  
 Because the CLR does not allow the value of an [out] parameter to be `null`, part of the designed behavior of these interfaces is not directly available within managed code. The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly methods for affected interfaces work around the issue by defining the relevant parameters as arrays because the CLR allows the passing of `null` arrays.  
  
 Managed implementations of these methods should put a `null` array into the parameter when there is nothing to be returned. Otherwise, create a one-element array of the correct type and put the return value in the array.  
  
 Managed methods that receive information from interfaces with optional [out] parameters receive the parameter as an array. Just examine the value of the first element of the array. If it is not `null`, treat the first element as if it were the original parameter.  
  
### Passing Constants in Pointer Parameters  
 Look for parameters that are defined as [in] pointers in the COM interface, but that are defined as a <xref:System.IntPtr> type in the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly method prototype.  
  
 A similar issue occurs when a COM interface passes a special value, such as 0, -1, or –2, instead of an object pointer. Unlike [!INCLUDE[vcprvc](../includes/vcprvc-md.md)], the CLR does not allow constants to be cast as objects. Instead, the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly defines the parameter as a <xref:System.IntPtr> type.  
  
 Managed implementations of these methods should take advantage of the fact that the <xref:System.IntPtr> class has both `int` and `void *` constructors to create an <xref:System.IntPtr> from either an object or an integer constant, as appropriate.  
  
 Managed methods that receive <xref:System.IntPtr> parameters of this type should use the <xref:System.IntPtr> type conversion operators to handle the results. First convert the <xref:System.IntPtr> to `int` and test it against relevant integer constants. If no values match, convert it to an object of the required type and continue.  
  
 For examples of this, see <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShellOpenDocument.OpenStandardEditor%2A> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShellOpenDocument.OpenSpecificEditor%2A>.  
  
### OLE Return Values Passed as [out] Parameters  
 Look for methods that have a `retval` return value in the COM interface, but that have an `int` return value and an additional [out] array parameter in the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly method prototype. It should be clear that these methods require special handling because the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly method prototypes have one more parameter than the COM interface methods.  
  
 Many COM interfaces that deal with OLE activity send information about OLE status back to the calling program stored in the `retval` return value of the interface. Instead of using a return value, the corresponding [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] interop assembly methods send the information back to the calling program stored in an [out] array parameter.  
  
 Managed implementations of these methods should create a single-element array of the same type as the [out] parameter and put it in the parameter. The value of the array element should be the same as the appropriate COM `retval`.  
  
 Managed methods that call interfaces of this type should pull the first element out of the [out] array. This element can be treated as if it were a `retval` return value from the corresponding COM interface.  
  
## See Also  
 [Interop Marshaling](http://msdn.microsoft.com/en-us/a95fdb76-7c0d-409e-a77e-0349b1ea1490)   
 [Interop Marshaling](http://msdn.microsoft.com/library/115f7a2f-d422-4605-ab36-13a8dd28142a)   
 [Troubleshooting Interoperability](http://msdn.microsoft.com/library/b324cc1e-b03c-4f39-aea6-6a6d5bfd0e37)   
 [Managed VSPackages](../misc/managed-vspackages.md)