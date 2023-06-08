#include "MyForm1.h"
#include "MyForm.h"
#include <Windows.h>

using namespace diplom4;

int WINAPI WinExec(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm1);
    return 0;
}
