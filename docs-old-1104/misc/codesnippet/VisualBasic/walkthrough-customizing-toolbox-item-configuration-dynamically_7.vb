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