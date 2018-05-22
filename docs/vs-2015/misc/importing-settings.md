---
title: "Importing Settings | Microsoft Docs"
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
  - "user settings [Visual Studio SDK], importing using managed package framework"
  - "IDE settings, importing using managed package framework"
  - "IDE, importing settings using managed package framework"
  - "managed package framework, importing environment settings"
ms.assetid: 943f9a5b-c5a5-45ce-a5a9-8d4c02f15577
caps.latest.revision: 23
manager: "douge"
---
# Importing Settings
The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integrated development environment (IDE) uses the classes that implement the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface and are registered to support a VSPackage implementation. This implementation is used to retrieve the state of a VSPackage.  
  
 Because the IDE instantiates the class that implements the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface to support the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] settings, the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface should be implemented in an independent class.  
  
> [!NOTE]
>  Do not implement <xref:Microsoft.VisualStudio.Shell.IProfileManager> on the class that implements <xref:Microsoft.VisualStudio.Shell.Package>.  
  
### To implement Settings Export  
  
1.  Declare the class that implements the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] settings.  
  
     Declare a class as implementing <xref:Microsoft.VisualStudio.Shell.IProfileManager> and provide it with a `GUID`.  
  
    > [!NOTE]
    >  Classes implementing the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface must also implement the <xref:System.ComponentModel.IComponent> interface, which can be done by deriving the class from the <xref:System.ComponentModel.Component> class.  
  
     For example:  
  
    ```  
    [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class MyPackageProfileManager : Component, IProfileManager   
    ```  
  
2.  Ensure that the class that implements the settings retrieves state data from disk.  
  
     This step is performed by implementing the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> method.  
  
     The exact information that is to be persisted and how that information will be obtained and marshaled from the VSPackage differs for each VSPackage.  
  
     Regardless of the information that is to be persisted by the VSPackage, the class implementing <xref:Microsoft.VisualStudio.Shell.IProfileManager> must use the supplied <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> interface to retrieve data from the settings file.  
  
     Typically, as in the example below, <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> also validates the retrieved data and updates the VSPackage's state.  
  
    ```vb  
    Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
    If mySvc IsNot Nothing Then   
        Dim value As String   
        Dim myState As StateObject = mySvc.MyPackage.packageState   
        reader.ReadSettingString("PbrsShowDesc", value)   
        If value Is Nothing OrElse value = "" Then   
            reader.ReportError("Unable to Help Visibility Setting")   
        Else   
            myState.HelpVisible = Not value.Equals("0")   
        End If   
        reader.ReadSettingString("PbrsAlpha", value)   
        If value Is Nothing OrElse value = "" Then   
            reader.ReportError("Unable to Retrieve Sort Value")   
        Else   
            If Not value.Equals("0") Then   
                myState.SortState = SortState.Alphabetical   
            Else   
                myState.SortState = SortState.Categorized   
            End If   
        End If   
    End If  
    ```  
  
    ```csharp  
    MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
    if (mySvc != null){  
      string value;  
      StateObject myState = mySvc.MyPackage.packageState;  
      reader.ReadSettingString("PbrsShowDesc", out value);  
      if (value == null || value == ""){  
          reader.ReportError("Unable to Help Visibility Setting");  
      }else{  
          myState.HelpVisible = !value.Equals("0");  
      }  
      reader.ReadSettingString("PbrsAlpha", out value);  
      if (value == null || value == ""){  
          reader.ReportError("Unable to Retrieve Sort Value");  
      }else{  
        if (!value.Equals("0")){  
          myState.SortState = SortState.Alphabetical;  
        }else{  
          myState.SortState = SortState.Categorized;  
        }  
      }  
    }  
    ```  
  
     Implementation details:  
  
    -   Report errors back to the user interactively through the IDE by using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReportError%2A> method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> interface:  
  
        ```vb  
        reader.ReadSettingString("PbrsAlpha", value)   
        If value Is Nothing OrElse value = "" Then   
            reader.ReportError("Unable to Retrieve Sort Value")   
        End If  
        ```  
  
        ```csharp  
          reader.ReadSettingString("PbrsAlpha", out value);  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Retrieve Sort Value");  
          }  
        ```  
  
    -   Prior to actually retrieving stored settings, an implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> method should use the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion%2A> method to verify that version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] that exports the stored settings is supported.  
  
         In the case of the example below, the implementation checks to see if settings were produced by a version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] with a major version number of `m_supportVer`, and if not, signals an error.  
  
        ```vb  
        If pnMajor <> m_supportVer Then   
            reader.ReportError("Unsupported Version")   
        End If  
        ```  
  
        ```csharp  
        if (pnMajor != m_supportVer){  
          reader.ReportError("Unsupported Version");  
        }  
        ```  
  
    -   The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] settings file supports random data access, so the order of read and writer settings operations is not important. In the example below, the order of writer operations in the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> method is opposite of the read operations in the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> method.  
  
    -   The value of the `pszSettingName` argument supplied to a method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface must uniquely identify each of data element saved within a settings category.  
  
        > [!NOTE]
        >  Names need to be unique only within the scope of the implementing class because the IDE uses the GUID of the class that implements the settings and the value of `pszSettingName` to identify each saved setting. If more than one <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> method is called with the same value of `pszSettingName`, the original value is overwritten in the settings file.  
  
3.  Ensure the coherence between VSPackage state and locally stored or cached settings.  
  
     This step is normally performed during the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> method (as is seen in the example below). The details of this step are specific to a VSPackage and may involve obtaining the state of the VSPackage from automation, querying the VSPackage, and setting registry keys.  
  
    > [!NOTE]
    >  The <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> method should retrieve the information saved by the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> method when the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> method is called by the IDE during its initialization of the VSPackage that it supports.  
  
     In the example below, the class providing settings support implements the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> method to:  
  
    -   Obtain access to the VSPackage's updated state information.  
  
        ```vb  
        Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
        Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
        Dim rootKey As RegistryKey = package.UserRegistryRoot  
        ```  
  
        ```csharp  
        MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
        Package package = GetService(typeof(Package)) as Package;  
        RegistryKey rootKey = package.UserRegistryRoot;  
        ```  
  
    -   Use that information to update the VSPackage's registry settings.  
  
        ```vb  
        If mySvc.MyPackage.packageState IsNot Nothing Then   
            Using rootKey   
                Using pbrsKey As RegistryKey = rootKey.CreateSubKey(Me.[GetType]().Name)   
                    Using pbrsKey   
                        DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                    End Using   
                End Using   
            End Using   
        End If  
        ```  
  
        ```csharp  
        if (mySvc.MyPackage.packageState != null) {  
          using (rootKey) {  
            using(RegistryKey pbrsKey = rootKey.CreateSubKey(this.GetType().Name)) {  
              using (pbrsKey) {  
                ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
              }  
            }  
          }  
        }  
        ```  
  
    -   > [!NOTE]
        >  The division of labor between the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> and the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> methods is depends on the implementation and is somewhat arbitrary. For example, the implementation could be rewritten with an empty implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> method and all registry and state queries performed in the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> method.  
  
4.  Register the class the implements the settings as providing support to a VSPackage.  
  
     Apply an instance of <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute> constructed by using the <xref:System.Type> of the class that implements <xref:Microsoft.VisualStudio.Shell.IProfileManager> to the VSPackage's <xref:Microsoft.VisualStudio.Shell.Package> implementation.  
  
    ```vb  
    <ProvideProfile(GetType(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, False)> _   
    <Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
    Class MyPackage   
        Inherits Package   
    End Class  
    ```  
  
    ```csharp  
     [ProvideProfile(typeof(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, false)]  
    [Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
    class MyPackage: Package   
    ```  
  
     In this case, the attribute informs the IDE that the `MyPackageProfileManager` class provides a settings implementation to the `MyPackage` class. The Custom Settings Point in the registry is created under HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\UserSettings\ CoreUI_MyPackage, where *\<Version>* is the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)], for example 8.0.  
  
     For more information, see [Support for User Settings](http://msdn.microsoft.com/library/ad9beac3-4f8d-4093-ad0e-6fb00444a709) and <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute>  
  
## Example  
 The following example implements <xref:Microsoft.VisualStudio.Shell.IProfileManager> on a class.  
  
```vb  
Imports System   
Imports System.Runtime.InteropServices   
Imports Microsoft.VisualStudio.Shell   
Imports Microsoft.VisualStudio.Shell.Interop   
Imports Microsoft.Win32   
Imports myPackageNameSpace   
Namespace myProfileManagerNameSpace  
  
    <Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Friend Class MyPackageProfileManager   
        Inherits System.ComponentModel.Component   
        Implements IProfileManager   
        Friend Const m_supportVer As Integer = 8   
        Public Sub SaveSettingsToXml(ByVal writer As IVsSettingsWriter)   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(MyPackage)), MyPackageService)   
            If mySvc IsNot Nothing Then   
                ' Information is stored in a StateObject.   
                Dim myState As StateObject = mySvc.MyPackage.packageState   
                writer.WriteSettingString("PbrsAlpha", (If(myState.SortState = SortState.Alphabetical, "1", "0")))   
                writer.WriteSettingString("PbrsShowDesc", (If(myState.HelpVisible, "1", "0")))   
            End If   
        End Sub   
  
        Public Sub LoadSettingsFromXml(ByVal reader As IVsSettingsReader)   
  
            Dim pnMajor As Integer, pnMinor As Integer, pnBuild As Integer   
            ' First check if we are getting data from the correct major version.   
            reader.ReadVersion(pnMajor, pnMinor, pnBuild)   
            If pnMajor <> m_supportVer Then   
                reader.ReportError("Unsupported Version")   
            Else   
                Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
                If mySvc IsNot Nothing Then   
                    Dim value As String   
                    Dim myState As StateObject = mySvc.MyPackage.packageState   
                    reader.ReadSettingString("PbrsShowDesc", value)   
                    ' Not all values must be present.   
                    If value Is Nothing OrElse value = "" Then   
                        reader.ReportError("Unable to Help Visibility Setting")   
                    Else   
                        myState.HelpVisible = Not value.Equals("0")   
                    End If   
                    reader.ReadSettingString("PbrsAlpha", value)   
                    ' Not all values must be present.   
                    If value Is Nothing OrElse value = "" Then   
                        reader.ReportError("Unable to Retrieve Sort Value")   
                    Else   
                        If Not value.Equals("0") Then   
                            myState.SortState = SortState.Alphabetical   
                        Else   
                            myState.SortState = SortState.Categorized   
                        End If   
                    End If   
                End If   
            End If   
        End Sub   
  
        Public Sub SaveSettingsToStorage()   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
            Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
            Dim rootKey As RegistryKey = package.UserRegistryRoot   
  
            If mySvc.MyPackage.packageState IsNot Nothing Then   
                Using rootKey   
                    Using pbrsKey As RegistryKey = rootKey.CreateSubKey(Me.[GetType]().Name)   
                        Using pbrsKey   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                        End Using   
                    End Using   
                End Using   
            End If   
        End Sub   
  
        Public Sub LoadSettingsFromStorage()   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
            Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
            Dim rootKey As RegistryKey = package.UserRegistryRoot   
            Using rootKey   
                Dim pbrsKey As RegistryKey = rootKey.OpenSubKey(Me.[GetType]().Name)   
                If pbrsKey IsNot Nothing Then   
                    Using pbrsKey   
                        If mySvc.MyPackage.MakeCurrentSettingTheDefault() Then   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                        Else   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).LoadState(pbrsKey)   
                        End If   
                    End Using   
                End If   
            End Using   
        End Sub   
    End Class   
End Namespace  
  
```  
  
```csharp  
namespace myProfileManagerNameSpace  {  
  
  using System;  
  using System.Runtime.InteropServices;  
  using Microsoft.VisualStudio.Shell;  
  using Microsoft.VisualStudio.Shell.Interop;  
  using Microsoft.Win32;  
  using myPackageNameSpace;  
  
  [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
  internal class MyPackageProfileManager : System.ComponentModel.Component , IProfileManager {  
    internal const int m_supportVer = 8;  
    public void SaveSettingsToXml(IVsSettingsWriter writer) {  
      MyPackageService mySvc = GetService(typeof(MyPackage)) as MyPackageService;  
      if (mySvc != null) {  
        // Information is stored in a StateObject.  
        StateObject myState = mySvc.MyPackage.packageState;  
        writer.WriteSettingString(   
                                  "PbrsAlpha",   
                                  (myState.SortState == SortState.Alphabetical ? "1" : "0"));  
        writer.WriteSettingString(   
                                  "PbrsShowDesc",   
                                  (myState.HelpVisible ? "1" : "0"));  
      }  
    }  
  
    public void LoadSettingsFromXml(IVsSettingsReader reader)  
    {  
  
      int pnMajor, pnMinor, pnBuild;  
      // First check if we are getting data from the correct major version.   
      reader.ReadVersion(pnMajor, pnMinor, pnBuild);  
      if (pnMajor != m_supportVer){  
        reader.ReportError("Unsupported Version");  
      }else{  
        MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
        if (mySvc != null){  
          string value;  
          StateObject myState = mySvc.MyPackage.packageState;  
          reader.ReadSettingString("PbrsShowDesc", out value);  
          // Not all values must be present.  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Help Visibility Setting");  
          }else{  
            myState.HelpVisible = !value.Equals("0");  
          }  
          reader.ReadSettingString("PbrsAlpha", out value);  
          // Not all values must be present.  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Retrieve Sort Value");  
          }else{  
            if (!value.Equals("0")){  
              myState.SortState = SortState.Alphabetical;  
            }else{  
              myState.SortState = SortState.Categorized;  
            }  
          }  
        }  
      }  
    }  
  
    public void SaveSettingsToStorage() {  
      MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
      Package package = GetService(typeof(Package)) as Package;  
      RegistryKey rootKey = package.UserRegistryRoot;  
  
      if (mySvc.MyPackage.packageState != null) {  
        using (rootKey) {  
          using(RegistryKey pbrsKey = rootKey.CreateSubKey(this.GetType().Name)) {  
            using (pbrsKey) {  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
            }  
          }  
        }  
      }  
    }  
  
    public void LoadSettingsFromStorage() {  
      MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
      Package package = GetService(typeof(Package)) as Package;  
      RegistryKey rootKey = package.UserRegistryRoot;  
      using (rootKey) {  
        RegistryKey pbrsKey = rootKey.OpenSubKey(this.GetType().Name);  
        if (pbrsKey != null) {  
          using (pbrsKey) {  
            if (mySvc.MyPackage.MakeCurrentSettingTheDefault()){  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
            }else{  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).LoadState(pbrsKey);  
            }  
          }  
        }  
      }  
    }  
  }  
}  
```  
  
## See Also  
 <xref:Microsoft.VisualStudio.Shell.IProfileManager>   
 <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter>   
 [Exporting Settings](../misc/exporting-settings.md)   
 [Support for User Settings](http://msdn.microsoft.com/library/ad9beac3-4f8d-4093-ad0e-6fb00444a709)