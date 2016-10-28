void WriteString(LPCTSTR pstrFormat, ...)
{
    CString str;

    // format and write the data you were given
    va_list args;
    va_start(args, pstrFormat);

    str.FormatV(pstrFormat, args);
    va_end(args);

    _tprintf_s(str);
    return;
}