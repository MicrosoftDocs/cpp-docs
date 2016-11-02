    [DefaultRegistryRoot(@"Microsoft\VisualStudio\8.0Exp")]
    [PackageRegistration(UseManagedResourcesOnly = true)]
    [ProvideService(typeof(SMyGlobalService))]
    [System.Runtime.InteropServices.Guid("d695001c-f46a-407b-a1c9-54c35ef8ce87")]
    public sealed class ServicesPackage : Package