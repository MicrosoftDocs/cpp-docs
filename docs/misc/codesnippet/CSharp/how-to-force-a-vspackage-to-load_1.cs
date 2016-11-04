            IVsShell shell = GetService(typeof(SVsShell)) as IVsShell;
            if (shell == null) return;

            IVsPackage package = null;
            Guid PackageToBeLoadedGuid = 
                new Guid(Microsoft.PackageToBeLoaded.GuidList.guidPackageToBeLoadedPkgString);
            shell.LoadPackage(ref PackageToBeLoadedGuid, out package);