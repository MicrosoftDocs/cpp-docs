---
title: "How to: Export Settings By Using Interop Assemblies | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IDE settings, exporting using interop assemblies"
  - "user settings [Visual Studio SDK], exporting using interop assemblies"
  - "IDE, exporting settings using interop assemblies"
ms.assetid: d470d4f9-3006-40c3-99db-21abcd5003b8
caps.latest.revision: 23
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
# How to: Export Settings By Using Interop Assemblies
A VSPackage may export settings from the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE). The IDE uses a VSPackage's implementation of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface. If the package also provides the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> interface, then the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> interface is used to determine how the VSPackage's configuration is to be saved.  
  
> [!NOTE]
>  The Managed Package Framework (MPF) provides a set of managed classes to facilitate the creation of Visual Studio extensions. To perform this task using the MPF, see [Exporting Settings](../misc/exporting-settings.md).  
  
### To implement settings export on a VSPackage  
  
1.  Implement basic support for the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism.  
  
    -   Register the VSPackage as supporting the settings mechanism by defining one or more Custom Settings Points.  
  
         For more information, see [Support for User Settings](/visual-studio/extensibility/internals/support-for-user-settings).  
  
    -   Declare that the VSPackage implements <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings>. If desired, the VSPackage can also implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> interface. For example:  
  
        ```  
        public class MyPackage : IVsPackage, IVsUserSettings, IVsUserSettingsQuery  
        ```  
  
    -   Ensure that the VSPackage's implementation of the <xref:System.Runtime.InteropServices.Marshal.QueryInterface*> method supplies an <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface when called with `IID_IVsUserSettings`.  
  
         Optionally, `QueryInterface` can supply an <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> interface when called with the `IID_IVsUserSettingsQuery` interface.  
  
        ```  
        STDMETHODIMP MyPackage::QueryInterface(THIS_ REFIID riid, LPVOID FAR* ppvObj)  
        {  
            if (ppvObj == NULL)  
                return E_POINTER;  
  
            *ppvObj = NULL;  
  
            if (riid == IID_IUnknown)  
                *ppvObj = (LPVOID)(IUnknown *)(IClassFactory*)this;  
            else if (riid == IID_IClassFactory)  
                *ppvObj = (LPVOID)(IClassFactory *)this;  
            else if (riid == IID_IVsPackage)  
                *ppvObj = (LPVOID)(IVsPackage *)this;  
            else if (riid == IID_IVsPersistSolutionOpts)  
                *ppvObj = (LPVOID)(IVsPersistSolutionOpts *)this;  
            else if (riid == IID_IVsPersistSolutionProps)  
                *ppvObj = (LPVOID)(IVsPersistSolutionProps *)this;  
            else if (riid == IID_IVsComponentSelectorProvider)  
                *ppvObj = (LPVOID)(IVsComponentSelectorProvider *)this;  
            else if (riid == IID_IVsUserSettings)  
                *ppvObj = (LPVOID)(IVsUserSettings *)this;  
            else if (riid == IID_IVsUserSettingsQuery)  
                *ppvObj = (LPVOID)(IVsUserSettingsQuery *)this;  
  
            if (*ppvObj)  
            {  
                AddRef();  
                return NOERROR;  
            }  
            return E_NOINTERFACE;  
        }  
        ```  
  
2.  Optionally, alert the IDE of the need to export a particular setting.  
  
     A VSPackage can choose to conditionally save a setting that the Custom Settings Point state defines. For example, save only if the user explicitly indicates a setting to be saved.  
  
     In this case, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> interface must be implemented.  
  
     If a VSPackage does not implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery>, all its state information is saved during a settings export.  
  
     A VSPackage can support more than one Custom Settings Point (settings category). Implementations of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery.NeedExport*> method must check the supplied Custom Settings Point's GUID or settings category argument to determine if a particular group of settings must be saved.  
  
     In the example below, the VSPackage always requests that its command bar state is saved, but only requests that its key binding state is saved if a flag has been set.  
  
3.  Write settings data to the settings file.  
  
     To support exporting settings, a VSPackage must always implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings*> method.  
  
     The implementation must handle the arguments passed by the IDE, the GUID of that Custom Settings Point's category, and an <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface.  
  
    1.  A VSPackage can support more than one Custom Settings Point (settings category). In the example below, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings*> method calls a different implementation for persisting command bar state as opposed to persisting key binding state.  
  
    2.  A VSPackage must use the supplied <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface to save data to the setting file.  
  
         `interface IVsSettingsWriter : IUnknown`  
  
         `{`  
  
         `HRESULT WriteSettingString( LPCOLESTR pszSettingName, LPCOLESTR pszSettingValue);`  
  
         `HRESULT WriteSettingLong( LPCOLESTR pszSettingName, long lSettingValue);`  
  
         `HRESULT WriteSettingBoolean( LPCOLESTR pszSettingName, BOOL fSettingValue);`  
  
         `HRESULT WriteSettingBytes( LPCOLESTR pszSettingName, BYTE *pSettingValue, long lDataLength);`  
  
         `HRESULT WriteSettingAttribute( LPCOLESTR pszSettingName, LPCOLESTR pszAttributeName, LPCOLESTR pszSettingValue);`  
  
         `HRESULT WriteSettingXml( IUnknown *pIXMLDOMNode);`  
  
         `HRESULT WriteSettingXmlFromString( LPCOLESTR szXML);`  
  
         `HRESULT ReportError( LPCOLESTR pszError, VSSETTINGSERRORTYPES dwErrorType);`  
  
         `};`  
  
         The value of the `pszSettingName` argument supplied to an <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface must uniquely identify each data element saved within a settings category.  
  
        > [!NOTE]
        >  Names must be unique within a Custom Settings Point because the IDE uses its GUID and the value of `pszSettingName` to identify each saved setting. If more than one <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> method is called with the same value of `pszSettingName`, the original value is overwritten in the settings file.  
  
         The settings file supports random data access. Consequently, the order of read and write settings operations is not important.  
  
         This is illustrated in the implementations of exporting and importing command bar state (`ExportSettings_CommandBa`r and `ImportSettings_CommandBar`) in the example below.  
  
         If the implementation can map data into one of the four supported formats, there is no restriction on how much or what type of data can be written.  
  
        > [!NOTE]
        >  In addition to data explicitly written and transparent to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings*> implementation, the settings API also saves [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] version information. Saved settings can be compared against the version of the IDE that generated them during settings import.  
  
## Example  
 The following example demonstrates how to import and export settings data.  
  
```  
// --------------------------------------------------------------------------  
//    IVsUserSettings methods used for configuration export.  
//    Delegate to the right shell object based on the category GUID.  
// --------------------------------------------------------------------------  
static const WCHAR c_szFirstSettingName[] = L"FirstSettingName";  
static const WCHAR c_szRandomTrashBytes[] = L"RandomTrashBytes";  
static const WCHAR c_szRandomTrashLength[] = L"RandomTrashLength";  
static const WCHAR c_szBreakPointWindow[] = L"Breakpoints Window";  
  
// Export Settings.  
  
STDMETHOD(NeedExport)(WCHAR* pszCategoryGUID, BOOL *pfNeedExport)  
{  
    if (!pfNeedExport)  
        return E_INVALIDARG;  
  
    CLSID clsidCategory;  
    HRESULT hr= S_OK;  
  
    hr = CLSIDFromString(pszCategoryGUID, &clsidCategory);  
    IfFailGo(hr);  
    if (GUID_Profiles_CommandBars == clsidCategory) {  
        *pfNeedExport = TRUE; //Always export Command Bar Configuration  
    }else if (GUID_Profiles_KeyBindings == clsidCategory) {  
        *pfNeedExport = FALSE; //By Default don't export key bindings  
        if (m_fMake_Permanent)  
            *pfNeedExport = TRUE; //Export if user wants current configuration saved.  
    }else{  
        hr = E_UNEXPECTED;  
    }  
 Error:  
    return hr;  
}  
  
STDMETHOD(ExportSettings)(WCHAR *pszCategoryGUID, IVsSettingsWriter *pSettings)  
{  
    CLSID clsidCategory;  
    HRESULT hr;  
    hr = CLSIDFromString(pszCategoryGUID, &clsidCategory);  
    IfFailGo(hr);  
    // Delegate to the right internal implementation based on  
    // the requested category.  
  
    if (GUID_Profiles_CommandBars == clsidCategory) {  
        hr = ExportSettings_CommandBars(pSettings);  
    }else if (GUID_Profiles_KeyBindings == clsidCategory) {  
        hr = ExportSettings_KeyBindings(pSettings);  
    }else{  
        hr = E_UNEXPECTED;  
    }  
 Error:  
    return hr;  
};  
  
HRESULT ExportSettings_CommandBars(IVsSettingsWriter *pSettings)  
{  
    if (!pSettings)  
        return E_INVALIDARG;  
  
    hr = pSettings->WriteSettingString(c_szFirstSettingName, L"Value1");  
    IfFailGo(hr);  
  
    int cRandomTrash = 12345;  
    BYTE *pRandomTrash = (BYTE *)VSAlloc(cRandomTrash);  
    if (pRandomTrash){  
        hr = pSettings->WriteSettingBytes(c_szRandomTrashBytes, pRandomTrash, cRandomTrash);  
        IfFailGo(hr);  
        hr = pSettings->WriteSettingLong(c_szRandomTrashLength, cRandomTrash);  
        IfFailGo(hr);  
    }  
  
 Error:  
    return hr;  
};  
  
HRESULT ExportSettings_KeyBindings(IVsSettingsWriter *pSettings)  
{  
    if (!pSettings)  
        return E_INVALIDARG;  
  
    hr = pSettings->WriteSettingString(c_szBreakPointWindow, L"Ctrl + Alt + B");  
    IfFailGo(hr);  
  
 Error:  
    return hr;  
};  
  
STDMETHOD(ImportSettings)(WCHAR *pszCategoryGUID, IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired)  
{  
    CLSID clsidCategory;  
    HRESULT hr;  
  
    hr = CLSIDFromString(pszCategoryGUID, &clsidCategory);  
    IfFailGo(hr);  
  
    // Delegate to the right internal implementation based on  
    // the requested category.  
    if (GUID_Profiles_CommandBars == clsidCategory)  
        {  
            hr = ImportSettings_CommandBars(, pSettings, flags, pfRestartRequired);  
        }  
    else if (GUID_Profiles_KeyBindings == clsidCategory)  
        {  
            hr = ImportSettings_KeyBindings( pSettings, flags, pfRestartRequired);  
        }  
    else  
        {  
            hr = E_UNEXPECTED;  
        }  
  
 Error:  
    return hr;  
};  
  
// Import Settings.  
  
HRESULT ImportSettings_CommandBars(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired)  
{  
    if (!pSettings)  
        return E_INVALIDARG;  
  
    if (pfRestartRequired)  
        {  
            *pfRestartRequired = FALSE; //Nobody should require a restart!!  
        }  
  
    CComBSTR bstrFirstSettingName;  
    long lTrashLength = 0;  
    BYTE *pTrashBytes = NULL;  
  
    // Determines whether to treat import as an additive operation, or a reset all settings operation.  
    BOOL fResetCompletely = FALSE;   
  
    if (flags & USF_ResetOnImport)  
        fResetCompletely = TRUE;  
  
    hr = pSettings->ReadSettingString(c_szFirstSettingName, &bstrFirstSettingName);  
    IfFailGo(hr);  
  
    hr = pSettings->ReadSettingLong(c_szRandomTrashLength, &lTrashLength);  
    IfFailGo(hr);  
  
    if (lTrashLength > 0)  
        {  
            pTrashBytes = (BYTE*)VSAlloc(lTrashLength);  
            IfNullMemGo(pTrashBytes);  
  
            long lDataRead = 0;  
  
            hr = pSettings->ReadSettingBytes(c_szRandomTrashLength, pTrashBytes, &lDataRead, lTrashLength);  
            IfFailGo(hr);  
  
            if (lDataRead != lTrashLength)  
    {  
        hr = E_UNEXPECTED;  
        goto Error;  
    }  
        }  
  
    // Note: before returning, these settings should immediately  
    //             be applied to your personal settings store,  
    //             whether in the registry or the file system.  
    // This write-through cache methodology is essential to to work  
    //             in multi-instance IDE scenarios.  
    hr = UpdateState_CommandBar(bstrFirstSettingName,lTrashLength,pTrashBytes,lDataRead);  
  
 Error:  
    return hr;  
};  
  
HRESULT ImportSettings_KeyBindings(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired)  
{  
    if (!pSettings)  
        return E_INVALIDARG;  
  
    if (pfRestartRequired)  
        {  
            *pfRestartRequired = FALSE; //Nobody should require a restart!!  
        }  
  
    CComBSTR bstrBreakPointWindow;  
  
    // Determines whether import can be treated as an additive   
    // operation, or a reset all settings operation.  
    BOOL fResetCompletely = FALSE;   
  
    if (flags & USF_ResetOnImport)  
        fResetCompletely = TRUE;  
  
    hr = pSettings->ReadSettingString(c_szBreakPointWindow, &bstrBreakPointWindow);  
    IfFailGo(hr);  
  
    // Note: Before returning, these settings should immediately  
    //             be applied to your personal settings  
    //             store, whether in the registry or the file system.  
    // This write-through cache methodology is essential to allow us   
    //             to work in multi-instance IDE scenarios.  
    hr = UpdateState_KeyBindings(bstrBreakPointWindow);  
  
 Error:  
    return hr;  
}  
```  
  
## See Also  
 [Support for User Settings](/visual-studio/extensibility/internals/support-for-user-settings)   
 [Extending User Settings and Options](/visual-studio/extensibility/extending-user-settings-and-options)   
 [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3)   
 [How to: Use Interop Assemblies to Import Settings](../misc/how-to-use-interop-assemblies-to-import-settings.md)