#ifndef _LANGUAGE_HEADER_INCLUDED_
#define _LANGUAGE_HEADER_INCLUDED_

#define LANG_MESSAGE_START	LOCAL_LANG_START+1

enum Messages
{
    LANG_AFFICHE=LANG_MESSAGE_START,
    LANG_FICHIER,
    LANG_SAVE,
    LANG_MINI,
    ////////////////
    LANG_MESSAGE_END
};

extern "C" char *ExtensionGetLang(ID_MESSAGE MessageNo);

#endif
