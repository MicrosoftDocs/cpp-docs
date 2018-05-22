Imports Microsoft.VisualBasic
Imports System
Imports System.Diagnostics
Imports System.Globalization
Imports System.Runtime.InteropServices
Imports System.ComponentModel.Design
Imports Microsoft.Win32
Imports Microsoft.VisualStudio
Imports Microsoft.VisualStudio.Shell.Interop
Imports Microsoft.VisualStudio.OLE.Interop
Imports Microsoft.VisualStudio.Shell

''' <summary>
''' This is the class that implements the package exposed by this assembly.
'''
''' The minimum requirement for a class to be considered a valid package for Visual Studio
''' is to implement the IVsPackage interface and register itself with the shell.
''' This package uses the helper classes defined inside the Managed Package Framework (MPF)
''' to do it: it derives from the Package class that provides the implementation of the 
''' IVsPackage interface and uses the registration attributes defined in the framework to 
''' register itself and its components with the shell.
''' </summary>
' The PackageRegistration attribute tells the PkgDef creation utility (CreatePkgDef.exe) that this class
' is a package.
'
' The InstalledProductRegistration attribute is used to register the information needed to show this package
' in the Help/About dialog of Visual Studio.

    <PackageRegistration(UseManagedResourcesOnly := true), _ 
    InstalledProductRegistration("#110", "#112", "1.0", IconResourceID := 400), _    
    Guid(GuidList.guidVSSDKRegisterServicePkgString)> _
    Public NotInheritable Class VSSDKRegisterServicePackage
Inherits Package

''' <summary>
''' Default constructor of the package.
''' Inside this method you can place any initialization code that does not require 
''' any Visual Studio service because at this point the package object is created but 
''' not sited yet inside Visual Studio environment. The place to do all the other 
''' initialization is the Initialize method.
''' </summary>
Public Sub New()
    Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, "Entering constructor for: {0}", Me.GetType().Name))
End Sub



''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
' Overriden Package Implementation
#Region "Package Members"

''' <summary>
''' Initialization of the package; this method is called right after the package is sited, so this is the place
''' where you can put all the initilaization code that rely on services provided by VisualStudio.
''' </summary>
Protected Overrides Sub Initialize()
    Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, "Entering Initialize() of: {0}", Me.GetType().Name))
    MyBase.Initialize()

        End Sub
#End Region

    ' Parsnip filler
    '<Snippet1>
    <DefaultRegistryRoot("Microsoft\VisualStudio\8.0Exp")> _
    <PackageRegistration(UseManagedResourcesOnly:=True)> _
    <ProvideService(GetType(SMyGlobalService))> _
    <System.Runtime.InteropServices.Guid("d695001c-f46a-407b-a1c9-54c35ef8ce87")> _
    Public NotInheritable Class ServicesPackage
        Inherits Package
        '</Snippet1>
    End Class

    '<Snippet2>
    <Guid("fafafdfb-60f3-47e4-b38c-1bae05b44240")> _
    Public Interface SMyGlobalService
    End Interface

    <Guid("ba9fe7a3-e216-424e-87f9-dee001228d03")> _
    <ComVisible(True)> _
    Public Interface IMyGlobalService
        Sub GlobalServiceFunction()
        Function CallLocalService() As Integer
    End Interface
    '</Snippet2>
End Class
