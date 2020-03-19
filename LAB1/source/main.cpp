// zadanie domowe 1 . Uzytkownik losuje liczbe, komputer zgaduje na podstawie odpowiedzi.

#include <Windows.h>
#include <cstdio>
#define IDLESS  IDNO
#define IDMORE  IDYES
#define IDHIT   IDCANCEL

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR szCmdLine, _In_ int iCmdShow)
{
	{
		int iRetKey = MessageBox(0, TEXT("Wybierz liczbe z zakresu 1-40"), TEXT("Aplikacja"), MB_OK);

		int iRetKey1 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 20?"), TEXT("Aplikacja"), MB_YESNO);
		if (iRetKey1 == IDYES)
		{
			int iRetKey2 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 30?"), TEXT("Aplikacja"), MB_YESNO);
			if (iRetKey2 == IDYES)
			{
				int iRetKey3 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 35?"), TEXT("Aplikacja"), MB_YESNO);
				if (iRetKey3 == IDYES)
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 38?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 39?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 40"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 39"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 37?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 38"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 36?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 37"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 36"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
				else
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 33?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 34?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 35"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 34"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 32?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 33"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 31?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 32"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 31"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
			}
			// ************************ kolumna 25
			else
			{
				int iRetKey3 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 25?"), TEXT("Aplikacja"), MB_YESNO);
				if (iRetKey3 == IDYES)
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 28?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 29?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 30"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 29"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 27?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 28"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 26?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 27"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 26"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
				else
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 23?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 24?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 25"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 24"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 22?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 23"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 21?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 22"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 21"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
			}
		}
		// *******************************kolumna 10
		else
		{
			int iRetKey2 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 10?"), TEXT("Aplikacja"), MB_YESNO);
			if (iRetKey2 == IDYES)
			{
				int iRetKey3 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 15?"), TEXT("Aplikacja"), MB_YESNO);
				if (iRetKey3 == IDYES)
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 18?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 19?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 20"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 19"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 17?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 18"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 16?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 17"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 16"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
				else
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 13?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 14?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 15"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 14"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 12?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 13"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 11?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 12"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 11"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
			}
			// ************************ kolumna 5
			else
			{
				int iRetKey3 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 5?"), TEXT("Aplikacja"), MB_YESNO);
				if (iRetKey3 == IDYES)
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 8?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 9?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 10"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 9"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 7?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 8"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 6?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 7"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 6"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
				else
				{
					int iRetKey4 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 3?"), TEXT("Aplikacja"), MB_YESNO);
					if (iRetKey4 == IDYES)
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 4?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 5"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							MessageBox(0, TEXT("Twoja liczba to 4"), TEXT("Aplikacja"), MB_OK);
						}
					}
					else
					{
						int iRetKey5 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 2?"), TEXT("Aplikacja"), MB_YESNO);
						if (iRetKey5 == IDYES)
						{
							MessageBox(0, TEXT("Twoja liczba to 3"), TEXT("Aplikacja"), MB_OK);
						}
						else
						{
							int iRetKey6 = MessageBox(0, TEXT("Czy ta liczba jest wieksza od 1?"), TEXT("Aplikacja"), MB_YESNO);
							if (iRetKey6 == IDYES)
							{
								MessageBox(0, TEXT("Twoja liczba to 2"), TEXT("Aplikacja"), MB_OK);
							}
							else
							{
								MessageBox(0, TEXT("Twoja liczba to 1"), TEXT("Aplikacja"), MB_OK);
							}
						}
					}
				}
			}
		}

		return 0;
	}
}