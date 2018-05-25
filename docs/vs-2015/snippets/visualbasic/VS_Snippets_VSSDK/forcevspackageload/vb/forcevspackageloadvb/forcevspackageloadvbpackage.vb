' Implementation of ForceVSPackageLoadVB
'

Imports Microsoft.VisualBasic
Imports System
Imports System.Diagnostics
Imports System.Globalization
Imports System.Runtime.InteropServices
Imports System.ComponentModel.Design
Imports Microsoft.Win32
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
' The PackageRegistration attribute tells the registration utility (regpkg.exe) that this class needs
' to be registered as package.
'
' A Visual Studio component can be registered under different regitry roots; for instance
' when you debug your package you want to register it in the experimental hive. The DefaultRegistryRoot
' attribute specifies the registry root to use if no one is provided to regpkg.exe with
' the /root switch.
'
' The InstalledProductRegistration attribute is used to register the information needed to show this package
' in the Help/About dialog of Visual Studio.
'
' In order be loaded inside Visual Studio in a machine that does not have the VS SDK installed, 
' the package needs to have a valid load key (it can be requested at 
' http://msdn.microsoft.com/vstudio/extend/). The [ProvideLoadKey attribute tells the shell that this 
' package has a load key embedded in its resources.

<PackageRegistration(UseManagedResourcesOnly:=True), _
DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0"), _
InstalledProductRegistration(False, "#110", "#112", "1.0", IconResourceID:=400), _
ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1), _
Guid("2B0BB6A2-A0C9-4f21-B5E4-E3E8400447A9")> _
Public NotInheritable Class PackageToBeLoaded
    Inherits Package

End Class

<PackageRegistration(UseManagedResourcesOnly:=True), _
DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0"), _
InstalledProductRegistration(False, "#110", "#112", "1.0", IconResourceID:=400), _
ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1), _
Guid(GuidList.guidForceVSPackageLoadVBPkgString)> _
Public NotInheritable Class ForceVSPackageLoadVBPackage
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
        ''' <Snippet01>
        Dim shell As IVsShell = TryCast(GetService(GetType(SVsShell)), IVsShell)
        If shell Is Nothing Then
            Return
        End If

        Dim package As IVsPackage = Nothing
        Dim PackageToBeLoadedGuid As Guid = GetType(PackageToBeLoaded).GUID
        shell.LoadPackage(PackageToBeLoadedGuid, package)
        ''' </Snippet01>

        Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, "Entering Initialize() of: {0}", Me.GetType().Name))
        MyBase.Initialize()

    End Sub
#End Region

End Class