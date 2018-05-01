' Implementation of MenuText
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
Imports System.Security.Permissions

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
    '
' The ProvideMenuResource attribute is needed to let the shell know that this package exposes some menus.

    <PackageRegistration(UseManagedResourcesOnly := true), _
    DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0"), _ 
    InstalledProductRegistration(false, "#110", "#112", "1.0", IconResourceID := 400), _
    ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1), _
    ProvideMenuResource(1000, 1), _    
    Guid(GuidList.guidMenuTextPkgString)> _
    Public NotInheritable Class MenuTextPackage
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
    '<snippet12> 
    Protected Overloads Overrides Sub Initialize()
        Dim mcs As OleMenuCommandService = TryCast(GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        If mcs IsNot Nothing Then
            Dim e As New System.EventArgs
            '<Snippet14>
            Dim menuCommandID As CommandID = New CommandID(GuidList.guidMenuTextCmdSet, CInt(PkgCmdIDList.cmdidMyTextCommand))
            Dim menuItem As OleMenuCommand = New OleMenuCommand(New EventHandler(AddressOf MenuItemCallback), menuCommandID)
            AddHandler menuItem.BeforeQueryStatus, AddressOf OnBeforeQueryStatus
            mcs.AddCommand(menuItem)
            '</Snippet14>
        End If
    End Sub
    '</snippet12> 
#End Region


    '<snippet11> 
    Private Sub OnBeforeQueryStatus(ByVal sender As Object, ByVal e As EventArgs)
        Dim myCommand As OleMenuCommand = TryCast(sender, OleMenuCommand)
        If myCommand IsNot Nothing Then
            myCommand.Text = "New Text"
        End If
    End Sub
    '</snippet11> 

    ''' <summary>
    ''' This function is the callback used to execute a command when the a menu item is clicked.
    ''' See the Initialize method to see how the menu item is associated to this function using
    ''' the OleMenuCommandService service and the MenuCommand class.
    ''' </summary>
Private Sub MenuItemCallback(ByVal sender As Object, ByVal e As EventArgs)
    ' Show a Message Box to prove we were here
    Dim uiShell As IVsUIShell = TryCast(GetService(GetType(SVsUIShell)), IVsUIShell)
    Dim clsid As Guid = Guid.Empty
    Dim result As Integer
    Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure(uiShell.ShowMessageBox(0, clsid, "Package Name", String.Format(CultureInfo.CurrentCulture, "Inside {0}.MenuItemCallback()", Me.GetType().Name), String.Empty, 0, OLEMSGBUTTON.OLEMSGBUTTON_OK, OLEMSGDEFBUTTON.OLEMSGDEFBUTTON_FIRST, OLEMSGICON.OLEMSGICON_INFO, 0, result))
End Sub
    '<snippet13> 
    <PrincipalPermission(SecurityAction.Demand)> _
    Public Function EnableMyCommand(ByVal cmdID As Integer, ByVal fEnableCmd As Boolean) As Boolean
        Dim fCmdUpdated As Boolean = False
        Dim mcs As OleMenuCommandService = TryCast(Me.GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        Dim newCmdID As CommandID = New CommandID(GuidList.guidMenuTextCmdSet, cmdID)
        Dim mc As MenuCommand = mcs.FindCommand(newCmdID)
        If mc IsNot Nothing Then
            mc.Enabled = fEnableCmd
            fCmdUpdated = True
        End If
        Return fCmdUpdated
    End Function
    '</snippet13> 

End Class