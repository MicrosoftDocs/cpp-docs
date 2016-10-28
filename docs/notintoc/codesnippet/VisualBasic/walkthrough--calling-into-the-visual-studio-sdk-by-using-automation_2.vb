            If commandName = "Addin.Connect.Addin" Then
                Dim sp As IOleServiceProvider = DirectCast(_applicationObject, IOleServiceProvider)
                Dim SID As Guid = GetType(SVsUIShell).GUID
                Dim IID As Guid = GetType(IVsUIShell).GUID
                Dim output As IntPtr
                sp.QueryService(SID, IID, output)
                Dim uiShell As IVsUIShell = DirectCast(Marshal.GetObjectForIUnknown(output), IVsUIShell)

                Dim clsid As Guid = Guid.Empty
                Dim result As Integer
                uiShell.ShowMessageBox(0, clsid, "MyAddin", String.Format(System.Globalization.CultureInfo.CurrentCulture, "Inside " & Me.ToString()), String.Empty, 0, _
                OLEMSGBUTTON.OLEMSGBUTTON_OK, OLEMSGDEFBUTTON.OLEMSGDEFBUTTON_FIRST, OLEMSGICON.OLEMSGICON_INFO, 0, result)

                handled = True
                Return
            End If