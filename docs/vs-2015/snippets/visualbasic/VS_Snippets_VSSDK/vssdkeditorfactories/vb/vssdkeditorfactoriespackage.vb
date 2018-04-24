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
    Guid(GuidList.guidVSSDKEditorFactoriesPkgString)> _
    Public NotInheritable Class VSSDKEditorFactoriesPackage
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

End Class

'<Snippet1>
<Guid(GuidList.guidEditorFactory)> _
Public NotInheritable Class SingleViewEditorFactory
    Implements IVsEditorFactory
    Implements IDisposable

    Private MyPackage As PackageSingleViewEditor
    Private vsServiceProvider As ServiceProvider

    Public Sub New(ByVal packageEditor As PackageSingleViewEditor)
        Trace.WriteLine(String.Format(CultureInfo.CurrentCulture,
          "Entering {0} constructor", Me.ToString()))
        MyPackage = packageEditor
    End Sub

#Region "IVsEditorFactorySupport"
    Public Function Close() As Integer Implements VisualStudio.Shell.Interop.IVsEditorFactory.Close
        Throw New NotImplementedException
    End Function

    Public Function CreateEditorInstance(ByVal grfCreateDoc As UInteger, ByVal pszMkDocument As String, ByVal pszPhysicalView As String, ByVal pvHier As VisualStudio.Shell.Interop.IVsHierarchy, ByVal itemid As UInteger, ByVal punkDocDataExisting As System.IntPtr, ByRef ppunkDocView As System.IntPtr, ByRef ppunkDocData As System.IntPtr, ByRef pbstrEditorCaption As String, ByRef pguidCmdUI As System.Guid, ByRef pgrfCDW As Integer) As Integer Implements VisualStudio.Shell.Interop.IVsEditorFactory.CreateEditorInstance
        Throw New NotImplementedException
    End Function

    Public Function MapLogicalView(ByRef rguidLogicalView As System.Guid, ByRef pbstrPhysicalView As String) As Integer Implements VisualStudio.Shell.Interop.IVsEditorFactory.MapLogicalView
        Throw New NotImplementedException
    End Function

    Public Function SetSite(ByVal psp As VisualStudio.OLE.Interop.IServiceProvider) As Integer Implements VisualStudio.Shell.Interop.IVsEditorFactory.SetSite
        Throw New NotImplementedException
    End Function
#End Region

#Region "IDisposable Support"
    Public Sub Dispose() Implements IDisposable.Dispose
        Throw New NotImplementedException
    End Sub
#End Region

End Class
'</Snippet1>