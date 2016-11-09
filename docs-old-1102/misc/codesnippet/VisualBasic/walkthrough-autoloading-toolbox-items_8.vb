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

Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing.Design
Imports System.Reflection

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