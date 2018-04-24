' Implementation of UIUserSettingsToolsOptionsPages
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

Imports EnvDTE
Imports System.Windows.Forms


'<snippet04> 
Imports Microsoft.VisualStudio
Imports Company.UIUserSettingsToolsOptionsPages.Company.UIUserSettingsToolsOptionsPages
'</snippet04> 


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
'
' The ProvideToolWindow attribute registers a tool window exposed by this package.
'<snippet07> 
<PackageRegistration(UseManagedResourcesOnly:=True)> _
<DefaultRegistryRoot("Software\Microsoft\VisualStudio\9.0")> _
<InstalledProductRegistration(False, "#110", "#112", "1.0", IconResourceID:=400)> _
<ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)> _
<ProvideMenuResource(1000, 1)> _
<Guid(GuidList.guidPkgString)> _
<ProvideOptionPage(GetType(HelloWorldOptions), "Hello World Category", "Hello World Page", 1000, 1001, False)> _
Public NotInheritable Class UIUserSettingsToolsOptionsPagesPackage
    Inherits Package
    '</snippet07> 
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

    ''' <summary>
    ''' This function is called when the user clicks the menu item that shows the 
    ''' tool window. See the Initialize method to see how the menu item is associated to 
    ''' this function using the OleMenuCommandService service and the MenuCommand class.
    ''' </summary>
    Private Sub ShowToolWindow(ByVal sender As Object, ByVal e As EventArgs)
        ' Get the instance number 0 of this tool window. This window is single instance so this instance
        ' is actually the only one.
        ' The last flag is set to true so that if the tool window does not exists it will be created.
        Dim window As ToolWindowPane = Me.FindToolWindow(GetType(MyToolWindow), 0, True)
        If (window Is Nothing) Or (window.Frame Is Nothing) Then
            Throw New NotSupportedException(Resources.CanNotCreateWindow)
        End If

        Dim windowFrame As IVsWindowFrame = TryCast(window.Frame, IVsWindowFrame)
        Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure(windowFrame.Show())
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

        ' Add our command handlers for menu (commands must exist in the .vsct file)
        Dim mcs As OleMenuCommandService = TryCast(GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        If Not mcs Is Nothing Then
            ' Create the command for the tool window
            Dim guidCmdSet As New Guid
            Dim toolwndCommandID As New CommandID(guidCmdSet, CInt(PkgCmdIDList.cmdidMyTool))
            Dim menuToolWin As New MenuCommand(New EventHandler(AddressOf ShowToolWindow), toolwndCommandID)
            mcs.AddCommand(menuToolWin)
        End If
    End Sub
#End Region
    Private Sub MenuItemCallback(ByVal sender As Object, ByVal e As EventArgs)
        ' The EnvDTE.dll assembly must be referenced for this to work. 

        '<Snippet01> 
        Dim vsEnvironment As DTE = DirectCast(GetService(GetType(SDTE)), DTE)
        '</Snippet01> 

        '<Snippet02> 
        Dim propertiesList As Properties = vsEnvironment.get_Properties("TextEditor", "Basic")
        If propertiesList Is Nothing Then
            ' The specified properties collection is not available. 
            Exit Sub
        End If
        '</Snippet02> 

        '<Snippet03> 
        Dim tabSize As [Property] = propertiesList.Item("TabSize")
        Dim oldSize As Short = CShort(tabSize.Value)

        Dim message As String
        If oldSize <> 4 Then
            tabSize.Value = 4
            message = String.Format(CultureInfo.CurrentUICulture, "For Basic, the Text Editor had a tab size of {0}" & " and now has a tab size of {1}.", oldSize, tabSize.Value)
        Else
            message = String.Format(CultureInfo.CurrentUICulture, "For Basic, the Text Editor has a tab size of {0}.", tabSize.Value)
        End If

        '</Snippet03> 
        MessageBox.Show(message, "Text Editor, Basic, Tab Size:", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, 0)
    End Sub

    Private Sub ShowCustomOptionPage()
        '<snippet5> 
        Dim optionsPageType As Type = GetType(HelloWorldOptions)
        '</snippet5> 
        ShowOptionPage(optionsPageType)
    End Sub

    '<snippet08> 
    Private Sub ShowHelloWorld(ByVal sender As Object, ByVal e As EventArgs)
        Dim hw = TryCast(GetDialogPage(GetType(HelloWorldOptions)), HelloWorldOptions)
        If hw.HelloWorld = True Then
            MessageBox.Show("Hello World!")
        Else
            MessageBox.Show("Goodbye.")
        End If
    End Sub
    '</snippet08> 

    Private Sub ShowTextEditorGeneral()
        '<snippet6> 
        ' GUID of Options>TextEditor>General 
        Dim targetGUID As String = "734A5DE2-DEBA-11d0-A6D0-00C04FB67F6A"
        Dim command = New CommandID(VSConstants.GUID_VSStandardCommandSet97, VSConstants.cmdidToolsOptions)
        Dim mcs = TryCast(GetService(GetType(IMenuCommandService)), MenuCommandService)
        '</snippet6> 
        mcs.GlobalInvoke(command, targetGUID)
    End Sub
End Class