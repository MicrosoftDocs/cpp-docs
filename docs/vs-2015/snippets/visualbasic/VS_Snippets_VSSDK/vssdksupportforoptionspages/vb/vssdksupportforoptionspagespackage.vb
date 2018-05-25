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
Imports EnvDTE

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

'<Snippet2>
<ProvideOptionPage(GetType(OptionsPageGeneral), "My Option Pages", "General", 101, 106, True),
 ProvideOptionPage(GetType(OptionsPageCustom), "My Option Pages", "Custom", 101, 107, True),
 Guid("B0002DC2-56EE-4931-93F7-70D6E9863940")>
Public Class MyPackage
    Inherits Package
    '</Snippet2>

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
Namespace Company.OptionsPage
    Public Class OptionsPageGeneral
        Inherits DialogPage
    End Class
End Namespace
'</Snippet1>

'<Snippet4>
<ProvideOptionPage(GetType(MyOptionPage), "My Category", "My Grid Page", 0, 0, True)>
<Guid("6bb6942e-014c-489e-a612-a935680f703d")>
Public NotInheritable Class MyToolsOptions
    Inherits Package
    '</Snippet4>

    Public Sub ParsnipFiller()
        '<Snippet5>
        Dim dte As DTE = CType(GetService(GetType(DTE)), DTE)
        Dim props As EnvDTE.Properties = dte.get_Properties("My Category", "My Grid Page")
        Dim n As Integer = CInt(Fix(props.Item("OptionInteger").Value))
        '</Snippet5>
    End Sub
End Class

