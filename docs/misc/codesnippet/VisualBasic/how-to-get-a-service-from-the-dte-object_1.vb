
        ' Start with the DTE object, for example: 
        'DTE dte = (DTE)GetService(typeof(DTE)); 
        Dim dte As DTE
        dte = CType(GetService(GetType(DTE)), DTE)

        Dim sp As New ServiceProvider(dte)
        Dim log As IVsActivityLog = TryCast(GetService(GetType(SVsActivityLog)), IVsActivityLog)
        If log Is Nothing Then
            Return
        End If

        Dim hr As Integer = log.LogEntry(CType(__ACTIVITYLOG_ENTRYTYPE.ALE_INFORMATION, UInt32), Me.ToString(), String.Format(CultureInfo.CurrentCulture, "Consuming SVsActivityLog service in {0}", Me.ToString()))