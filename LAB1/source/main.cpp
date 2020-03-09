#include <Windows.h>
#include <cstdio>
// otworzyles swe usta i wyrzekles me imie �oooo panie
#define IDLESS  IDNO
#define IDMORE  IDYES
#define IDHIT   IDCANCEL

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR szCmdLine, _In_ int iCmdShow)
{
  const wchar_t* csInfo = L"(Tak - wi�cej, Nie - mniej, Anuluj - trafione)\0";
  wchar_t sText[256] = {};

  int iMin = 0; //dolna granica mo�liwego zakresu w kt�rym le�y liczba
  int iMax = 40; //g�rna granica
  int iOffset = 0; //przesuni�cie kt�rej� z granic po odpowiedzi u�ytkownika
  int iGuess = (iMax - iMin) / 2; //liczba "strza�"

  wsprintf(sText, L"Pomy�l liczb� od 0 do 40.\nPo podaniu propozycji, okre�l czy twoja wybrana liczba jest\nwi�ksza lub mniejsza.\n%s", csInfo);
    
  int iRet = MessageBoxW(0, sText, L"Gierka", MB_OKCANCEL);
  
  if (iRet == IDCANCEL)
    return 0;

  do
  {
    wsprintf(sText, L"Twoja liczba to %d?\n%s", iGuess, csInfo);
    iRet = MessageBoxW(0, sText, L"Strza�", MB_YESNOCANCEL);

    if (iRet == IDLESS)
      iMax = iGuess - 1;
    else if (iRet == IDMORE)
      iMin = iGuess + 1;

    if (iMin == iMax)
    {
      iGuess = iMax;
      break;
    }
    
    iGuess = ((iMax - iMin) / 2 + iMin);
  } while (iRet != IDHIT);

  wsprintf(sText, L"Twoja liczba to %d", iGuess);
  MessageBoxW(0, sText, L"Zgadni�te", MB_OK);

  return 0;
}
/*
zadanie - gra w "jak� liczb� mam na my�li"
zakres 1-40, komputer zgaduje, u�ytkownik wybiera
drzewko binarne zgadywanka
*/