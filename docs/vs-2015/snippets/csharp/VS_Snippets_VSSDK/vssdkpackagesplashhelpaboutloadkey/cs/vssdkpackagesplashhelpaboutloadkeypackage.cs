using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.InteropServices;
using System.ComponentModel.Design;
using Microsoft.Win32;
using Microsoft.VisualStudio;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;

namespace Microsoft.VSSDKPackageSplashHelpAboutLoadKey
{
    /// <summary>
    /// This is the class that implements the package exposed by this assembly.
    ///
    /// The minimum requirement for a class to be considered a valid package for Visual Studio
    /// is to implement the IVsPackage interface and register itself with the shell.
    /// This package uses the helper classes defined inside the Managed Package Framework (MPF)
    /// to do it: it derives from the Package class that provides the implementation of the 
    /// IVsPackage interface and uses the registration attributes defined in the framework to 
    /// register itself and its components with the shell.
    /// </summary>
    // This attribute tells the PkgDef creation utility (CreatePkgDef.exe) that this class is
    // a package.
    //<Snippet1>
    [InstalledProductRegistration(true, null, null, null)]
    [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\8.0")]
    [PackageRegistration(UseManagedResourcesOnly = true)]
    [Guid("EEE474A0-083B-4e9c-B453-F6FCCEDA2577")]
    public sealed class PackageSplashHelpAboutLoadKey : 
        Package, IVsInstalledProduct
    //</Snippet1>
    {
        /// <summary>
        /// Default constructor of the package.
        /// Inside this method you can place any initialization code that does not require 
        /// any Visual Studio service because at this point the package object is created but 
        /// not sited yet inside Visual Studio environment. The place to do all the other 
        /// initialization is the Initialize method.
        /// </summary>
        public PackageSplashHelpAboutLoadKey()
        {
            Trace.WriteLine(string.Format(CultureInfo.CurrentCulture, "Entering constructor for: {0}", this.ToString()));
        }



        /////////////////////////////////////////////////////////////////////////////
        // Overriden Package Implementation
        #region Package Members

        /// <summary>
        /// Initialization of the package; this method is called right after the package is sited, so this is the place
        /// where you can put all the initilaization code that rely on services provided by VisualStudio.
        /// </summary>
        protected override void Initialize()
        {
            Trace.WriteLine (string.Format(CultureInfo.CurrentCulture, "Entering Initialize() of: {0}", this.ToString()));
            base.Initialize();

        }
        #endregion

        //<Snippet2>
        public int IdBmpSplash(out uint pIdBmp)
        {
            pIdBmp = 300;
            return VSConstants.S_OK;
        }
        public int IdIcoLogoForAboutbox(out uint pIdIco)
        {
            pIdIco = 400;
            return VSConstants.S_OK;
        }
        public int OfficialName(out string pbstrName)
        {
            pbstrName = GetResourceString("@101");
            return VSConstants.S_OK;
        }
        public int ProductDetails(out string pbstrProductDetails)
        {
            pbstrProductDetails = GetResourceString("@102");
            return VSConstants.S_OK;
        }
        public int ProductID(out string pbstrPID)
        {
            pbstrPID = GetResourceString("@104");
            return VSConstants.S_OK;
        }
        public string GetResourceString(string resourceName)
        {
            string resourceValue;
            IVsResourceManager resourceManager =
                (IVsResourceManager)GetService(typeof(SVsResourceManager));
            if (resourceManager == null)
            {
                throw new InvalidOperationException(
                    "Could not get SVsResourceManager service. Make sure that the package is sited before calling this method");
            }
            Guid packageGuid = this.GetType().GUID;
            int hr = resourceManager.LoadResourceString(
                ref packageGuid, -1, resourceName, out resourceValue);
            Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure(hr);
            return resourceValue;
        }
        //</Snippet2>
    }
}
