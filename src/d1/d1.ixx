module;
#define EXPORT_DLL __declspec(dllexport)

export module d1;

export namespace d1 {

	EXPORT_DLL int MyFunc();

}
