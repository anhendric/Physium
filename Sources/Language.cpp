#include "Classpad.h"
#include "Language.h"

const char *MessageData_En[]=
{
    "View",
    "File",
    "Save as var",
    "Mini-Table",
}    ;

const char *MessageData_Fr[]=
{
    "Afficher",
    "Fichier",
    "Sauver dans variable",
    "Tableau Miniature",
};


extern "C" char *ExtensionGetLang(ID_MESSAGE MessageNo)
{
    char * pStr;
	if (MessageNo<LANG_MESSAGE_START || MessageNo>=LANG_MESSAGE_END)
		return "";
	MessageNo -= LANG_MESSAGE_START;
	if (GetCurrentLanguageInfo()==CurrentLanguage_Fra)
	{
	    pStr = (char *)MessageData_Fr[MessageNo];
	}
    else
    {
        pStr = (char *)MessageData_En[MessageNo];
    }        
	/*switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Deu :
			
			break;
		case CurrentLanguage_Esp :
			pStr = (char *)MessageData_Esp[MessageNo];
			break;
		case CurrentLanguage_Fra :
			pStr = (char *)MessageData_Fr[MessageNo];
			break;
		case CurrentLanguage_Por :
			pStr = (char *)MessageData_Port[MessageNo];
			break;
		case CurrentLanguage_Eng :
		default :
			
			break;
	}*/
	/*if(lang==CurrentLanguage_Fra)
     {
     CPString test="TEST"}
     else
     {
     CPString test="TEST"}*/
	return pStr;
}
