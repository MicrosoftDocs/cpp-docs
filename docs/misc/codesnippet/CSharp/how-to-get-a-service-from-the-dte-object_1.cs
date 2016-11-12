
            // Start with the DTE object, for example:
            // DTE dte = (DTE)GetService(typeof(DTE));
           
            ServiceProvider sp = new ServiceProvider(dte);
            IVsActivityLog log =
               GetService(typeof(SVsActivityLog)) as IVsActivityLog;
            if (log == null) return;

            int hr = log.LogEntry(
               (UInt32)__ACTIVITYLOG_ENTRYTYPE.ALE_INFORMATION,
               this.ToString(),
               string.Format(CultureInfo.CurrentCulture,
               "Consuming SVsActivityLog service in {0}", this.ToString())
            );