#pragma once

// CSerializableObj command target

class CSerializableObj : public CObject
{
public:
   CSerializableObj();
   virtual ~CSerializableObj();

    DECLARE_SERIAL( CSerializableObj )

    void Serialize( CArchive& archive );
};


