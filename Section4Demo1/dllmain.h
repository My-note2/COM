// dllmain.h: 模块类的声明。

class CSection4Demo1Module : public ATL::CAtlDllModuleT< CSection4Demo1Module >
{
public :
	DECLARE_LIBID(LIBID_Section4Demo1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SECTION4DEMO1, "{1441536F-B4E1-4610-8A6B-8807D803905E}")
};

extern class CSection4Demo1Module _AtlModule;
