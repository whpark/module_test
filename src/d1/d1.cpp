#define EXPORT_DLL __declspec(dllexport)

module d1;

namespace d1 {

	EXPORT_DLL int MyFunc() {
		return 113;
	}

}
