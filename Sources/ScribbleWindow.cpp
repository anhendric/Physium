#include "Scribble.h"
#include "ScribbleWindow.h"
#include "CounterWindow.h"

//-----------------------------------------------------------------
extern PegBitmap gbV1Bitmap,gbV2Bitmap,gbV3Bitmap,gbM1Bitmap,gbM2Bitmap, gbSrBitmap, gballBitmap;
int trai=1;
int autre=0;
const int page1[42]={1,0,0,0,0,0,3,4,0,0,0,0,11,12,0,0,0,0,19,20,21,22,23,24,37,38,39,40,41,42,55,56,57,72,73,74,87,88,89,104,105,106};
const int page2[42]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,26,27,28,29,30,43,44,45,46,47,48,75,76,77,78,79,80,107,108,109,110,111,112};
const int page3[42]={0,0,0,0,0,2,5,6,7,8,9,10,13,14,15,16,17,18,31,32,33,34,35,36,49,50,51,52,53,54,81,82,83,84,85,86,113,114,115,116,117,118};
const int page4[42]={57,58,59,60,61,62,63,64,65,66,67,68,69,0,70,70,0,71,0,0,0,0,0,0,89,90,91,92,93,94,95,96,97,98,99,100,101,0,102,102,0,103};
const int page0[180]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,0,0,0,0,0,0,0,0,0,0,5,6,7,8,9,10,11,12,0,0,0,0,0,0,0,0,0,0,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,59,60,61,62,63,64,65,66,67,68,69,70,71,0,0,0,0,90,91,92,93,94,95,96,97,98,99,100,101,102,103};
const CPString dataen[119]={"", "Hydrogen","Helium","Lithium","Beryllium","Bore","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
const CPString datafr[119]={"", "Hydrogene","Helium","Lithium","Beryllium","Bore","Carbone","Azote","Oxygene","Fluor","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphore","Soufre","Chlore","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chrome","Manganese","Fer","Cobalt","Nickel","Cuivre","Zinc","Gallium","Germanium","Arsenic","Selenium","Brome","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Argent","Cadmium","Indium","ETain","Antimoine","Tellurium","Iode","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungstene","Rhenium","Osmium","Iridium","Platine","Or","Mercure","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    
// This is the drop down "File" menu
PegMenuDescriptionML ScribbleShowMenu[] = {
	{ "IIIa-0a",	CMN_NO_ID,  btnmai,		AF_ENABLED,		NULL },
    { "5b-8b",		CMN_NO_ID, 	btnphai,	AF_ENABLED,		NULL },
	{ "Ia-4b",		CMN_NO_ID, 	btntrai,	AF_ENABLED,		NULL },
	{ NULL,			CMN_NO_ID,	0,			0,				NULL }
};

PegMenuDescriptionML ScribbleFileMenu[] = {
	{ "Page",		CMN_NO_ID, 	0,		AF_ENABLED,		ScribbleShowMenu },
	{ NULL,			LANG_MINI, 	btnall,	AF_ENABLED,		NULL },
    { NULL,			CMN_NO_ID,	0,		0,				NULL }
};

// This is the main menu which contains the other scribble menus as submenus
PegMenuDescriptionML ScribbleMainMenu[] = {
	{ NULL,		LANG_AFFICHE, 	0,		AF_ENABLED,		ScribbleFileMenu },
	{ NULL,		CMN_NO_ID, 		0,		0,				NULL }
};

ScribbleWindow::ScribbleWindow(PegRect rect, ScribbleDocument* doc, CPMainFrame * frame)
	:CPModuleWindow(rect,0,doc,frame)
{
  	CPMainFrame * mf = GetMainFrame();
    rect.wBottom -= 1;
	rect.wTop += 1;
	m_win = new DrawWindow(rect, doc);
	Add(m_win);
	SetScrollMode(WSM_AUTOVSCROLL);
}

//-----------------------------------------------------------------
int ScribbleWindow::page()
{
    return trai;
}    

int ScribbleWindow::type()
{
    return autre;
}

void ScribbleWindow::Draw()
{
	BeginDraw();
	DrawFrame();
	DrawChildren();
	EndDraw();
}

//-----------------------------------------------------------------
struct CPMultiButtonDescription chose[] =
{
{&gbV1Bitmap, btntrai},
{&gbV2Bitmap, btnphai},
{&gbV3Bitmap, btnmai},
{NULL, NULL},
};

struct CPMultiButtonDescription chosen[] =
{
{&gbM1Bitmap, nmetal},
{&gbM2Bitmap, metal},
{NULL, NULL},
};

void ScribbleWindow::AddUI()
{
	PegRect r = GetToolbarButtonRect();
	CPDropDownButton *button = new CPDropDownButton(r, chose);
    m_ui->AddToolbarButton(button);
    PegBitmapButton *b = new PegBitmapButton(2, 2, &gballBitmap,btnall);
    m_ui->AddToolbarButton(b);
    CPMultiButton *button2 = new CPMultiButton(r, chosen);
    m_ui->AddToolbarButton(button2);
    b = new PegBitmapButton(2, 2, &gbSrBitmap,btnsrc);
    m_ui->AddToolbarButton(b);
}

//-----------------------------------------------------------------
PegMenuDescriptionML* ScribbleWindow::GetMenuDescriptionML()
{
	return ScribbleMainMenu;
}

//-----------------------------------------------------------------
void ScribbleWindow::OnCount()		
{
	CPMainFrame * mf = GetMainFrame();
	ScribbleDocument * sdoc = (ScribbleDocument *) GetDocument();
	PegRect ChildRect = mf->BottomAppRectangle();
	CounterWindow* cwin = new CounterWindow(ChildRect,this,sdoc,mf);
	mf->SetBottomWindow(cwin);
}

void ScribbleWindow::disp(int i)
{
	CPMainFrame *mf = GetMainFrame();
    ScribbleDocument * sdoc = (ScribbleDocument *) GetDocument();
	PegRect ChildRect = mf->BottomAppRectangle();
	int num;
	if (!trai && i<180) num=page0[i];
    else if (trai==1) num=page1[i];
    else if (trai==2) num=page2[i];
    else if (trai==3) num=page3[i];
    else if (trai==4) num=page4[i];
    if ((num==57 | num==89) && trai==1)
    {
    trai=4;
    Draw();
    Redraw();
    }    
    else if (num)
    {
    CounterWindow* cwin = new CounterWindow(ChildRect,this,sdoc,mf);
	OnCount();
    cwin->disp(num);
    sdoc->OnChangedData(this);
    }	
}   

void ScribbleWindow::Search()
{
    //CPString dataen[119]={"", "Hydrogen","Helium","Lithium","Beryllium","Bore","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    //CPString datafr[119]={"", "Hydrogene","Helium","Lithium","Beryllium","Bore","Carbone","Azote","Oxygene","Fluor","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphore","Soufre","Chlore","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chrome","Manganese","Fer","Cobalt","Nickel","Cuivre","Zinc","Gallium","Germanium","Arsenic","Selenium","Brome","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Argent","Cadmium","Indium","ETain","Antimoine","Tellurium","Iode","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungstene","Rhenium","Osmium","Iridium","Platine","Or","Mercure","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    CPString data1[2][118]={{" H"," He"," Li"," Be"," B"," C"," N"," O"," F"," Ne"," Na"," Mg"," Al"," Si"," P"," S"," Cl"," Ar"," K"," Ca"," Sc"," Ti"," V"," Cr"," Mn"," Fe"," Co"," Ni"," Cu"," Zn"," Ga"," Ge"," As"," Se"," Br"," Kr"," Rb"," Sr"," Y"," Zr"," Nb"," Mo"," Tc"," Ru"," Rh"," Pd"," Ag"," Cd"," In"," Sn"," Sb"," Te"," I"," Xe"," Cs"," Ba"," La"," Ce"," Pr"," Nd"," Pm"," Sm"," Eu"," Gd"," Tb"," Dy"," Ho"," Er"," Tm"," Yb"," Lu"," Hf"," Ta"," W"," Re"," Os"," Ir"," Pt"," Au"," Hg"," Tl"," Pb"," Bi"," Po"," At"," Rn"," Fr"," Ra"," Ac"," Th"," Pa"," U"," Np"," Pu"," Am"," Cm"," Bk"," Cf"," Es"," Fm"," Md"," No"," Lr"," Rf"," Db"," Sg"," Bh"," Hs"," Mt"," Ds"," Rg"," Uub"," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},{" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9"," 10"," 11"," 12"," 13"," 14"," 15"," 16"," 17"," 18"," 19"," 20"," 21"," 22"," 23"," 24"," 25"," 26"," 27"," 28"," 29"," 30"," 31"," 32"," 33"," 34"," 35"," 36"," 37"," 38"," 39"," 40"," 41"," 42"," 43"," 44"," 45"," 46"," 47"," 48"," 49"," 50"," 51"," 52"," 53"," 54"," 55"," 56"," 57"," 58"," 59"," 60"," 61"," 62"," 63"," 64"," 65"," 66"," 67"," 68"," 69"," 70"," 71"," 72"," 73"," 74"," 75"," 76"," 77"," 78"," 79"," 80"," 81"," 82"," 83"," 84"," 85"," 86"," 87"," 88"," 89"," 90"," 91"," 92"," 93"," 94"," 95"," 96"," 97"," 98"," 99"," 100"," 101"," 102"," 103"," 104"," 105"," 106"," 107"," 108"," 109"," 110"," 111"," 112"," 113"," 114"," 115"," 116"," 117"," 118"}};
    PegRect r = {8,25,152,205};
    CPString title,title2,title3,title4,title5,title6,title7,title8;
    PegRect ListRect;
    ListRect.Set(20, 85, 100, 150);
    PegComboBox *pList = new PegComboBox(ListRect,ID_1);
    switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Fra :
			title="Recherche";
			title2="Type de recherche :";
			title3=" Recherche par nom";
			title4=" Recherche par symbole";
			title5=" Recherche par numero";
			title6="\xEE\x86 Nom";
			title7="\xEE\x86 Symbole";
			title8="\xEE\x86 Numero";
			for (int iLoop = 118; iLoop > 0; iLoop--)
            {
            pList->Add(new PegPrompt(0, 0, datafr[iLoop-1], iLoop,
            FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
            }
			break;
		case CurrentLanguage_Eng :
		default :
			title="Search for an element";
			title2="Information to use :";
			title3=" Search by name";
			title4=" Search by symbol";
			title5=" Search by number";
			title6="\xEE\x86 Name";
			title7="\xEE\x86 Symbol";
			title8="\xEE\x86 Number";
			for (int iLoop = 118; iLoop > 0; iLoop--)
            {
            pList->Add(new PegPrompt(0, 0, dataen[iLoop-1], iLoop,
            FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
            }
            break;
	}
    PegMessageWindow* cpd = new PegMessageWindow(r,title, NULL, MW_OK|MW_CANCEL|FF_RAISED, 0 , 0, 0);
    PegPrompt *pp = new PegPrompt(20, 41, title2);
    cpd->Add(pp);
    PegRadioButton *b1 = new PegRadioButton(10, 56, title3);
    cpd->Add(b1);
    pp = new PegPrompt(10, 71, title6);
    cpd->Add(pp);
    b1 = new PegRadioButton(10, 101, title4);
    cpd->Add(b1);
    pp = new PegPrompt(10, 116, title7);
    cpd->Add(pp);
    b1 = new PegRadioButton(10, 145, title5);
    cpd->Add(b1);
    pp = new PegPrompt(10, 162, title8);
    cpd->Add(pp);
    for(int i=1;i<4;i++)
    {
        pp = new PegPrompt(70, 45*i+26, ":");
        cpd->Add(pp);
    }
    PegString* xmin=new PegString(76, 70, 75,"",0,FF_NONE|AF_ENABLED|EF_EDIT);
    PegString* xmax=new PegString(76, 115, 25,"",0,FF_NONE|AF_ENABLED|EF_EDIT);
    PegString* xscale=new PegString(76, 161, 25,"0",0,FF_NONE|AF_ENABLED|EF_EDIT);
    cpd->Add(xmin);
    cpd->Add(xmax);
    cpd->Add(xscale);
    ListRect.Set(20, 130, 100, 195);
    PegComboBox *pList2 = new PegComboBox(ListRect,ID_2);
    for (int iLoop = 118; iLoop > 0; iLoop--)
    {
        pList2->Add(new PegPrompt(0, 0, data1[0][iLoop-1], iLoop+1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    }
    pList2->Add(new PegPrompt(0, 0, "", 1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    pList->SetScrollMode(WSM_VSCROLL);
    cpd->Add(pList);
    pList2->SetScrollMode(WSM_VSCROLL);
    cpd->Add(pList2);
    PegRect ChildRect;
    ChildRect.Set(101, 157, 111, 177);
    PegSpinButton *pSpin = new PegSpinButton(ChildRect,
    xscale, 0, 118, 1, SB_VERTICAL);
    cpd->Add(pSpin);
    if (cpd->Execute()==IDB_OK)
    {
    CPString nom=xmin->DataGet(),sym=xmax->DataGet(),num=xscale->DataGet();
    int i=1;
    CPMainFrame *mf = GetMainFrame();
    ScribbleDocument * sdoc = (ScribbleDocument *) GetDocument();
	ChildRect = mf->BottomAppRectangle();
    CounterWindow* cwin = new CounterWindow(ChildRect,this,sdoc,mf);
	OnCount();
    if (SIGNAL(ID_1, PSF_LIST_SELECT) && nom=="" && pList->GetSelectedIndex()!=0)
    {
        int elem = (int)pList->GetSelectedIndex();
        cwin->disp(elem);
    }
    else if (nom!="")
    {
            switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Fra :
			while (nom!=datafr[i] && i<119) i++;
			break;
		case CurrentLanguage_Eng :
		default :
			while (nom!=dataen[i] && i<119) i++;
            break;
	}
        if (i<119) cwin->disp(i);
    }    
    else if (SIGNAL(ID_2, PSF_LIST_SELECT) && sym=="" && pList2->GetSelectedIndex()!=0)
    {
        int elem = (int)pList2->GetSelectedIndex();
        cwin->disp(elem);
    }    
    
    else if (sym!="")
    {
        sym=" "+sym;
        while (sym!=data1[0][i-1] && i<119) i++;
        if (i<119) cwin->disp(i);
    }
    else if (num!="" && num!="0")
    {
        num=" "+num;
        while (num!=data1[1][i-1] && i<119) i++;
        if (i<119) cwin->disp(i);
    }
    sdoc->OnChangedData(this);
    }    
} 
 

void ScribbleWindow::Status(int i)
{
     //CPString dataen[119]={"", "Hydrogen","Helium","Lithium","Beryllium","Bore","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
     //CPString datafr[119]={"", "Hydrogene","Helium","Lithium","Beryllium","Bore","Carbone","Azote","Oxygene","Fluor","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphore","Soufre","Chlore","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chrome","Manganese","Fer","Cobalt","Nickel","Cuivre","Zinc","Gallium","Germanium","Arsenic","Selenium","Brome","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Argent","Cadmium","Indium","ETain","Antimoine","Tellurium","Iode","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungstene","Rhenium","Osmium","Iridium","Platine","Or","Mercure","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
     CPString s;
     switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Fra :
			if (trai==0) s=datafr[page0[i]];
            else if (trai==1) s=datafr[page1[i]];
            else if (trai==2) s=datafr[page2[i]];
            else if (trai==3) s=datafr[page3[i]];   
            else if (trai==4) s=datafr[page4[i]];
			break;
		case CurrentLanguage_Eng :
		default :
			if (trai==0) s=dataen[page0[i]];
            else if (trai==1) s=dataen[page1[i]];
            else if (trai==2) s=dataen[page2[i]];
            else if (trai==3) s=dataen[page3[i]];   
            else if (trai==4) s=dataen[page4[i]];
            break;
	}
     GetStatusBar()->SetTextField(1, s);
}    

//-----------------------------------------------------------------
void ScribbleWindow::Undo()
{

}

//-----------------------------------------------------------------
// Respond to messages sent by buttons or menus
SIGNED ScribbleWindow::Message(const PegMessage &Mesg)
{
	switch(Mesg.wType)
    {
		//case SIGNAL(btnall,PSF_CLICKED):trai=0;Draw();Redraw();break;
        case SIGNAL(btntrai,PSF_CLICKED):trai=1;Draw();Redraw();break;
        case SIGNAL(btnphai,PSF_CLICKED):trai=2;Draw();Redraw();break;
        case SIGNAL(btnmai,PSF_CLICKED):trai=3;Draw();Redraw();break;
        case SIGNAL(btnall,PSF_CLICKED):trai=0;OnCount();Draw();Redraw();break;
        case SIGNAL(metal,PSF_CLICKED):autre=1;Draw();Redraw();break;
        case SIGNAL(nmetal,PSF_CLICKED):autre=0;Draw();Redraw();break;
		case SIGNAL( btnsrc, PSF_CLICKED):
		     Search();
		     break;
		default:								
	        return CPModuleWindow::Message(Mesg);
    }
    return 0;
}
//-----------------------------------------------------------------

