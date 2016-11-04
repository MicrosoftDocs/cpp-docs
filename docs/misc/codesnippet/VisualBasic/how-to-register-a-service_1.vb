    <DefaultRegistryRoot("Microsoft\VisualStudio\8.0Exp")> _
    <PackageRegistration(UseManagedResourcesOnly:=True)> _
    <ProvideService(GetType(SMyGlobalService))> _
    <System.Runtime.InteropServices.Guid("d695001c-f46a-407b-a1c9-54c35ef8ce87")> _
    Public NotInheritable Class ServicesPackage
        Inherits Package