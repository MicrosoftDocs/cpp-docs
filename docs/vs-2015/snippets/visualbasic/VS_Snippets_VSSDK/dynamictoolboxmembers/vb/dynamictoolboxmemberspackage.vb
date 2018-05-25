' Implementation of ItemConfiguration
'

'<Snippet09>
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

'<Snippet06>
Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing.Design
Imports System.Reflection
'</Snippet06>

'<Snippet07>
' ...
<PackageRegistration(UseManagedResourcesOnly:=True), _
    DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0"), _
    InstalledProductRegistration(False, "#110", "#112", "1.0", IconResourceID:=400), _
    ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1), _
    ProvideMenuResource(1000, 1), _
    Guid(GuidList.guidItemConfigurationPkgString)> _
    <ProvideToolboxItems(1)> _
    <ProvideToolboxItemConfiguration(GetType(ToolboxConfig))> _
Public NotInheritable Class DynamicToolboxMembersPackage
    Inherits Package
    '</Snippet07>

    '<Snippet08>
    Private ToolboxItemList As ArrayList
    Private Shared ReadOnly CategoryTab As String = _
        "ItemConfiguration Walkthrough VB"
    '</Snippet08>

    ' ...
    '</Snippet09>

    ' ...
    Public Sub New()
        Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, _
            "Entering constructor for: {0}", Me.GetType().Name))
    End Sub


    '<Snippet10>
    ' Add new instances of all ToolboxItems to the toolbox item list.
    Private Sub OnRefreshToolbox(ByVal sender As Object, ByVal e As EventArgs) _
    Handles Me.ToolboxInitialized, Me.ToolboxUpgraded

        Dim service As IToolboxService = _
            TryCast(GetService(GetType(IToolboxService)), IToolboxService)
        Dim toolbox As IVsToolbox = _
             TryCast(GetService(GetType(IVsToolbox)), IVsToolbox)

        ' Remove target tab and all items under it.
        For Each item As ToolboxItem In service.GetToolboxItems(CategoryTab)
            service.RemoveToolboxItem(item)
        Next
        toolbox.RemoveTab(CategoryTab)

        ' Recreate the target tab with the items from the current list. 
        For Each item As ToolboxItem In ToolboxItemList
            service.AddToolboxItem(item, CategoryTab)
        Next
        service.SelectedCategory = CategoryTab

        service.Refresh()
    End Sub
    '</Snippet10>


    ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    ' Overriden Package Implementation

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
            ' Create the command for the menu item.
            Dim menuCommandID As New CommandID(GuidList.guidItemConfigurationCmdSet, CInt(PkgCmdIDList.cmdidMyCommand))
            Dim menuItem As New MenuCommand(New EventHandler(AddressOf MenuItemCallback), menuCommandID)
            mcs.AddCommand(menuItem)
        End If

        '<Snippet12>
        ' Use the toolbox service to get a list of all toolbox items in
        ' this assembly.
        ToolboxItemList = New ArrayList( _
            ToolboxService.GetToolboxItems(Me.GetType().Assembly, ""))
        If ToolboxItemList Is Nothing Then
            Throw New ApplicationException( _
                "Unable to generate a toolbox item listing for " & _
                Me.GetType().FullName)
        End If

        ' Update the display name of each toolbox item in the list.
        Dim thisAssembly As Assembly = Me.GetType().Assembly
        For Each item As ToolboxItem In ToolboxItemList

            Dim underlyingType As Type = thisAssembly.GetType(item.TypeName)
            Dim attribs As AttributeCollection = _
                TypeDescriptor.GetAttributes(underlyingType)
            Dim displayName As DisplayNameAttribute = _
                TryCast(attribs(GetType(DisplayNameAttribute)), DisplayNameAttribute)

            If displayName IsNot Nothing AndAlso Not displayName.IsDefaultAttribute() Then
                item.DisplayName = displayName.DisplayName
            End If
        Next
        '</Snippet12>
    End Sub

    ''' <summary>
    ''' This function is the callback used to execute a command when the a menu item is clicked.
    ''' See the Initialize method to see how the menu item is associated to this function using
    ''' the OleMenuCommandService service and the MenuCommand class.
    ''' </summary>
    '<Snippet13>
    Private Sub MenuItemCallback(ByVal sender As Object, ByVal e As EventArgs)
        Dim pkg As IVsPackage = TryCast(GetService(GetType(Package)), IVsPackage)
        pkg.ResetDefaults(CUInt(__VSPKGRESETFLAGS.PKGRF_TOOLBOXITEMS))
    End Sub
    '</Snippet13>

End Class