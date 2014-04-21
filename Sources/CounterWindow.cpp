
#include "Scribble.h"
#include "CounterWindow.h"
#include "ScribbleWindow.h"

///////////////////////////////////////////////////////////////////
//
// CounterWindow - Secondary Module Window
//
// CounterWindow Functions 
///////////////////////////////////////////////////////////////////
extern PegBitmap gbSaveBitmap, gbListBitmap, gbmainBitmap;
CPString info="";
int elm=1;
int ac[27]={89,13,95,51,47,18,33,85,7,56,97,4,83,107,5,35,48,98,20,6,58,55,17,24,27,29,96};
int dl[27]={110,105,66,99,50,68,63,26,100,9,87,64,31,32,72,108,2,1,67,49,53,77,36,57,103,3,71};
int mr[33]={12,25,109,101,80,42,60,10,93,28,41,102,79,76,8,46,15,78,82,94,84,19,59,61,91,88,86,75,45,111,37,44,104};
int sz[31]={62,21,106,34,14,11,16,38,73,43,52,65,81,90,69,22,74,112,116,118,115,114,117,113,92,23,54,70,39,30,40};
int group[118]={0,1,2,3,4,0,0,0,5,1,2,3,6,4,0,0,5,1,2,3,7,7,7,7,7,7,7,7,7,7,6,4,4,0,5,1,2,3,7,7,7,7,7,7,7,7,7,7,6,6,4,4,5,1,2,3,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,7,6,6,6,4,5,1,2,3,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,7,7,7,7,7,7,7,7,7,6,6,6,4,5,1};
//CPString title,title2;


PegMenuDescriptionML CounterFileMenu[] = {
	//{ NULL,			PEDIT_MENU_OPENFILE, 	IDB_SCRIBBLE_LOAD,		AF_ENABLED,		NULL },
	{ NULL,			LANG_SAVE, 	btnsave,		AF_ENABLED,		NULL },
	{ NULL,			CMN_NO_ID,				0,						0,				NULL }
};

PegMenuDescriptionML CounterMainMenu[] = {
	{ NULL,			LANG_FICHIER, 			0,					AF_ENABLED,		CounterFileMenu },
	{ NULL,			CMN_NO_ID, 				0,					0,				NULL }
};


// Constructor
CounterWindow::CounterWindow(PegRect rect, CPModuleWindow* invoking_window,
	ScribbleDocument * doc, CPMainFrame* frame)
	:CPModuleWindow(rect,invoking_window,doc,frame)
{
}

PegMenuDescriptionML* CounterWindow::GetMenuDescriptionML()
{
	return CounterMainMenu;
}
//-----------------------------------------------------------------
void CounterWindow::AddUI()
{
	PegRect r = GetToolbarButtonRect();
    PegBitmapButton *b = new PegBitmapButton(2, 2, &gbSaveBitmap,btnsave);
    m_ui->AddToolbarButton(b);
    b = new PegBitmapButton(2, 2, &gbListBitmap,btnlist);
    m_ui->AddToolbarButton(b);
    b = new PegBitmapButton(2, 2, &gbmainBitmap,btnmain);
    m_ui->AddToolbarButton(b);
}

void CounterWindow::SaveVar()
{
    CPString den[7]={"Atomic weight Ar","Density","Meilting point","Boiling point","Atomic radius","Atomic volum","Covalent radius"};
    CPString dfr[7]={"Masse molaire Ar","Densite","T\xEE\x06 de solidification","T\xEE\06 d'ebullition","Rayon atomique","Volume atomique","Rayon covalent"};
    CPString data1[7][118]={{" 1.00794"," 4.002602"," 6.941"," 9.01218"," 10.811"," 12.011"," 14.00674"," 15.9994"," 18.998403"," 20.1797"," 22.989768"," 24.305"," 26.981539"," 28.0855"," 30.973762"," 32.066"," 35.4527"," 39.948"," 39.0983"," 40.078"," 44.95591"," 47.88"," 50.9415"," 51.9961"," 54.93805"," 55.847"," 58.9332"," 58.6934"," 63.546"," 65.39"," 69.723"," 72.61"," 74.92159"," 78.96"," 79.904"," 83.8"," 85.4678"," 87.62"," 88.90585"," 91.224"," 92.90638"," 95.94"," 97.9072"," 101.07"," 102.9055"," 106.42"," 107.8682"," 112.411"," 114.818"," 118.71"," 121.760"," 127.6"," 126.90447"," 131.29"," 132.90543"," 137.327"," 138.9055"," 140.115"," 140.90765"," 144.24"," 144.9127"," 150.36"," 151.965"," 157.25"," 158.92534"," 162.50"," 164.93032"," 167.26"," 168.93421"," 173.04"," 174.967"," 178.49"," 180.9479"," 183.84"," 186.207"," 190.23"," 192.22"," 195.08"," 196.96654"," 200.59"," 204.3833"," 207.2"," 208.98037"," 208.9824"," 209.9871"," 222.0176"," 223.0197"," 226.0254"," 227.0278"," 232.0381"," 231.03588"," 238.0289"," 237.048"," 244.0642"," 243.0614"," 247.0703"," 247.0703"," 251.0796"," 252.083"," 257.0951"," 258.1"," 259.1009"," 262.11"," [261]"," [262]"," [266]"," [264]"," [269]"," [268]"," [269]"," [272]"," [277]"," n/a"," [289]"," n/a"," n/a"," n/a"," n/a"},{" 0.0708"," 0.147"," 0.534"," 1.848"," 2.34"," 2.25"," 0.808"," 1.149"," 1.108"," 1.204"," 0.971"," 1.738"," 2.6989"," 2.33"," 1.82"," 2.070"," 1.56"," 1.40"," 0.856"," 1.55"," 2.99"," 4.54"," 6.11"," 7.18"," 7.21"," 7.874"," 8.9"," 8.902"," 8.96"," 7.133"," 5.91"," 5.323"," 5.73"," 4.79"," 3.12"," 2.155"," 1.532"," 2.54"," 4.47"," 6.506"," 8.57"," 10.22"," 11.5"," 12.41"," 12.41"," 12.02"," 10.5"," 8.65"," 7.31"," 7.31"," 6.691"," 6.24"," 4.93"," 3.52"," 1.873"," 3.5"," 6.15"," 6.757"," 6.773"," 7.007"," 7.2"," 7.520"," 5.243"," 7.900"," 8.229"," 8.55"," 8.795"," 9.06"," 9.321"," 6.9654"," 9.8404"," 13.31"," 16.654"," 19.3"," 21.02"," 22.57"," 22.42"," 21.45"," 19.3"," 13.546"," 11.85"," 11.35"," 9.747"," 9.32"," n/a"," 4.4"," n/a"," (5.5)"," n/a"," 11.78"," 15.37"," 19.05"," 20.25"," 19.84"," 13.67"," 13.51"," 13.25"," 15.1"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 14.01"," 0.95"," 553.69"," 1551"," 2573"," 3820"," 63.29"," 54.8"," 53.53"," 48"," 370.96"," 922"," 933.5"," 1683"," 317.3"," 386"," 172.2"," 83.8"," 336.8"," 1112"," 1814"," 1933"," 2160"," 2130"," 1517"," 1808"," 1768"," 1726"," 1356.6"," 692.73"," 302.93"," 1210.6"," 1090"," 490"," 265.9"," 116.6"," 312.2"," 1042"," 1795"," 2125"," 2741"," 2890"," 2445"," 2583"," 2239"," 1825"," 1235.1"," 594.1"," 429.32"," 505.1"," 903.9"," 722.7"," 386.7"," 161.3"," 301.6"," 1002"," 1194"," 1072"," 1204"," 1294"," 1441"," 1350"," 1095"," 1586"," 1629"," 1685"," 1747"," 1802"," 1818"," 1097"," 1936"," 2503"," 3269"," 3680"," 3453"," 3327"," 2683"," 2045"," 1337.58"," 234.28"," 576.6"," 600.65"," 544.5"," 527"," 575"," 202"," 300"," 973"," 1320"," 2028"," 2113"," 1405.5"," 913"," 914"," 1267"," 1340"," n/a"," 900"," n/a"," 1800"," 1100"," 1100"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 20.28"," 4.216"," 1118.15"," 3243"," 3931"," 5100"," 77.4"," 90.19"," 85.01"," 27.1"," 1156.1"," 1363"," 2740"," 2628"," 553"," 717.824"," 238.6"," 87.3"," 1047"," 1757"," 3104"," 3560"," 3650"," 2945"," 2235"," 3023"," 3143"," 3005"," 2840"," 1180"," 2676"," 3103"," 876"," 958.1"," 331.9"," 120.85"," 961"," 1657"," 3611"," 4650"," 5015"," 4885"," 5150"," 4173"," 4000"," 3413"," 2485"," 1038"," 2353"," 2543"," 1908"," 1263"," 457.5"," 166.1"," 951.6"," 1910"," 3730"," 3699"," 3785"," 3341"," 3000"," 2064"," 1870"," 3539"," 3296"," 2835"," 2968"," 3136"," 2220"," 1466"," 3668"," 5470"," 5698"," 5930"," 5900"," 5300"," 4403"," 4100"," 3080"," 629.73"," 1730"," 2013"," 1883"," 1235"," 610"," 211.4"," 950"," 1413"," 3470"," 5060"," 4300"," 4018"," 4175"," 3505"," 2880"," n/a"," n/a"," n/a"," 1130"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 79"," 0.0"," 155"," 112"," 98"," 91"," 92"," n/a"," n/a"," n/a"," 190"," 160"," 143"," 132"," 128"," 127"," n/a"," 2-"," 235"," 197"," 162"," 147"," 134"," 130"," 135"," 126"," 125"," 124"," 128"," 138"," 141"," 137"," 139"," 140"," n/a"," n/a"," 248"," 215"," 178"," 160"," 146"," 139"," 136"," 134"," 134"," 137"," 144"," 154"," 166"," 162"," 159"," 160"," n/a"," n/a"," 267"," 222"," 187"," 181"," 182"," 182"," n/a"," 181"," 199"," 179"," 180"," 180"," 179"," 178"," 177"," 194"," 175"," 167"," 149"," 141"," 137"," 135"," 136"," 139"," 146"," 157"," 171"," 175"," 170"," 176"," n/a"," n/a"," n/a"," n/a"," 188"," 180"," 161"," 138"," 130"," 151"," 173"," 299"," 297"," 295"," 292"," 290"," 287"," 285"," 282"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 14.1"," 31.8"," 13.1"," 5.0"," 4.6"," 5.3"," 17.3"," 14.0"," 17.1"," 16.8"," 23.7"," 14.0"," 10.0"," 12.1"," 17.0"," 15.5"," 18.7"," 24.2"," 45.3"," 29.9"," 15.0"," 10.6"," 8.35"," 7.23"," 7.39"," 7.1"," 6.7"," 6.6"," 7.1"," 9.2"," 11.8"," 13.6"," 13.1"," 16.5"," 23.5"," 32.2"," 55.9"," 33.7"," 19.8"," 14.1"," 10.8"," 9.4"," 8.5"," 8.3"," 8.3"," 8.9"," 10.3"," 13.1"," 15.7"," 16.3"," 18.4"," 20.5"," 25.7"," 42.9"," 70.0"," 39.0"," 22.5"," 21.0"," 20.8"," 20.6"," n/a"," 19.9"," 28.9"," 19.9"," 19.2"," 19.0"," 18.7"," 18.4"," 18.1"," 24.8"," 17.8"," 13.6"," 10.9"," 9.53"," 8.85"," 8.43"," 8.54"," 9.10"," 10.2"," 14.8"," 17.2"," 18.3"," 21.3"," 22.7"," n/a"," n/a"," n/a"," 45.0"," 22.54"," 19.8"," 15.0"," 12.5"," 21.1"," n/a"," 20.8"," 18.28"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"},{" 32"," n/a"," 163"," 90"," 82"," 77"," 75"," 73"," 72"," 71"," 154"," 136"," 118"," 111"," 106"," 102"," 99"," 98"," 203"," 174"," 144"," 132"," 122"," 118"," 117"," 117"," 116"," 115"," 117"," 125"," 126"," 122"," 120"," 116"," 114"," 112"," 216"," 191"," 162"," 145"," 134"," 130"," 127"," 125"," 125"," 128"," 134"," 148"," 144"," 141"," 140"," 136"," 133"," 131"," 235"," 198"," 169"," 165"," 165"," 184"," 163"," 162"," 185"," 161"," 159"," 159"," 158"," 157"," 156"," n/a"," 156"," 144"," 134"," 130"," 128"," 126"," 127"," 130"," 134"," 149"," 148"," 147"," 146"," 146"," (145)"," n/a"," n/a"," n/a"," n/a"," 165"," n/a"," 142"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"}};
    CPString title,title2;
    PegRect ListRect = {20, 40, 140, 115};
    PegComboBox *pList = new PegComboBox(ListRect,ID_1);
    pList->SetScrollMode(WSM_VSCROLL);
    switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Fra :
			title="Sauvegarde de donnees";
			title2="Donnee a sauvegarder :";
			for (int iLoop = 7; iLoop > 0; iLoop--)
            {
            pList->Add(new PegPrompt(0, 0, dfr[iLoop-1], iLoop,
            FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
            }
			break;
		case CurrentLanguage_Eng :
		default :
			title="Save element info";
			title2="Information to save :";
			for (int iLoop = 7; iLoop > 0; iLoop--)
            {
            pList->Add(new PegPrompt(0, 0, den[iLoop-1], iLoop,
            FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
            }
            break;
	}
    
    PegRect r = {8,10,152,115};
    PegMessageWindow* cpd = new PegMessageWindow(r,title, NULL, MW_OK|MW_CANCEL|FF_RAISED, 0 , 0, 0);
    PegPrompt *pp = new PegPrompt(20, 26, title2);
    cpd->Add(pp);

    cpd->Add(pList);
    if (cpd->Execute()==IDB_OK)
    {
        int elem = (int)pList->GetSelectedIndex();
        CPString folder, name;
   	    OBCD dat;
        ExecuteToOBCD(data1[elem][elm-1], dat);
        StorageManager *manager = new StorageManager(&name,&folder, STORAGE_ACTION_SAVE, IMU_MCS_TypeReal);
	    int ret = manager->Execute();
	    BMCSCreateVariable((CP_CHAR*)folder.Text(),(CP_CHAR*)name.Text(), IMU_MCS_TypeReal, sizeof(OBCD), (UCHAR*)&dat);
     }   
}    

void CounterWindow::Draw()
{
	BeginDraw();
	DrawFrame();	
	PegRect r = {1,1,154,92};
	CPEditBox* txtbox = new CPEditBox(r,0,FF_RECESSED|EF_EDIT|EF_WRAP,"", 20000);
    txtbox->SetScrollMode(WSM_AUTOVSCROLL);
    txtbox->DataSet(info);
    AddR(txtbox);
    EndDraw();
}

void CounterWindow::disp(int i)
{
    elm=i;
    CPString dfr[12]={"Symbole","Numero atomique \xEC\xBA","Masse molaire Ar","Etage d'ox. E\xEE\x06","Struct. elect.","Densite","T\xEE\x06 de solidification","T\xEE\06 d'ebullition","Rayon atomique","Volume atomique","Rayon covalent"};
    CPString den[12]={"Symbol","Atomic number \xEC\xBA","Atomic weight Ar","Oxyd. state E\xEE\x06","Elect. struc.","Density","Meilting point","Boiling point","Atomic radius","Atomic volum","Covalent radius"};
    CPString unit[14]={"","",""," g/mol","","",""," g/cm\xED\xF3"," K"," K"," pm"," cm\xED\xF3/mol"," pm"};
    CPString nameen[118]={"Hydrogen","Helium","Lithium","Beryllium","Bore","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    CPString namefr[118]={"Hydrogene","Helium","Lithium","Beryllium","Bore","Carbone","Azote","Oxygene","Fluor","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphore","Soufre","Chlore","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chrome","Manganese","Fer","Cobalt","Nickel","Cuivre","Zinc","Gallium","Germanium","Arsenic","Selenium","Brome","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Argent","Cadmium","Indium","ETain","Antimoine","Tellurium","Iode","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungstene","Rhenium","Osmium","Iridium","Platine","Or","Mercure","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    CPString dataen[12][118]={{" H"," He"," Li"," Be"," B"," C"," N"," O"," F"," Ne"," Na"," Mg"," Al"," Si"," P"," S"," Cl"," Ar"," K"," Ca"," Sc"," Ti"," V"," Cr"," Mn"," Fe"," Co"," Ni"," Cu"," Zn"," Ga"," Ge"," As"," Se"," Br"," Kr"," Rb"," Sr"," Y"," Zr"," Nb"," Mo"," Tc"," Ru"," Rh"," Pd"," Ag"," Cd"," In"," Sn"," Sb"," Te"," I"," Xe"," Cs"," Ba"," La"," Ce"," Pr"," Nd"," Pm"," Sm"," Eu"," Gd"," Tb"," Dy"," Ho"," Er"," Tm"," Yb"," Lu"," Hf"," Ta"," W"," Re"," Os"," Ir"," Pt"," Au"," Hg"," Tl"," Pb"," Bi"," Po"," At"," Rn"," Fr"," Ra"," Ac"," Th"," Pa"," U"," Np"," Pu"," Am"," Cm"," Bk"," Cf"," Es"," Fm"," Md"," No"," Lr"," Rf"," Db"," Sg"," Bh"," Hs"," Mt"," Ds"," Rg"," Uub"," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},{" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9"," 10"," 11"," 12"," 13"," 14"," 15"," 16"," 17"," 18"," 19"," 20"," 21"," 22"," 23"," 24"," 25"," 26"," 27"," 28"," 29"," 30"," 31"," 32"," 33"," 34"," 35"," 36"," 37"," 38"," 39"," 40"," 41"," 42"," 43"," 44"," 45"," 46"," 47"," 48"," 49"," 50"," 51"," 52"," 53"," 54"," 55"," 56"," 57"," 58"," 59"," 60"," 61"," 62"," 63"," 64"," 65"," 66"," 67"," 68"," 69"," 70"," 71"," 72"," 73"," 74"," 75"," 76"," 77"," 78"," 79"," 80"," 81"," 82"," 83"," 84"," 85"," 86"," 87"," 88"," 89"," 90"," 91"," 92"," 93"," 94"," 95"," 96"," 97"," 98"," 99"," 100"," 101"," 102"," 103"," 104"," 105"," 106"," 107"," 108"," 109"," 110"," 111"," 112"," 113"," 114"," 115"," 116"," 117"," 118"},{" 1.00794"," 4.002602"," 6.941"," 9.01218"," 10.811"," 12.011"," 14.00674"," 15.9994"," 18.998403"," 20.1797"," 22.989768"," 24.305"," 26.981539"," 28.0855"," 30.973762"," 32.066"," 35.4527"," 39.948"," 39.0983"," 40.078"," 44.95591"," 47.88"," 50.9415"," 51.9961"," 54.93805"," 55.847"," 58.9332"," 58.6934"," 63.546"," 65.39"," 69.723"," 72.61"," 74.92159"," 78.96"," 79.904"," 83.8"," 85.4678"," 87.62"," 88.90585"," 91.224"," 92.90638"," 95.94"," 97.9072"," 101.07"," 102.9055"," 106.42"," 107.8682"," 112.411"," 114.818"," 118.71"," 121.760"," 127.6"," 126.90447"," 131.29"," 132.90543"," 137.327"," 138.9055"," 140.115"," 140.90765"," 144.24"," 144.9127"," 150.36"," 151.965"," 157.25"," 158.92534"," 162.50"," 164.93032"," 167.26"," 168.93421"," 173.04"," 174.967"," 178.49"," 180.9479"," 183.84"," 186.207"," 190.23"," 192.22"," 195.08"," 196.96654"," 200.59"," 204.3833"," 207.2"," 208.98037"," 208.9824"," 209.9871"," 222.0176"," 223.0197"," 226.0254"," 227.0278"," 232.0381"," 231.03588"," 238.0289"," 237.048"," 244.0642"," 243.0614"," 247.0703"," 247.0703"," 251.0796"," 252.083"," 257.0951"," 258.1"," 259.1009"," 262.11"," [261]"," [262]"," [266]"," [264]"," [269]"," [268]"," [269]"," [272]"," [277]"," n/a"," [289]"," n/a"," n/a"," n/a"," n/a"},{" \xEE\x14I"," 0"," I"," II"," III"," \xEE\x14IV, II"," V, IV, \xEE\x14III, II"," -II, -I"," -I"," 0"," I"," II"," III"," \xEE\x14IV"," V, \xEE\x14III"," VI, IV, \xEE\x14II"," VII, V, III, \xEE\x14I"," n/a"," I"," II"," III"," IV, III"," V, IV, III, II, 0"," VI, III, II, 0"," VII, VI, IV, III, II, 0, -I"," VI, III, \xEE\x14II, 0"," III, II, 0, -I"," III, II, 0"," II, I"," II"," III"," IV"," V, III, -II"," VI, IV, -II"," VII, V, III, \xEE\x14I"," II"," I"," II"," III"," IV"," V, III"," VI, V, IV, III, II, 0"," VII"," VIII, VII, IV, III, \xEE\x14II, 0"," V, IV, III, II, I, 0"," IV, II, 0"," II, I"," II"," III"," IV, II"," V, III, -II"," VI, IV, II"," VII, V, \xEE\x14I"," VII"," I"," II"," III"," IV, III"," IV, III"," III"," III"," III, II"," III, II"," III"," IV, III"," III"," III"," III"," III, II"," III, II"," III"," IV"," V"," VI, V, IV, III, II, 0"," V, IV, III, II, -I"," VIII, VI, IV, III, \xEE\x14II, 0"," VI, IV, III, II, \xEE\x14I, 0"," IV, II, 0"," III, I"," II, I"," III, I"," IV, II"," V, III"," VI, IV, II"," VII, V, III, \xEE\x14I"," n/a"," I"," II"," III"," IV"," V, IV"," VI, V, IV, III"," VI, V, IV, III"," VI, V, IV, III"," VI, V, IV, III"," IV, III"," IV, III"," IV, III"," III"," III"," III"," III, II"," III"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 1s\xED\xF1"," 1s\xED\xF2"," [He] 2s\xED\xF1"," [He] 2s\xED\xF2"," [He] 2s\xED\xF2 2p\xED\xF1"," [He] 2s\xED\xF2 2p\xED\xF2"," [He] 2s\xED\xF2 2p\xED\xF3"," [He] 2s\xED\xF2 2p\xED\xF4"," [He] 2s\xED\xF2 2p\xED\xF5"," [He] 2s\xED\xF2 2p\xED\xF6"," [Ne] 3s\xED\xF1"," [Ne] 3s\xED\xF2"," [Ne] 3s\xED\xF2 3p\xED\xF1"," [Ne] 3s\xED\xF2 3p\xED\xF2"," [Ne] 3s\xED\xF2 3p\xED\xF3"," [Ne] 3s\xED\xF2 3p\xED\xF4"," [Ne] 3s\xED\xF2 3p\xED\xF5"," [Ne] 3s\xED\xF2 3p\xED\xF6"," [Ar] 4s\xED\xF1"," [Ar] 4s\xED\xF2"," [Ar] 3d\xED\xF1 4s\xED\xF2"," [Ar] 3d\xED\xF2 4s\xED\xF2"," [Ar] 3d\xED\xF3 4s\xED\xF2"," [Ar] 3d\xED\xF5 4s\xED\xF1"," [Ar] 3d\xED\xF5 4s\xED\xF2"," [Ar] 3d\xED\xF6 4s\xED\xF2"," [Ar] 3d\xED\xF7 4s\xED\xF2"," [Ar] 3d\xED\xF8 4s\xED\xF2"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF1"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF1"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF2"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF3"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF4"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF5"," [Ar] 3d\xED\xF1\xED\xF0 4s\xED\xF2 4p\xED\xF6"," [Kr] 5s\xED\xF1"," [Kr] 5s\xED\xF2"," [Kr] 4d\xED\xF1 5s\xED\xF2"," [Kr] 4d\xED\xF2 5s\xED\xF2"," [Kr] 4d\xED\xF4 5s\xED\xF1"," [Kr] 4d\xED\xF5 5s\xED\xF1"," [Kr] 4d\xED\xF6 5s\xED\xF1"," [Kr] 4d\xED\xF7 5s\xED\xF1"," [Kr] 4d\xED\xF8 5s\xED\xF1"," [Kr] 4d\xED\xF1\xED\xF0"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF1"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF1"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF2"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF3"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF4"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF5"," [Kr] 4d\xED\xF1\xED\xF0 5s\xED\xF2 5p\xED\xF6"," [Xe] 6s\xED\xF1"," [Xe] 6s\xED\xF2"," [Xe] 5d\xED\xF1 6s\xED\xF2"," [Xe] 4f\xED\xF1 5d\xED\xF1 6s\xED\xF2"," [Xe] 4f\xED\xF3 6s\xED\xF2"," [Xe] 4f\xED\xF4 6s\xED\xF2"," [Xe] 4f\xED\xF5 6s\xED\xF2"," [Xe] 4f\xED\xF6 6s\xED\xF2"," [Xe] 4f\xED\xF7 6s\xED\xF2"," [Xe] 4f\xED\xF7 5d\xED\xF1 6s\xED\xF2"," [Xe] 4f\xED\xF9 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF0 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF1 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF2 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF3 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF2 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF3 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF4 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF5 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF6 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF7 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF9 6s\xED\xF1"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF1"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF1"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF2"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF3"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF4"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF5"," [Xe] 4f\xED\xF1\xED\xF4 5d\xED\xF1\xED\xF0 6s\xED\xF2 6p\xED\xF6"," [Rn] 7s\xED\xF1"," [Rn] 7s\xED\xF2"," [Rn] 6d\xED\xF1 7s\xED\xF2"," [Rn] 6d\xED\xF2 7s\xED\xF2"," [Rn] 5f\xED\xF2 6d\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF3 6d\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF4 6d\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF6 7s\xED\xF2"," [Rn] 5f\xED\xF7 7s\xED\xF2"," [Rn] 5f\xED\xF7 6d\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF9 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF0 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF2 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF3 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF2 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF3 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF4 7s\xED\xF2"," n/a"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF6 7s\xED\xF2"," [Rn] 5f\xED\xF14 6d\xED\xF7 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF9 7s\xED\xF1"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF1"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF1"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF2"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF3"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF4"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF5"," [Rn] 5f\xED\xF1\xED\xF4 6d\xED\xF1\xED\xF0 7s\xED\xF2 7p\xED\xF6"},{" 0.0708"," 0.147"," 0.534"," 1.848"," 2.34"," 2.25 (graphite)"," 0.808"," 1.149"," 1.108"," 1.204"," 0.971"," 1.738"," 2.6989"," 2.33"," 1.82 (white phosphorus)"," 2.070"," 1.56"," 1.40"," 0.856"," 1.55"," 2.99"," 4.54"," 6.11"," 7.18"," 7.21"," 7.874"," 8.9"," 8.902"," 8.96"," 7.133"," 5.91"," 5.323"," 5.73 (grey arsenic)"," 4.79"," 3.12"," 2.155"," 1.532"," 2.54"," 4.47"," 6.506"," 8.57"," 10.22"," 11.5"," 12.41"," 12.41"," 12.02"," 10.5"," 8.65"," 7.31"," 7.31"," 6.691"," 6.24"," 4.93"," 3.52"," 1.873"," 3.5"," 6.15"," 6.757"," 6.773"," 7.007"," 7.2"," 7.520"," 5.243"," 7.900"," 8.229"," 8.55"," 8.795"," 9.06"," 9.321"," 6.9654"," 9.8404"," 13.31"," 16.654"," 19.3"," 21.02"," 22.57"," 22.42"," 21.45"," 19.3"," 13.546"," 11.85"," 11.35"," 9.747"," 9.32"," n/a"," 4.4"," n/a"," (5.5)"," n/a"," 11.78"," 15.37"," 19.05"," 20.25"," 19.84"," 13.67"," 13.51"," 13.25"," 15.1"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 14.01"," 0.95"," 553.69"," 1551"," 2573"," 3820"," 63.29"," 54.8"," 53.53"," 48"," 370.96"," 922"," 933.5"," 1683"," 317.3"," 386"," 172.2"," 83.8"," 336.8"," 1112"," 1814"," 1933"," 2160"," 2130"," 1517"," 1808"," 1768"," 1726"," 1356.6"," 692.73"," 302.93"," 1210.6"," 1090"," 490"," 265.9"," 116.6"," 312.2"," 1042"," 1795"," 2125"," 2741"," 2890"," 2445"," 2583"," 2239"," 1825"," 1235.1"," 594.1"," 429.32"," 505.1"," 903.9"," 722.7"," 386.7"," 161.3"," 301.6"," 1002"," 1194"," 1072"," 1204"," 1294"," 1441"," 1350"," 1095"," 1586"," 1629"," 1685"," 1747"," 1802"," 1818"," 1097"," 1936"," 2503"," 3269"," 3680"," 3453"," 3327"," 2683"," 2045"," 1337.58"," 234.28"," 576.6"," 600.65"," 544.5"," 527"," 575"," 202"," 300"," 973"," 1320"," 2028"," 2113"," 1405.5"," 913"," 914"," 1267"," 1340"," n/a"," 900"," n/a"," 1800"," 1100"," 1100"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 20.28"," 4.216"," 1118.15"," 3243"," 3931"," 5100"," 77.4"," 90.19"," 85.01"," 27.1"," 1156.1"," 1363"," 2740"," 2628"," 553"," 717.824"," 238.6"," 87.3"," 1047"," 1757"," 3104"," 3560"," 3650"," 2945"," 2235"," 3023"," 3143"," 3005"," 2840"," 1180"," 2676"," 3103"," 876"," 958.1"," 331.9"," 120.85"," 961"," 1657"," 3611"," 4650"," 5015"," 4885"," 5150"," 4173"," 4000"," 3413"," 2485"," 1038"," 2353"," 2543"," 1908"," 1263"," 457.5"," 166.1"," 951.6"," 1910"," 3730"," 3699"," 3785"," 3341"," 3000"," 2064"," 1870"," 3539"," 3296"," 2835"," 2968"," 3136"," 2220"," 1466"," 3668"," 5470"," 5698"," 5930"," 5900"," 5300"," 4403"," 4100"," 3080"," 629.73"," 1730"," 2013"," 1883"," 1235"," 610"," 211.4"," 950"," 1413"," 3470"," 5060"," 4300"," 4018"," 4175"," 3505"," 2880"," n/a"," n/a"," n/a"," 1130"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 79"," 0.0"," 155"," 112"," 98"," 91"," 92"," n/a"," n/a"," n/a"," 190"," 160"," 143"," 132"," 128"," 127"," n/a"," 2-"," 235"," 197"," 162"," 147"," 134"," 130"," 135"," 126"," 125"," 124"," 128"," 138"," 141"," 137"," 139"," 140"," n/a"," n/a"," 248"," 215"," 178"," 160"," 146"," 139"," 136"," 134"," 134"," 137"," 144"," 154"," 166"," 162"," 159"," 160"," n/a"," n/a"," 267"," 222"," 187"," 181"," 182"," 182"," n/a"," 181"," 199"," 179"," 180"," 180"," 179"," 178"," 177"," 194"," 175"," 167"," 149"," 141"," 137"," 135"," 136"," 139"," 146"," 157"," 171"," 175"," 170"," 176"," n/a"," n/a"," n/a"," n/a"," 188"," 180"," 161"," 138"," 130"," 151"," 173"," 299"," 297"," 295"," 292"," 290"," 287"," 285"," 282"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"},{" 14.1"," 31.8"," 13.1"," 5.0"," 4.6"," 5.3"," 17.3"," 14.0"," 17.1"," 16.8"," 23.7"," 14.0"," 10.0"," 12.1"," 17.0"," 15.5"," 18.7"," 24.2"," 45.3"," 29.9"," 15.0"," 10.6"," 8.35"," 7.23"," 7.39"," 7.1"," 6.7"," 6.6"," 7.1"," 9.2"," 11.8"," 13.6"," 13.1"," 16.5"," 23.5"," 32.2"," 55.9"," 33.7"," 19.8"," 14.1"," 10.8"," 9.4"," 8.5"," 8.3"," 8.3"," 8.9"," 10.3"," 13.1"," 15.7"," 16.3"," 18.4"," 20.5"," 25.7"," 42.9"," 70.0"," 39.0"," 22.5"," 21.0"," 20.8"," 20.6"," n/a"," 19.9"," 28.9"," 19.9"," 19.2"," 19.0"," 18.7"," 18.4"," 18.1"," 24.8"," 17.8"," 13.6"," 10.9"," 9.53"," 8.85"," 8.43"," 8.54"," 9.10"," 10.2"," 14.8"," 17.2"," 18.3"," 21.3"," 22.7"," n/a"," n/a"," n/a"," 45.0"," 22.54"," 19.8"," 15.0"," 12.5"," 21.1"," n/a"," 20.8"," 18.28"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"," a"},{" 32"," n/a"," 163"," 90"," 82"," 77"," 75"," 73"," 72"," 71"," 154"," 136"," 118"," 111"," 106"," 102"," 99"," 98"," 203"," 174"," 144"," 132"," 122"," 118"," 117"," 117"," 116"," 115"," 117"," 125"," 126"," 122"," 120"," 116"," 114"," 112"," 216"," 191"," 162"," 145"," 134"," 130"," 127"," 125"," 125"," 128"," 134"," 148"," 144"," 141"," 140"," 136"," 133"," 131"," 235"," 198"," 169"," 165"," 165"," 184"," 163"," 162"," 185"," 161"," 159"," 159"," 158"," 157"," 156"," n/a"," 156"," 144"," 134"," 130"," 128"," 126"," 127"," 130"," 134"," 149"," 148"," 147"," 146"," 146"," (145)"," n/a"," n/a"," n/a"," n/a"," 165"," n/a"," 142"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"," n/a"}};
    CPString elec[118]={"2.2","0","1","1.6","2","2.6","3","3.4","4","0","0.9","1.3","1.6","1.9","2.2","2.6","3.2","0","0.8","1","1.4","1.5","1.6","1.7","1.6","1.8","1.9","1.9","1.9","1.7","1.8","2","2.2","2.6","3","0","0.8","1","1.2","1.3","1.6","2.2","2.1","2.2","2.3","2.2","1.9","1.7","1.8","2","2.1","2.1","2.7","2.6","0.8","0.9","1.1","1.1","1.1","1.1","1.1","1.2","1.2","1.2","1.2","1.2","1.2","1.2","1.3","1.1","1.3","1.3","1.5","1.7","1.9","2.2","2.2","2.2","2.4","1.9","1.8","1.8","1.9","2","2.2","0","0.7","0.9","1.1","1.3","1.5","1.7","1.3","1.3","1.3","1.3","1.3","1.3","1.3","1.3","1.3","1.3","1.3","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0"};
    CPString groupen[10]={" Non-Metal"," Inert Gas"," Alkali Metal"," Alkaline-earth Metal"," Semimetallic"," Halogen"," Other Metal"," Transition Metal"," Rare Earth Element (Lanthanide Series)"," Radioactive Rare Earth Element (Actinide Series)"};
    CPString groupfr[10]={" Non-Metal"," Gaz Inerte"," Metal Alcalin"," Metal Alcalino-Terreux"," Semimetallique"," Halogene"," Autre Metal"," Metal de Transition"," Lanthanide"," Actinide"};
    if(i==0){return;};
    i--;
    switch (GetCurrentLanguageInfo())
	{
		case CurrentLanguage_Fra :
             info="\xEE\x86 Nom : \n   "+namefr[i]+"\n";
             for(int j=1;j<4;j++){info+="\xEE\x86 " +dfr[j-1]+" :\n  "+dataen[j-1][i]+unit[j]+"\n";};
             info+="\xEE\x86 Electronegat. \xED\x7C\xED\xFB :\n   "+elec[i]+"\n";
             info+="\xEE\x86 Groupe :\n  "+groupfr[group[i]]+"\n";
             for(int j=4;j<12;j++){info+="\xEE\x86 " +dfr[j-1]+" :\n  "+dataen[j-1][i]+unit[j]+"\n";};
			 break;
		case CurrentLanguage_Eng :
		default :
             info="\xEE\x86 Name : \n   "+nameen[i]+"\n";
             for(int j=1;j<4;j++){info+="\xEE\x86 " +den[j-1]+" :\n  "+dataen[j-1][i]+unit[j]+"\n";};
             info+="\xEE\x86 Electronegat. \xED\x7C\xED\xFB :\n   "+elec[i]+"\n";
             info+="\xEE\x86 Group :\n  "+groupen[group[i]]+"\n";
             for(int j=4;j<12;j++){info+="\xEE\x86 " +den[j-1]+" :\n  "+dataen[j-1][i]+unit[j]+"\n";};
             break;
	}

    OnDataChanged();
}

void CounterWindow::seemain()
{
    #ifndef WIN32
    //PegRect Rect;
    //Rect.Set(MAINFRAME_LEFT, MAINFRAME_TOP, MAINFRAME_RIGHT, MAINFRAME_BOTTOM);
    CPMainFrame * mf = GetMainFrame();
	//CPMainFrame *mf = new CPMainFrame(Rect);
    //PegRect ChildRect = mf->BottomAppRectangle();
    CPModuleWindow *cwin = ReplaceModuleWindow(IDB_MODULE_MAIN_WINDOW);
    mf->SetTopWindow(cwin);
    #endif
}    

void CounterWindow::liste()
{
    PegRect r = {8,10,155,125};
    CPString datafr[119]={"", "Hydrogene","Helium","Lithium","Beryllium","Bore","Carbone","Azote","Oxygene","Fluor","Neon","Sodium","Magnesium","Aluminum","Silicium","Phosphore","Soufre","Chlore","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chrome","Manganese","Fer","Cobalt","Nickel","Cuivre","Zinc","Gallium","Germanium","Arsenic","Selenium","Brome","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Argent","Cadmium","Indium","ETain","Antimoine","Tellurium","Iode","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungstene","Rhenium","Osmium","Iridium","Platine","Or","Mercure","Thallium","Plomb","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
    PegMessageWindow* cpd = new PegMessageWindow(r,"Test", NULL, MW_OK|MW_CANCEL|FF_RAISED, 0 , 0, 0);
    PegRect ChildRect = {18,28,142,106};
    PegNotebook *p = new PegNotebook(ChildRect,
    NS_TOPTABS|NS_TEXTTABS,4);
    p->SetTabString(0, (PEGCHAR*)"A-C");
    p->SetTabString(1, (PEGCHAR*)"D-L");
    p->SetTabString(2, (PEGCHAR*)"M-R");
    p->SetTabString(3, (PEGCHAR*)"S-Z");
    PegRect rr = {0,0,124,60};
    PegPrompt *pp;
    PegVertList *list = new PegVertList(rr);
    list->SetScrollMode(WSM_AUTOVSCROLL);
    list->Add(new PegPrompt(0, 0, "", 1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    PegVertList *list2 = new PegVertList(rr);
    list2->SetScrollMode(WSM_AUTOVSCROLL);
    list2->Add(new PegPrompt(0, 0, "", 1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    PegVertList *list3 = new PegVertList(rr);
    list3->SetScrollMode(WSM_AUTOVSCROLL);
    list3->Add(new PegPrompt(0, 0, "", 1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    PegVertList *list4 = new PegVertList(rr);
    list4->SetScrollMode(WSM_AUTOVSCROLL);
    list4->Add(new PegPrompt(0, 0, "", 1, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY));
    for (int i=0;i<27;i++)
    {    
    pp = new PegPrompt(0, 0, datafr[ac[i]], 0, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY);
    list->AddToEnd(pp);
    pp = new PegPrompt(0, 0, datafr[dl[i]], 0, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY);
    list2->AddToEnd(pp);
    }
    for (int i=0;i<33;i++)
    {    
    pp = new PegPrompt(0, 0, datafr[mr[i]], 0, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY);
    list3->AddToEnd(pp);
    }
    for (int i=0;i<31;i++)
    {    
    pp = new PegPrompt(0, 0, datafr[sz[i]], 0, FF_NONE|TJ_LEFT|AF_ENABLED|TT_COPY);
    list4->AddToEnd(pp);
    }    
    CPWindow *win = new CPWindow(rr,FF_NONE);
    win->AddR(list);   
    p->SetPageClient(0,win);
    win = new CPWindow(rr,FF_NONE);
    win->AddR(list2);   
    p->SetPageClient(1,win);
    win = new CPWindow(rr,FF_NONE);
    win->AddR(list3);   
    p->SetPageClient(2,win);
    win = new CPWindow(rr,FF_NONE);
    win->AddR(list4);   
    p->SetPageClient(3,win);
    p->SelectTab(0);
    cpd->Add(p);
    cpd->Execute();
    if ((int)p->GetCurrentPage()==0 && list->GetSelectedIndex()!=0)
    {
        int elem = (int)list->GetSelectedIndex();
        disp(ac[elem-1]);
    }
    else if ((int)p->GetCurrentPage()==1 && list2->GetSelectedIndex()!=0)
    {
        int elem = (int)list2->GetSelectedIndex();
        disp(dl[elem-1]);
    }
    else if ((int)p->GetCurrentPage()==2 && list3->GetSelectedIndex()!=0)
    {
        int elem = (int)list3->GetSelectedIndex();
        disp(mr[elem-1]);
    }
    else if ((int)p->GetCurrentPage()==3 && list4->GetSelectedIndex()!=0)
    {
        int elem = (int)list4->GetSelectedIndex();
        disp(sz[elem-1]);
    }
}  


//-----------------------------------------------------------------
// Respond to messages
SIGNED CounterWindow::Message(const PegMessage &Mesg)
{
    //ScribbleWindow * parent = (ScribbleWindow*) Parent();
	switch(Mesg.wType)
    {
		case PM_SIZE:
	        CPModuleWindow::Message(Mesg);
		    {
		        PegMessage msg(this,PM_SCRIBBLE_SIZE_CHANGED);
		        MessageQueue()->Push(msg);
		    }
		    break;
         	case SIGNAL( btnsave, PSF_CLICKED):
	        SaveVar();
         	break;
         	case SIGNAL( btnlist, PSF_CLICKED):
	        liste();
         	break;
         	case SIGNAL( btnmain, PSF_CLICKED):
            seemain();
         	break;
		    
		default:
	        return CPModuleWindow::Message(Mesg);
    }
    return 0;
}

//-----------------------------------------------------------------
// Function below instructs the window to re-draw when data in the document has
// been changed (and OnChangedData has been called for the document)
void CounterWindow::OnDataChanged()
{
    BeginDraw();
	Invalidate(mClient);
	Draw();
	EndDraw();
}
//-----------------------------------------------------------------

