---
title: "Implementing VSPackages By Using the Visual Studio Library | Microsoft Docs"
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
  - "Visual Studio Library, implementing VSPackages"
ms.assetid: 4cbac13f-2a9d-4955-b411-dad79081fdeb
caps.latest.revision: 7
manager: "douge"
---
# Implementing VSPackages By Using the Visual Studio Library
The `IVsPackageImpl` class in the Visual Studio Library provides a minimal implementation of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> interface. `IVsPackageImpl` takes care of most of the maintenance methods of <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage>. Other methods you might need to override to provide a meaningful implementation include:  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.CreateTool%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.ResetDefaults%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetPropertyPage%2A>  
  
    > [!NOTE]
    >  The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Package Template generates all the code discussed here. You can save time by using the template to generate a VSPackage for you.  
  
 Packages that are implemented by using the Visual Studio Library typically inherit a VSPackage class from ATL's [CComObjectRootEx Class](../atl/reference/ccomobjectrootex-class.md) and [CComCoClass Class](../atl/reference/ccomcoclass-class.md) and Visual Studio Library's IVsPackageImpl. For example, following is the VSPackage class declaration from the Reference.Package sample:  
  
```  
class ATL_NO_VTABLE BasicPackage :   
    public CComObjectRootEx<CComSingleThreadModel>,  
    public CComCoClass<BasicPackage, &CLSID_BasicPackage>,  
    public IVsPackageImpl<BasicPackage, &CLSID_BasicPackage>,  
    ...  
```  
  
 The `IVsPackageImpl` template parameters shown are the VSPackage class itself and a pointer to the GUID identifying the VSPackage.  
  
## Supporting QueryInterface with COM maps  
 To get ATL's support for `QueryInterface`, its COM map must list the interfaces that the class implements. For example, following is the COM map for the VSPackage class in the Reference.Package sample:  
  
```  
BEGIN_COM_MAP(BasicPackage)  
    COM_INTERFACE_ENTRY(IVsPackage)  
    ...  
END_COM_MAP()  
```  
  
 For more information about COM maps, see [Implementing CComObjectRootEx](../atl/implementing-ccomobjectrootex.md) and [COM_INTERFACE_ENTRY Macros](../Topic/COM_INTERFACE_ENTRY%20Macros.md).  
  
## Supporting Registration with Registry Maps  
 Visual Studio Library uses ATL-style .RGS files to support registration of COM objects. To support token replacement in the .RGS file, Visual Studio Library uses registry maps. Registry maps list symbols to be replaced and support the use of IDs for string table resources.  
  
 For example, following is the registry map for the VSPackage class in the Reference.Package sample:  
  
```  
VSL_BEGIN_REGISTRY_MAP(IDR_BASICPACKAGE_RGS)  
    VSL_REGISTRY_MAP_GUID_ENTRY(CLSID_BasicPackage)  
    VSL_REGISTRY_RESOURCE_STRING_ENTRY(IDS_BASICPACKAGE_REGISTRY_NAME)  
    ...  
VSL_END_REGISTRY_MAP()  
```  
  
## See Also  
 [VSSDK Samples](../misc/vssdk-samples.md)