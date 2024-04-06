#include <iostream>
#include <Windows.h>

extern "C" void test123();

DWORD WINAPI ThreadProc(PVOID) {
	while (true) {

        __try
        {
            test123();
        }
        __except (1)
        {
            printf("1111\n");
            continue;
        }
        ExitProcess(-1);
	}
	return 0;
}

int main()
{
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    while (true)
    {
        OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId());
        Sleep(10);
    }
    return 0;
}

