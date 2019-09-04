CString strData = _T("Some very long data to be POSTed here!");
pServer = session.GetHttpConnection(_T("localhost"));
pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,
                             _T("/MFCISAPI/MFCISAPI.dll?"));
pFile->SendRequestEx(strData.GetLength());

pFile->WriteString(strData);
pFile->EndRequest();