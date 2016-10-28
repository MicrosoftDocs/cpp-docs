class FileReader
{
    const uint GENERIC_READ = 0x80000000;
    const uint OPEN_EXISTING = 3;
    System.IntPtr handle;

    [System.Runtime.InteropServices.DllImport("kernel32", SetLastError = true, ThrowOnUnmappableChar = true, CharSet = System.Runtime.InteropServices.CharSet.Unicode)]
    static extern unsafe System.IntPtr CreateFile
    (
        string FileName,          // file name
        uint DesiredAccess,       // access mode
        uint ShareMode,           // share mode
        uint SecurityAttributes,  // Security Attributes
        uint CreationDisposition, // how to create
        uint FlagsAndAttributes,  // file attributes
        int hTemplateFile         // handle to template file
    );

    [System.Runtime.InteropServices.DllImport("kernel32", SetLastError = true)]
    static extern unsafe bool ReadFile
    (
        System.IntPtr hFile,      // handle to file
        void* pBuffer,            // data buffer
        int NumberOfBytesToRead,  // number of bytes to read
        int* pNumberOfBytesRead,  // number of bytes read
        int Overlapped            // overlapped buffer
    );

    [System.Runtime.InteropServices.DllImport("kernel32", SetLastError = true)]
    static extern unsafe bool CloseHandle
    (
        System.IntPtr hObject // handle to object
    );

    public bool Open(string FileName)
    {
        // open the existing file for reading       
        handle = CreateFile
        (
            FileName,
            GENERIC_READ,
            0,
            0,
            OPEN_EXISTING,
            0,
            0
        );

        if (handle != System.IntPtr.Zero)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public unsafe int Read(byte[] buffer, int index, int count)
    {
        int n = 0;
        fixed (byte* p = buffer)
        {
            if (!ReadFile(handle, p + index, count, &n, 0))
            {
                return 0;
            }
        }
        return n;
    }

    public bool Close()
    {
        return CloseHandle(handle);
    }
}

class Test
{
    static int Main(string[] args)
    {
        if (args.Length != 1)
        {
            System.Console.WriteLine("Usage : ReadFile <FileName>");
            return 1;
        }

        if (!System.IO.File.Exists(args[0]))
        {
            System.Console.WriteLine("File " + args[0] + " not found.");
            return 1;
        }

        byte[] buffer = new byte[128];
        FileReader fr = new FileReader();

        if (fr.Open(args[0]))
        {
            // Assume that an ASCII file is being read.
            System.Text.ASCIIEncoding Encoding = new System.Text.ASCIIEncoding();

            int bytesRead;
            do
            {
                bytesRead = fr.Read(buffer, 0, buffer.Length);
                string content = Encoding.GetString(buffer, 0, bytesRead);
                System.Console.Write("{0}", content);
            }
            while (bytesRead > 0);

            fr.Close();
            return 0;
        }
        else
        {
            System.Console.WriteLine("Failed to open requested file");
            return 1;
        }
    }
}