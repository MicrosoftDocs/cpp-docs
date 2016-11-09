                if (commandName == "Addin.Connect.Addin")
                {
                    IOleServiceProvider sp = (IOleServiceProvider)
                      _applicationObject;
                    Guid SID = typeof(SVsUIShell).GUID;
                    Guid IID = typeof(IVsUIShell).GUID;
                    IntPtr output;
                    sp.QueryService(ref SID, ref IID, out output);
                    IVsUIShell uiShell = (IVsUIShell)Marshal.GetObjectForIUnknown(output);

                    Guid clsid = Guid.Empty;
                    int result;
                    uiShell.ShowMessageBox(
                       0,
                       ref clsid,
                       "MyAddin",
                       string.Format(
                          CultureInfo.CurrentCulture, "Inside " + this.ToString()),
                       string.Empty,
                       0,
                       OLEMSGBUTTON.OLEMSGBUTTON_OK,
                       OLEMSGDEFBUTTON.OLEMSGDEFBUTTON_FIRST,
                       OLEMSGICON.OLEMSGICON_INFO,
                       0,
                       out result);

                    handled = true;
                    return;
                }