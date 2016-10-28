        private void MenuItemCallback(object sender, EventArgs e)
        {
            IVsPackage pkg = GetService(typeof(Package)) as Package;
            pkg.ResetDefaults((uint)__VSPKGRESETFLAGS.PKGRF_TOOLBOXITEMS);
        }