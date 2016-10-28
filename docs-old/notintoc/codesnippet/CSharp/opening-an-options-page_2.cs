            // GUID of Options>TextEditor>General
            string targetGUID = "734A5DE2-DEBA-11d0-A6D0-00C04FB67F6A";
            var command = new CommandID(
                VSConstants.GUID_VSStandardCommandSet97, 
                VSConstants.cmdidToolsOptions);
            var mcs = GetService(typeof(IMenuCommandService)) 
                as MenuCommandService;
            mcs.GlobalInvoke(command, targetGUID);