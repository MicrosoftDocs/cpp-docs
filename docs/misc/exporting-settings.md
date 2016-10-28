---
title: "Exporting Settings"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IDE, exporting settings using managed package framework"
  - "managed package framework, exporting environment settings"
  - "user settings [Visual Studio SDK], exporting using managed package framework"
  - "IDE settings, exporting using managed package framework"
ms.assetid: cb3ddb38-4e75-4f05-a83a-8396345bc36c
caps.latest.revision: 24
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
# Exporting Settings
The [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE) uses classes that implement the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface and classes that are registered as supporting a given VSPackage implementation to save the state of a VSPackage.  
  
 Because the IDE instantiates the class that implements the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface to support the settings, <xref:Microsoft.VisualStudio.Shell.IProfileManager> should be implemented in an independent class.  
  
> [!NOTE]
>  Do not implement <xref:Microsoft.VisualStudio.Shell.IProfileManager> on the class that implements <xref:Microsoft.VisualStudio.Shell.Package>.  
  
### To implement the export of settings  
  
1.  Declare the class that implements the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings.  
  
     Declare a class as implementing the <xref:Microsoft.VisualStudio.Shell.IProfileManager> interface and provide it with a GUID.  
  
    > [!NOTE]
    >  Classes that implement <xref:Microsoft.VisualStudio.Shell.IProfileManager> must also implement <xref:System.ComponentModel.IComponent>. This can be done by deriving the class from <xref:System.ComponentModel.Component>.  
  
     For example:  
  
    ```  
    [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class MyPackageProfileManager : Component, IProfileManager   
    ```  
  
2.  Ensure that the class that implements the settings obtains correct state information. This procedure is specific to each VSPackage, and may involve obtaining state from automation, querying registry keys, or querying the VSPackage.  
  
     Typically, as in the following example, use the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> method to validate and stage VSPackage state information.  
  
    > [!NOTE]
    >  The <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> method is also called by the IDE when it initializes the VSPackage that it supports.  
  
     In this case, the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> method does these things:  
  
    -   Obtains access to the state information in the VSPackage current configuration and configuration information stored in the registry.  
  
        ```vb#  
        Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
        Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
        Dim rootKey As RegistryKey = package.UserRegistryRoot  
        ```  
  
        ```c#  
        MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
        Package package = GetService(typeof(Package)) as Package;  
        RegistryKey rootKey = package.UserRegistryRoot;  
        ```  
  
    -   Depending on the value returned by the `MakeCurrentSettingTheDefault` method of the VSPackage, it either updates the registry settings by using the current VSPackage state, or the state by using the registry settings.  
  
        ```vb#  
        If mySvc.MyPackage.MakeCurrentSettingTheDefault() Then   
            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
        Else   
            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).LoadState(pbrsKey)   
        End If  
        ```  
  
        ```c#  
        if (mySvc.MyPackage.MakeCurrentSettingTheDefault()){  
          ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
        }else{  
          ((IComPropertyBrowser)mySvc.MyPackage.packageState).LoadState(pbrsKey);  
        }  
        ```  
  
         For simplicity in this example, unless the `MakeCurrentSettingsTheDefault` method returns `true`, the current state is always reset to the default that is stored in the registry.  
  
3.  Ensure that the class that implements the settings also persists the state to disk.  
  
     The actual writing of state information to the settings disk file must always be performed by the class implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml*> method. The specifics of a settings writer operation depend on the implementation.  
  
     However, the class must obtain access to state information and must use the supplied <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface to save data to the setting file.  
  
     Typically, as in the following example, the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml*> method does not validate state information. The validation is performed in the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> method. Instead, the implementation merely obtains access to the state information and writes it, in this case, as string data.  
  
    ```vb#  
    Dim mySvc As MyPackageService = TryCast(GetService(GetType(MyPackage)), MyPackageService)   
    If mySvc IsNot Nothing Then   
        ' Information is stored in a StateObject   
        Dim myState As StateObject = mySvc.MyPackage.packageState   
        writer.WriteSettingString("PbrsAlpha", (If(myState.SortState = SortState.Alphabetical, "1", "0")))   
        writer.WriteSettingString("PbrsShowDesc", (If(myState.HelpVisible, "1", "0")))   
    End If  
  
    ```  
  
    ```c#  
    MyPackageService mySvc = GetService(typeof(MyPackage)) as MyPackageService;  
    if (mySvc != null) {  
      // Information is stored in a StateObject  
      StateObject myState = mySvc.MyPackage.packageState;  
     writer.WriteSettingString(   
                                "PbrsAlpha",   
                                (myState.SortState == SortState.Alphabetical ? "1" : "0"));  
      writer.WriteSettingString(   
                                "PbrsShowDesc",   
                                (myState.HelpVisible ? "1" : "0"));  
    }  
    ```  
  
     Implementation details are as follows:  
  
    -   In addition to data explicitly written and transparent to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings*> method implementation, the settings API also saves [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] version information. Therefore, saved settings can be compared against the version of the IDE that generated them during settings importation.  
  
    -   The value of the `pszSettingName` argument supplied to a method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> interface must uniquely identify each data element saved in a settings category.  
  
        > [!NOTE]
        >  Names must only be unique within the scope of the implementing class. The IDE uses the GUID of the class that implements the settings and the value of `pszSettingName` to identify each saved setting. If more than one <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> method that have the same `pszSettingName` value are called, the original value is overwritten in the settings file.  
  
    -   The settings file supports random data access, so the order of read and write operations is not important. In the following example, the order of writer operations in the implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml*> method is opposite of the read operations in the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml*> method.  
  
    -   If the implementation can map data into one of the four supported formats, then there is no restriction on how much or what type of data can be written.  
  
        > [!NOTE]
        >  The division of labor between the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> and <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml*> methods depends on the implementation and is somewhat arbitrary. For example, the implementation could be rewritten by using an empty implementation of the <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage*> method and by having all registry and state queries performed in the <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml*> method.  
  
4.  Register the settings implementing class as providing support to a VSPackage.  
  
     Apply an instance of <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute> that is constructed by using the <xref:System.Type> of the class that implements <xref:Microsoft.VisualStudio.Shell.IProfileManager> to the VSPackage <xref:Microsoft.VisualStudio.Shell.Package> implementation.  
  
    ```vb#  
    <ProvideProfile(GetType(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, False)> _   
    <Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
    Class MyPackage   
        Inherits Package   
    End Class  
    ```  
  
    ```c#  
    [ProvideProfile(typeof(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, false)]  
    [Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
    class MyPackage: Package   
    ```  
  
     In this case, the attribute informs the IDE that the `MyPackageProfileManager` class provides a settings implementation to the `MyPackage` class. The Custom Settings Point in the registry is created under HKLM\Software\Microsoft\VisualStudio\\*Version*\UserSettings\ CoreUI_MyPackage, where *Version* is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], for example, 10.0.  
  
     For more information, see [Support for User Settings](../Topic/Support%20for%20User%20Settings.md) and <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute>.  
  
## Example  
 The following example implements <xref:Microsoft.VisualStudio.Shell.IProfileManager> on a class.  
  
```vb#  
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
            ' First, check if data is obtained from the correct major version   
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
  
Convert C# to VB.NET  
  
```  
  
```c#  
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
      // First, check if data is obtained from the correct major version   
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
 [Importing Settings](../misc/importing-settings.md)   
 [Support for User Settings](../Topic/Support%20for%20User%20Settings.md)