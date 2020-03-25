#include <Windows.h>
#include "res.h"
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<winternl.h>
#include<string>

// Zadanie 3. Kajko i kokosz

using namespace std;


INT_PTR CALLBACK WindowProcKaiko(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
	{
		HICON hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_DRUGA));
		SendMessage(hwndDlg, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
		

		HMENU hMenu = LoadMenu(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_MENUKAJKO));
		SetMenu(hwndDlg, hMenu);
		
		return FALSE;

	}
	case WM_CLOSE:
		DestroyWindow(hwndDlg); // Zniszczenie okienka
		PostQuitMessage(0); // Umieszczenia w petli komunikatow polecenia zakonczenia aplikacji
		return TRUE;
		return FALSE;

	}
	return 0;//return DefWindowProcW(hwndDlg, uMsg, wParam, lParam);
}

INT_PTR CALLBACK WindowProcKokosz(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
	{
		HICON hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_TRZECIA));
		SendMessage(hwndDlg, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);

		HMENU hMenu = LoadMenu(GetModuleHandle(NULL), MAKEINTRESOURCE(IDR_MENUKOKOSZ));
		SetMenu(hwndDlg, hMenu);

		return FALSE;
	}
	case WM_CLOSE:
		DestroyWindow(hwndDlg); // Zniszczenie okienka
		PostQuitMessage(0); // Umieszczenia w petli komunikatow polecenia zakonczenia aplikacji
		return TRUE;
		return FALSE;

	}
	return 0;//return DefWindowProcW(hwndDlg, uMsg, wParam, lParam);
}

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR szCmdLine, _In_ int iCmdShow) // iCmdShow ~wskazowki do odpalenia
{
	
	HWND hwndMainKaiko = CreateDialogW(hInstance, MAKEINTRESOURCE(IDD_MAINVIEWKA), NULL, WindowProcKaiko);
	ShowWindow(hwndMainKaiko, iCmdShow);

	HWND hwndMainKokosz = CreateDialogW(hInstance, MAKEINTRESOURCE(IDD_MAINKO), NULL, WindowProcKokosz);
	ShowWindow(hwndMainKokosz, iCmdShow);

	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}
