---
title: "How to: Provide Custom Toolbox Items By Using Interop Assemblies | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Toolbox [Visual Studio SDK], adding items using interop assemblies"
ms.assetid: c3e8b404-7086-4e08-9d07-ab9c509963ca
caps.latest.revision: 33
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Provide Custom Toolbox Items By Using Interop Assemblies
> [!NOTE]
>  The recommended way to add custom controls to the Toolbox is to use the Toolbox Control templates that come with the Visual Studio 10 SDK. This topic is retained only for backward compatibility, and for adding existing controls to the Toolbox.  
>   
>  For more information on creating toolbox controls by using the templates, see [How to: Create a Toolbox Control That Uses Windows Forms](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) and [Creating a WPF Toolbox Control](/visual-studio/extensibility/creating-a-wpf-toolbox-control).  
  
 A VSPackage based on an interop assembly can extend [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Toolbox** functionality by adding ActiveX controls.  
  
 For a list of standard [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Toolbox Clipboard formats, see [Extending the Toolbox](../misc/extending-the-toolbox.md).  
  
 For information on how a VSPackage manages the **Toolbox** using [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)], see [Managing the Toolbox](../misc/managing-the-toolbox.md).  
  
 For information on managing the **Toolbox** through automation, see [How to: Control the Toolbox](../Topic/How%20to:%20Control%20the%20Toolbox.md).  
  
## Procedures  
 Items added to the **Toolbox** should implement the standard **Toolbox** Clipboard formats unless the VSPackage adding the items acts as a **Toolbox** item provider — providing implementation support for the new format.  
  
#### To implement Toolbox control  
  
-   A **Toolbox** item provided by VSPackage implemented in unmanaged code must either implement an `IDataObject` object or be an ActiveX control — from which the environment can obtain an `IDataObject` object.  
  
     For more information about implementing the `IDataObject` object to support the **Toolbox**, see <xref:System.Runtime.InteropServices.ComTypes.IDataObject>, <xref:Microsoft.VisualStudio.Shell.Interop.TBXITEMINFO>, and <xref:System.Runtime.InteropServices.ComTypes.FORMATETC>.  
  
#### To add interop assembly-based controls to the Toolbox  
  
1.  Obtain instances of :  
  
    1.  <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>, which supports adding controls and sections (tabs) to the **Toolbox** and controlling other aspects of the **Toolbox** configuration.  
  
    2.  <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>, which provides support for localization and [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings persistence.  
  
    > [!NOTE]
    >  The <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> interface inherits from the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox> interface. <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> does not derive from <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> and does not implement its methods.  
  
     <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> are obtained by calling the <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider.QueryService*> method on the <xref:Microsoft.VisualStudio.Shell.Interop.SVsToolbox> service by using the service ID of `SID_SVsToolbox`.  
  
     The interface ID `IID_IVSToolbox2` is used to obtain <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>, and the interface ID `IID_IVSToolbox3` returns <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>.  
  
     In the sample below, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> interface is obtained with a `QueryService` and the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> interface by calling `QueryInterface` on the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> interface.  
  
    ```cpp  
    extern CComModule _Module;  
    CComPtr<IVsToolbox2> srpTbx2;  
    CComPtr<IVsToolbox3> srpTbx3;  
    hr = _Module.QueryService(SID_SVsToolbox, IID_IVsToolbox2, (void**) &srpTbx2));  
    hr = srpTbx2->QueryInterface( IID_IVsToolbox3, (void **)&srpTbx3)  
    ```  
  
2.  Use instances of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> and the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> interfaces to add tabs (sections) and controls to the **Toolbox**.  
  
     In the sample below, a new tab is added with a localized name using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2.AddTab*> method.  
  
     As this localized name is not invariant, a non-localized invariant name (in this case `L"HTML"`) is set by a call to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3.SetIDOfTab*> method.  
  
     If the toolbox tab already exists, `AddTab2` returns E_FAIL, in which case it is assumed that the tab was properly added before an attempt is made to retrieve the invariant name.  
  
     If a tab has been successfully added, then an <xref:System.Runtime.InteropServices.ComTypes.IDataObject>-based control is added to the **Toolbox**; otherwise an error is returned.  
  
    ```cpp  
    CComBSTR sbstrID;  
    hr = srpTbx2->AddTab2((WCHAR*)szwDisplayTabName, *pclsidPackage);  
    if ( hr == S_OK) {  
        sbstrID =L"HTML";  
        hr = srpTbx3->SetIDOfTab( (WCHAR*)szwDisplayTabName, sbstrID);  
    }else{  
        hr = S_OK;  
        hr = srpTbx3->GetIDOfTab( (WCHAR*)szwDisplayTabName, &sbstrID );  
  
    }  
    if ( hr = S_OK){  
        hr=srpTbx2->AddItem(tbxItem, &tinfo, bstrLabel);  
    }  
    return hr;  
    ```  
  
 In addition to adding to the **Toolbox** itself, a VSPackage can be configured as a **Toolbox** data provider and can be used to extend the drag-and-drop support to the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE. This allows arbitrary clipboard formats to be exposed to the **Toolbox** and editors.  
  
#### To configure VSPackage as a Toolbox Item Provider  
  
1.  Register the interop-based VSPackage as a **Toolbox** item provider.  
  
     For more information on registering as a **Toolbox** provider, see [Registering Toolbox Support Features](../misc/registering-toolbox-support-features.md).  
  
2.  Register as supporting custom **Toolbox** Clipboard formats.  
  
     Interop-based VSPackage supporting controls that do not implement all the standard **Toolbox** Clipboard formats or implement a custom **Toolbox** Clipboard format must:  
  
    1.  Register the Toolbox Clipboard formats that they do support. For more information, see [Registering Toolbox Support Features](../misc/registering-toolbox-support-features.md).  
  
    2.  Create a class implementing the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> interfaces.  
  
        > [!NOTE]
        >  The <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> interfaces should not be implemented on the same class that implements the <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> interface.  
  
    3.  Programmatically inform the Toolbox that a specific implementation of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> interfaces provides support for custom data formats with either of the equivalent methods—<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProviderRegistry.RegisterDataProvider*> or <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox.RegisterDataProvider*>.  
  
         Calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox.RegisterDataProvider*> method is typically done in the implementation of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite*> method or in the <xref:Microsoft.VisualStudio.Shell.WindowPane.OnCreate*> handler method for when the VSPackage becomes active.  
  
        ```cpp  
        CComPtr<IVsToolboxDataProviderRegistry> pTB;  
        if (SUCCEEDED (hr = pServiceProvider->QueryService(SID_SVsToolboxDataProviderRegistry, IID_IVsToolboxDataProviderRegistry, (PVOID*)&pTB)) && pTB != NULL)  
        {  
            CustToolboxDataProvider* pDP = new CustToolboxDataProvider;  
            if (pDP)  
            {  
                pDP->AddRef();  
                VSCOOKIE dwDPCookie; //UNDONE: pass NULL instead of ptr to the cookie when RegisterDataProvider allows it.  
                pTB->RegisterDataProvider((IVsToolboxDataProvider*)pDP, &dwDPCookie);  
                pDP->Release();  
            }  
            else  
            {  
                hr = E_OUTOFMEMORY;  
            }  
        }  
        ```  
  
 For a list of standard [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Toolbox** Clipboard formats, see [Extending the Toolbox](../misc/extending-the-toolbox.md).  
  
## See Also  
 [Extending the Toolbox](../misc/extending-the-toolbox.md)   
 [Toolbox Walkthroughs](../misc/toolbox-walkthroughs.md)   
 [Registering Toolbox Support Features](../misc/registering-toolbox-support-features.md)   
 [Advanced Toolbox Control Development](../misc/advanced-toolbox-control-development.md)   
 [Managing the Toolbox](../misc/managing-the-toolbox.md)   
 [How to: Control the Toolbox](../Topic/How%20to:%20Control%20the%20Toolbox.md)