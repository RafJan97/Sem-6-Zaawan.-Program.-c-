#include <Windows.h>
#include "res.h"
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<winternl.h>
#include<string>

// Zadanie 2. Gra zgadnij jaka liczbe wylosowal komputer.

using namespace std;
int number;
int editorNumber;
int counter=0;

INT_PTR CALLBACK WindowProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
			switch (HIWORD(wParam)) // ogolnie 
			{
			case BN_CLICKED: // Zdarzenie klikniecia na UI
				switch (LOWORD(wParam)) //identyfikator przycisku czyli kogo dotyczy
				{
				case IDC_BUTTON1: //Klikniecie na naszym przycisku
					counter++;
					HWND hwndStaticIterator = GetDlgItem(hwndDlg, IDC_STATIC3);
					HWND hwndStatic2 = GetDlgItem(hwndDlg, IDC_STATIC2);
					HWND hwndEditBox = GetDlgItem(hwndDlg, IDC_EDIT1); // Pobranie uchwytu kontrolki IDC_EDIT1

					wstring text = L"Liczba prob: " + to_wstring(counter);


					SetWindowText(hwndStaticIterator, text.c_str());
						int iTextLength = GetWindowTextLength(hwndEditBox); // Pobranie d³ugosci tekstu
					WCHAR szText[500];
					GetWindowText(hwndEditBox, szText, iTextLength + 1); // pobranie tekstu (z jakiego okna, do jakiegop bufora , dlugosc pobieranego tekstu)
					editorNumber = (int)wcstol(szText,NULL,10);
					if (editorNumber > number)
					{
						SetWindowText(hwndStatic2, L"Podales za duza liczbe.");
					}
					else if (editorNumber == number)
					{
						SetWindowText(hwndStatic2, L"Brawo! Zgad³es, to preawidlowa liczba.");
						//MessageBox(hwndDlg, L"ww", L"Komunikat", MB_OK);
					}
					else if (editorNumber < number)
					{
						SetWindowText(hwndStatic2, L"Podales za mala liczbe");
					}
																		 //SetWindowText((HWND)lParam, szText); // Przypisanie go do przycisku
					return TRUE; //(int)wcstol
				}
			}
			return FALSE;
	//case WM_LBUTTONDOWN:
	//		WCHAR szText[200];
	//		wsprintf(szText, L"Kliknales myszka x=%d, y=%d", LOWORD(lParam), HIWORD(lParam));
	//		MessageBox(hwndDlg, szText, TEXT("Klikniecie"), MB_OK);
	//		return TRUE;
	case WM_CLOSE:
		DestroyWindow(hwndDlg); // Zniszczenie okienka
		PostQuitMessage(0); // Umieszczenia w petli komunikatow polecenia zakonczenia aplikacji
		return TRUE;
		return FALSE;

	}
	return DefWindowProcW(hwndDlg, uMsg, wParam, lParam);
}

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR szCmdLine, _In_ int iCmdShow) // iCmdShow ~wskazowki do odpalenia
{
	srand((unsigned int)time(NULL));
	number = rand() % 40 + 1;

	HWND hwndMainWindow = CreateDialogW(hInstance, MAKEINTRESOURCE(IDD_MAINVIEW), NULL, WindowProc);
	ShowWindow(hwndMainWindow, iCmdShow);
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

  return 0;
}
