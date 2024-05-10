#include <iostream>
#include <Windows.h>
#include <Shellapi.h>

int main() {
    SHELLEXECUTEINFO shellInfo;
    ZeroMemory(&shellInfo, sizeof(SHELLEXECUTEINFO));
    shellInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    shellInfo.lpVerb = L"runas"; // Indica que se debe ejecutar con privilegios elevados
    shellInfo.lpFile = L"cmd.exe"; // Nombre del ejecutable a abrir
    shellInfo.nShow = SW_SHOW; // Muestra la ventana del programa

    if (!ShellExecuteEx(&shellInfo)) {
        DWORD error = GetLastError();
        std::cerr << "Error al ejecutar cmd como administrador: " << error << "\n";
        return 1;
    }

    return 0;
}
