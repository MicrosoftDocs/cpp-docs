// MSO.dll
#import <libid:2DF8D04C-5BFA-101B-BDE5-00AA0044DE52> version("2.2") \
   rename("RGB", "Rgb")   \
   rename("DocumentProperties", "documentproperties")   \
   rename("ReplaceText", "replaceText")   \
   rename("FindText", "findText")   \
   rename("GetObject", "getObject")   \
   raw_interfaces_only

// dte.olb
#import <libid:80CC9F66-E7D8-4DDD-85B6-D9E6CD0E93E2> \
   inject_statement("using namespace Office;")   \
   rename("ReplaceText", "replaceText")   \
   rename("FindText", "findText")   \
   rename("GetObject", "getObject")   \
   rename("SearchPath", "searchPath")   \
   raw_interfaces_only