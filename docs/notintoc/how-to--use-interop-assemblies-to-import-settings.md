---
title: "How to: Use Interop Assemblies to Import Settings"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "IDE settings, importing using interop assemblies"
  - "IDE, importing settings using interop assemblies"
  - "user settings [Visual Studio SDK], importing using interop assemblies"
ms.assetid: 8a43dbe2-fdc0-471b-8235-3f489b77db0f
caps.latest.revision: 26
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
# How to: Use Interop Assemblies to Import Settings
A VSPackage may import settings from the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] integrated development environment (IDE). The IDE uses a VSPackage's implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface to determine how the VSPackage's configuration is to be retrieved.  
  
> [!NOTE]
>  The Managed Package Framework (MPF) provides a set of managed classes to facilitate the creation of Visual Studio extensions. To perform this task using the MPF, see [Importing Settings](../notintoc/importing-settings.md).  
  
### To implement settings import on a VSPackage  
  
1.  Implement basic support for the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] settings mechanism.  
  
    -   Register the VSPackage as supporting the settings mechanism by defining one or more Custom Settings Points.  
  
         For more information, see [Support for User Settings](../Topic/Support%20for%20User%20Settings.md).  
  
    -   Declare that the VSPackage implements the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface, for instance:  
  
        ```  
        public class MyPackage : IVsPackage, IVsUserSettings, IVsUserSettingsQuery  
        ```  
  
    -   Ensure that the VSPackage's implementation of the \<xref:System.Runtime.InteropServices.Marshal.QueryInterface*> method supplies a \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface when called with `IID_IVsUserSettings`. For example:  
  
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
  
2.  Retrieve settings information.  
  
     To support retrieving settings information, a VSPackage must implement the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method.  
  
     To read data, a VSPackage's implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> interface must use the first two arguments passed in by the IDE: the GUID of that Custom Settings Point's category, and an \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> interface.  
  
    1.  A VSPackage's implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method must check the category GUID passed in and choose the correct mechanism for the retrieving state.  
  
         In the example below, the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method calls a different implementation for retrieving the command bar state as opposed to retrieving the key-binding state.  
  
    2.  A VSPackage must use the supplied \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> interface to retrieve data to the settings file.  
  
        > [!NOTE]
        >  If the settings information changes as a function of a [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] version, a VSPackage's implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method must use the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion*> method prior to reading data to check the IDE version.  
  
         The interface provides methods for reading different data types from the settings file.  
  
         `interface IVsSettingsReader : IUnknown`  
  
         `{`  
  
         `HRESULT ReadSettingString(WCHAR *pszSettingName, BSTR *pbstrSettingValue);`  
  
         `HRESULT ReadSettingLong(WCHAR *pszSettingName, long *plSettingValue);`  
  
         `HRESULT ReadSettingBoolean(WCHAR *pszSettingName, BOOL *pfSettingValue);`  
  
         `HRESULT ReadSettingAttribute(LPCOLESTR pszSettingName,LPCOLESTR pszAttributeName, BSTR *pbstrSettingValue);  //Internal use only`  
  
         `HRESULT ReadSettingBytes(WCHAR *pszSettingName, BYTE *pSettingValue, long *plDataLength, long lDataMax);`  
  
         `HRESULT ReadVersion(int *pnMajor, int *pnMinor, int *pnBuild);`  
  
         `HRESULT ReportError(WCHAR *pszError);`  
  
         `};`  
  
     The settings file supports random data access, so the order of read and write settings operations is not important.  
  
     This is illustrated in the exporting and importing command bar state (`ExportSettings_CommandBa`r and `ImportSettings_CommandBar`) of the implementation in the example below.  
  
3.  Validate retrieved data.  
  
     The settings information is contained in XML files, which can be edited manually.  
  
> [!IMPORTANT]
>  The settings information may become corrupt on disk, may contain version-specific settings, and could be used as a vehicle for malicious attack. The validity of each data item returned by the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> method should be validated.  
  
-   To verify support of the version of [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] used to produce the retrieved settings, call the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion*> method to retrieve the version.  
  
-   To cause the IDE to notify a user that an imported data element does not validate, a VSPackage calls the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReportError*> method.  
  
1.  Apply settings information.  
  
    1.  The implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method must respect the value of the third argument that the IDE passed to it. The supported values are members of the \<xref:Microsoft.VisualStudio.Shell.Interop.__UserSettingsFlags> enumeration. For more information, see \<xref:Microsoft.VisualStudio.Shell.Interop.__UserSettingsFlags>.  
  
         In the example below, the implementation for importing command bar settings (`ImportSettings_Commandbar`) uses the value of this argument to determine whether to apply settings to overwrite existing values or to additively update them.  
  
    2.  You must implement a write-through cache methodology when applying imported settings.  
  
         State information in the registry or the file system must be updated at the same time as settings are applied to the IDE. This guarantees configuration coherence and supports multi-instance IDE scenarios.  
  
2.  Alert IDE how to handle settings import.  
  
     Use the returned `pfRestartRequired` argument of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method to advise the IDE if a restart is required to apply the imported settings.  
  
     If the VSPackage's implementation of the \<xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings*> method returns `true`, the user is prompted to restart the IDE.  
  
## Example  
 This example demonstrates how to import and export settings data.  
  
```  
static const WCHAR c_szFirstSettingName[] = L"FirstSettingName";  
static const WCHAR c_szRandomTrashBytes[] = L"RandomTrashBytes";  
static const WCHAR c_szRandomTrashLength[] = L"RandomTrashLength";  
static const WCHAR c_szBreakPointWindow[] = L"Breakpoints Window";  
// --------------------------------------------------------------------------  
//    IVsUserSettings methods used for configuration export and import  
//    Delegate to the right shell object based on the category GUID  
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
    // Delegate to the right internal implementation based on the requested category.  
  
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
        hr = pSettings->WriteSettingBytes(c_szRandomTrashBytes, pRandomTrash, cRandomTrash);  
        IfFailGo(hr);  
        hr = pSettings->WriteSettingLong(c_szRandomTrashLength, cRandomTrash);  
        IfFailGo(hr);  
    }  
  
 Error:  
    return hr;  
};  
  
HRESULT ExportSettings_KeyBindings(IVsSettingsWriter *pSettings)  
{  
    if (!pSettings)  
        return E_INVALIDARG;  
  
    hr = pSettings->WriteSettingString(c_szBreakPointWindow, L"Ctrl + Alt + B");  
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
  
    // Delegate to the right internal implementation based on the requested category.  
    if (GUID_Profiles_CommandBars == clsidCategory)  
        {  
            hr = ImportSettings_CommandBars(, pSettings, flags, pfRestartRequired);  
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
  
    // Determines whether to import as an additive operation, or a reset all settings operation.  
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
  
    // Note: before returning these settings should immediately be applied to your personal  
    //            settings store, whether in the registry or the file system.  
    // This write-thru cache methodology is essential to work in multi-instance IDE scenarios.  
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
  
    // Determines whether to import as an additive operation or a reset all settings operation.  
    BOOL fResetCompletely = FALSE;   
  
    if (flags & USF_ResetOnImport)  
        fResetCompletely = TRUE;  
  
    hr = pSettings->ReadSettingString(c_szBreakPointWindow, &bstrBreakPointWindow);  
    IfFailGo(hr);  
  
    // Note: before returning these settings should immediately be applied to your personal  
    //            settings store, whether in the registry or the file system.  
    // This write-thru cache methodology is essential to work in multi-instance IDE scenarios.  
    hr = UpdateState_KeyBindings(bstrBreakPointWindow);  
  
 Error:  
    return hr;  
}  
```  
  
## See Also  
 [How to: Export Settings By Using Interop Assemblies](../notintoc/how-to--export-settings-by-using-interop-assemblies.md)   
 [Support for User Settings](../Topic/Support%20for%20User%20Settings.md)   
 [Extending User Settings and Options](../Topic/Extending%20User%20Settings%20and%20Options.md)   
 [Customizing Development Settings in Visual Studio](assetId:///22c4debb-4e31-47a8-8f19-16f328d7dcd3)