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