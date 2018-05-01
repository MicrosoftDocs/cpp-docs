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

namespace Microsoft.VSSDKEditorFactories
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
    [PackageRegistration(UseManagedResourcesOnly = true)]
    // This attribute is used to register the informations needed to show the this package
    // in the Help/About dialog of Visual Studio.
    [InstalledProductRegistration("#110", "#112", "1.0", IconResourceID = 400)]
    [Guid(GuidList.guidVSSDKEditorFactoriesPkgString)]
    public sealed class VSSDKEditorFactoriesPackage : Package
    {
        /// <summary>
        /// Default constructor of the package.
        /// Inside this method you can place any initialization code that does not require 
        /// any Visual Studio service because at this point the package object is created but 
        /// not sited yet inside Visual Studio environment. The place to do all the other 
        /// initialization is the Initialize method.
        /// </summary>
        public VSSDKEditorFactoriesPackage()
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

    }

    //<Snippet1>
    [Guid(GuidList.guidEditorFactory)]
    public sealed class SingleViewEditorFactory : IVsEditorFactory, IDisposable
    {
        private PackageSingleViewEditor MyPackage;
        private ServiceProvider vsServiceProvider;

        public SingleViewEditorFactory(PackageSingleViewEditor packageEditor)
        {
            Trace.WriteLine(string.Format(CultureInfo.CurrentCulture, 
                "Entering {0} constructor", this.ToString()));
            MyPackage = packageEditor;
        }

        #region "IVsEditorFactory Support"
            public int Close()
            {
                throw new NotImplementedException();
            }

            public int CreateEditorInstance(uint grfCreateDoc, string pszMkDocument, string pszPhysicalView, IVsHierarchy pvHier, uint itemid, IntPtr punkDocDataExisting, out IntPtr ppunkDocView, out IntPtr ppunkDocData, out string pbstrEditorCaption, out System.Guid pguidCmdUI, out int pgrfCDW)
            {
                throw new NotImplementedException();
            }

            public int MapLogicalView(ref System.Guid rguidLogicalView, out string pbstrPhysicalView)
            {
                throw new NotImplementedException();
            }

            public int SetSite(Microsoft.VisualStudio.OLE.Interop.IServiceProvider psp)
            {
                throw new NotImplementedException();
            }
        #endregion

        #region "IDisposable Support"
            public void Dispose()
            {
                throw new NotImplementedException();
            }
        #endregion
    }
    //</Snippet1>
}
