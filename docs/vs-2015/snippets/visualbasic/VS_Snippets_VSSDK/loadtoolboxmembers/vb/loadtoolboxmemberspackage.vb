' Implementation of LoadToolboxMembers
'

'<Snippet08>
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

'<Snippet07>
Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing.Design
Imports System.Reflection
'</Snippet07>

' ...
<PackageRegistration(UseManagedResourcesOnly:=True), _
DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0"), _
InstalledProductRegistration(False, "#110", "#112", "1.0", IconResourceID:=400), _
ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1), _
ProvideMenuResource(1000, 1), _
Guid(GuidList.guidLoadToolboxMembersPkgString)> _
<ProvideToolboxItems(1)> _
Public NotInheritable Class LoadToolboxMembersPackage
    Inherits Package

    ' List for the toolbox items provided by this package.
    Private ToolboxItemList As ArrayList

    ' Name for the Toolbox category tab for the package's toolbox items.
    Private CategoryTab As String = "LoadToolboxMembers Walkthrough VB"

    ' ...
    '</Snippet08>

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
    '<Snippet09>
    Protected Overrides Sub Initialize()
        Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, _
            "Entering Initialize() of: {0}", Me.GetType().Name))
        MyBase.Initialize()

        ' Add our command handlers for menu (commands must exist in the .vsct file)
        Dim mcs As OleMenuCommandService = _
            TryCast(GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        If Not mcs Is Nothing Then

            ' Create the command for the menu item.
            Dim menuCommandID As New CommandID( _
                GuidList.guidLoadToolboxMembersCmdSet, CInt(PkgCmdIDList.cmdidMyCommand))
            Dim menuItem As New MenuCommand( _
                New EventHandler(AddressOf MenuItemCallback), menuCommandID)
            mcs.AddCommand(menuItem)
        End If

        ' Use reflection to get the toolbox items provided in this assembly.
        ToolboxItemList = CreateItemList(Me.GetType().Assembly)
        If ToolboxItemList Is Nothing Then
            ' Unable to generate the list.
            ' Add error handling code here.
        End If
    End Sub
    '</Snippet09>
#End Region


    '<Snippet10>
    ' Scan for toolbox items in the assembly and return the list of
    ' toolbox items.
    Private Function CreateItemList(ByVal asmbly As Assembly) As ArrayList

        Dim list As New ArrayList()
        For Each possibleItem As Type In asmbly.GetTypes()

            Dim item As ToolboxItem = CreateToolboxItem(possibleItem)
            If item IsNot Nothing Then
                list.Add(item)
            End If
        Next

        Return list
    End Function

    ' If the type represents a toolbox item, return an instance of the type
    ' otherwise, return Nothing.
    Private Function CreateToolboxItem(ByVal possibleItem As Type) As ToolboxItem

        ' A toolbox item must implement IComponent and must not be abstract.
        If Not GetType(IComponent).IsAssignableFrom(possibleItem) Or _
            possibleItem.IsAbstract Then

            Return Nothing
        End If

        ' A toolbox item must have a constructor that takes a parameter of
        ' type Type or a constructor that takes no parameters.
        If possibleItem.GetConstructor(New Type() {GetType(Type)}) Is Nothing And _
            possibleItem.GetConstructor(New Type() {}) Is Nothing Then

            Return Nothing
        End If

        Dim item As ToolboxItem = Nothing

        ' Check the custom attributes of the candidate type and attempt to
        ' create an instance of the toolbox item type.
        Dim attribs As AttributeCollection = _
            TypeDescriptor.GetAttributes(possibleItem)
        Dim tba As ToolboxItemAttribute = TryCast( _
            attribs(GetType(ToolboxItemAttribute)), ToolboxItemAttribute)
        If tba IsNot Nothing And Not tba.Equals(ToolboxItemAttribute.None) Then

            If Not tba.IsDefaultAttribute() Then

                ' This type represents a custom toolbox item implementation.
                Dim itemType As Type = tba.ToolboxItemType
                Dim ctor As ConstructorInfo = _
                    itemType.GetConstructor(New Type() {GetType(Type)})
                If ctor IsNot Nothing And itemType IsNot Nothing Then

                    item = CType(ctor.Invoke(New Object() {possibleItem}), ToolboxItem)
                Else

                    ctor = itemType.GetConstructor(New Type() {})
                    If ctor IsNot Nothing Then

                        item = CType(ctor.Invoke(New Object() {}), ToolboxItem)
                        item.Initialize(possibleItem)
                    End If
                End If
            Else

                ' This type represents a default toolbox item.
                item = New ToolboxItem(possibleItem)
            End If

            If item Is Nothing Then

                Throw New ApplicationException("Unable to create a ToolboxItem " & _
                    "object from " & possibleItem.FullName & ".")
            End If
        End If

        ' Update the display name of the toolbox item and add the item to
        ' the list.
        Dim displayName As DisplayNameAttribute = TryCast( _
            attribs(GetType(DisplayNameAttribute)), DisplayNameAttribute)
        If displayName IsNot Nothing And Not displayName.IsDefaultAttribute() Then

            item.DisplayName = displayName.DisplayName
        End If

        Return item
    End Function
    '</Snippet10>

    '<Snippet11>
    Private Sub OnRefreshToolbox(ByVal sender As Object, ByVal e As EventArgs) _
        Handles Me.ToolboxInitialized, Me.ToolboxUpgraded

        ' Add new instances of all ToolboxItems contained in ToolboxItemList.
        Dim service As IToolboxService = TryCast( _
                GetService(GetType(IToolboxService)), IToolboxService)
        Dim toolbox As IVsToolbox = TryCast( _
            GetService(GetType(IVsToolbox)), IVsToolbox)

        'Remove target tab and all controls under it.
        For Each oldItem As ToolboxItem In service.GetToolboxItems(CategoryTab)
            service.RemoveToolboxItem(oldItem)
        Next
        toolbox.RemoveTab(CategoryTab)

        For Each itemFromList As ToolboxItem In ToolboxItemList
            service.AddToolboxItem(itemFromList, CategoryTab)
        Next
        service.SelectedCategory = CategoryTab

        service.Refresh()
    End Sub
    '</Snippet11>

    ''' <summary>
    ''' This function is the callback used to execute a command when the a menu item is clicked.
    ''' See the Initialize method to see how the menu item is associated to this function using
    ''' the OleMenuCommandService service and the MenuCommand class.
    ''' </summary>
    '<Snippet12>
    Private Sub MenuItemCallback(ByVal sender As Object, ByVal e As EventArgs)
        Dim pkg As IVsPackage = TryCast(GetService(GetType(Package)), Package)
        pkg.ResetDefaults(CUInt(__VSPKGRESETFLAGS.PKGRF_TOOLBOXITEMS))
    End Sub
    '</Snippet12>

End Class